#include <stdio.h>		/* for puts,  */
#include <stdlib.h> 		/* for malloc */
#include <assert.h>		/* for assert */
#include <string.h>             /* for string */
#include "llist.h"		


#define doCheck(_lp) (llDoCheck && llCheck(_lp))

/* create a new list */
/*LList *llAlloc()
{
  LList *lp = (LList *)malloc(sizeof(LList));
  lp->first = lp->last = 0;
  doCheck(lp);
  return lp;
}
*/
BST *llAlloc()
{
  BST *employees = (BST *)malloc(sizeof(BST));
  employees->root = NULL;
  return employees;
}

/* Create new BST */
void Insert(BST *employees,char *name)
{
  int len;
  char *scopy;
  Child *child;

  child = (Child *)malloc(sizeof(Child));
  for(len = 0; name[len]; len++);
  
  scopy = (char *)malloc(len+1);
  for(len = 0; name[len]; len++){
    scopy[len] = name[len];
  }
  scopy[len]=0;
  child->name = scopy;
  child->left = NULL;
  child->right = NULL;
  employees->root = insertChild(employees->root,child);
}

Child* insertChild(Child *root, Child *child)
{
  if(root == NULL){
    return child;
  }
  if(strcmp(child->name, root->name) < 0 ){
    root->right = insertChild(root->right,child);
  }
  else{
    root->left = insertChild(root->left,child);
  }
  return root;
}

/* print list membership.  Prints default mesage if message is NULL */
void printAll(Child* employees)
{
  if(employees == NULL){
    return;
  }
  printAll(employees->right);
  printf("%s\n",employees->name);
  printAll(employees->left);
  
}
void print(BST *root){
    printAll(root->root);
}

