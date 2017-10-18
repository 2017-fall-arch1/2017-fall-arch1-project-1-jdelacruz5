# arch1-linked-list-demo

This directory contains:
* code that implements a linked list of strings 
* a demo program that uses it

The demo program reads lines from stdin.
Each line is appended onto a linked list.
After end-of-file is read, the lines are printed out.

This demo contains the following files:
 llist.h: header file of llist structure & "public" interface functions
 llist.c: implementation of linked list
 listDemo.c: a demonstration program that uses the linked list
 

To compile:
~~~
$ make
~~~

To test it, try:
~~~
$ make demo
~~~

To delete binaries:
~~~
$ make clean
~~~

The code enables the user to build a bst of employees names. I however could not figure out how to read names from a file into the bst. I can input names into the terminal and enter them into the BST that way and print all the names. I didn't inplement remove or write or read file.
I worked in collabration with Daniel Maynes.

