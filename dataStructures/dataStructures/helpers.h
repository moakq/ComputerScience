//
//  helpers.h
//  dataStructures
//
//  Created by Muhammed Othman on 3/19/16.
//  Copyright © 2016 Muhammed Othman. All rights reserved.
//

#ifndef helpers_h
#define helpers_h
#endif /* helpers_h */

#include <stdio.h>
#include <stdbool.h>

/**
 *
 * defining a singly linked list node
 *
 */
typedef struct node
{
    // val stored in node
    int data;
    
    // pointer to next node
    struct node* next;
    
}node;


/**
 *
 * defining a doubly linked list node
 *
 */
typedef struct DLLnode
{
    // val stored in node
    int data;
    
    // pointer to next node
    struct DLLnode* next;
    
    // pointer to prev node
    struct DLLnode* prev;
    
}DLLnode;


/**
 *
 * defining a Tree node
 *
 */
typedef struct TreeNode
{
    // val stored in node
    int data;
    
    // pointer to left node
    struct TreeNode* left;
    
    // pointer to right node
    struct TreeNode* right;
    
}TreeNode;


/**
 *
 * defining a Trie node
 *
 */
typedef struct TrieNode
{
    // marker for end of word
    bool is_word;
    
    //pointers to other nodes
    struct TrieNode* children[27];
    
}TrieNode;


/**
 *
 * pushes n into a stack
 *
 */
void push(int n);


/**
 *
 * pops from a stack
 *
 */
void pop(void);


/**
 *
 * enqueues n into a queue
 *
 */
void enqueue(int n);


/**
 *
 * dequeues from a stack
 *
 */
void dequeue(void);


////////////////////////////////////////////////
/**
 *
 *
 *
 *
 * different methods and operations on singly linked lists
 *
 */


/**
 *
 * searching a linked list
 *
 */
bool searchLinkedList(node* list, int n);


/**
 *
 *  insertion at head in a linked list
 *
 */
void insertAtHead(node* head, int n);


/**
 *
 *  inserting at middle of a linked list
 *
 */
void insertAtMiddle(node* head, int n);


/**
 *
 *  inserting at end of a linked list
 *
 */
void insertAtEnd(node* head, int n);



////////////////////////////////////////////////
/**
 *
 *
 *
 *
 * different methods and operations on doubly linked lists
 *
 */





////////////////////////////////////////////////
/**
 *
 *
 *
 *
 * different methods and operations on stacks
 *
 */



////////////////////////////////////////////////
/**
 *
 *
 *
 *
 * different methods and operations on queues
 *
 */



////////////////////////////////////////////////
/**
 *
 *
 *
 *
 * different methods and operations on trees
 *
 */


/**
 *
 *  search a binary search tree
 *
 */
bool searchBST(TreeNode* root, int val);