#ifndef BST_included		/* prevent multiple inclusion */
#define BST_included


/* a linked-list item 
typedef struct LLItem_s {
  struct LLItem_s *next; 
  char *str;
} LLItem;
*/

/*The children of the BST root */
typedef struct Child
{
  struct Child *left;
  struct Child *right;
  char *name;
}Child;

/*The root of the BST */
typedef struct {
  Child *root;
} BST;


/* create a new BST */
BST *llAlloc();

/* Inserts child nodes to BST */
Child* insertChild(Child *root, Child *child);

/* Insert into the BST */
void Insert(BST *employees, char *name);

/* Prints the whole BST */
void printAll(Child* employees);

void print(BST* root);

#endif	/* included */
