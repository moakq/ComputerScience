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
    int data;
    struct node* next;
}node;


/**
 *
 * defining a doubly linked list node
 *
 */
typedef struct DLLnode
{
    int data;
    struct DLLnode* next;
    struct DLLnode* prev;
}DLLnode;

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
 * different methods and operations on stacks
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
