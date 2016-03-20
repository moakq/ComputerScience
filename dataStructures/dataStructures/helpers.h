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


// -MARK: Singly linked list functions


/**
 *
 *  iterate over a linked list
 *
 */
void iterateList(node* head);

/**
 *
 *  returns a length of a singly linked list
 *
 */
int lengthLL(node* list);


/**
 *
 * searching a singly linked list
 *
 */
bool searchLinkedList(node* list, int n);


/**
 *
 *  insertion at head in a linked list
 *  passing a the head pointer by reference (pointer to pointer)
 *
 */
void insertAtHead(node** headRef, int n);


/**
 *
 *  inserting at middle of a linked list
 *
 */
void insertAtN(node* head, int n);


/**
 *
 *  inserts node at end of a singly linked list
 *
 */
void insertAtEnd(node** headRef, int n);


/**
 *
 *  inserts node at end of a singly linked list using insertAtHead
 *
 */
void insertAtEndwithPush(node** headRef, int n);


/**
 *
 *  copies a singly linked list
 *
 */
node* copySLL(node* head);

/**
 *
 *  copies a singly linked list recursively
 *  clean, but uses stack space proportional to the length of list
 *
 */
node* recurCopySSL(node* head);

// -MARK: doubly linked list functions

// -MARK: Stack functions

// -MARK: Queue functions

// -MARK: Tree functions

/**
 *
 *  search a binary search tree
 *
 */
bool searchBST(TreeNode* root, int val);

// -MARK: Trie functions
