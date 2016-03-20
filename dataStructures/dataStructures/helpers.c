//
//  helpers.c
//  dataStructures
//
//  Created by Muhammed Othman on 3/19/16.
//  Copyright © 2016 Muhammed Othman. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "helpers.h"

// initializing a head pointer
//node* head;

/**
 *
 * pushes n into a stack
 *
 */
void push(int n)
{
    // TODO
}


/**
 *
 * pops from a stack
 *
 */
void pop(void)
{
    // TODO
}


/**
 *
 * enqueues n into a queue
 *
 */
void enqueue(int n)
{
    // TODO
}


/**
 *
 * dequeues from a stack
 *
 */
void dequeue(void)
{
    // TODO
}


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
 * searching a singly linked list
 *
 */
bool searchLinkedList(node* list, int n)
{
    node* ptr = list;
    while (ptr != NULL)
    {
        if (ptr->data == n)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}


/**
 *
 *  inserting at head in a singly linked list
 *
 */
void insertAtHead(node* head, int n)
{
    // create a new node
    node* new = malloc(sizeof(node));
    
    
    // check for null
    if(new == NULL)
    {
        exit(1);
    }
    
    // initialize new node
    new->data = n;
    new->next = NULL;
    
    // insert new node at head
    new->next = head;
    head = new;
}


/**
 *
 *  inserting at middle in a singly linked list
 *
 */
void insertAtMiddle(node* head, int n)
{

}


/**
 *
 *  inserting at end of a singly linked list
 *
 */
void insertAtEnd(node* head, int n)
{
    // create a new node
    node* new = malloc(sizeof(node));
    
    if (new == NULL)
    {
        exit(1);
    }
    
    // initialize new node
    new->data = n;
    new->next = NULL;
    
    // create a temp pointer to head
    node* temp = head;
    
    // find end of linked list
    while(temp != NULL)
    {
        temp = temp->next;
    }
    
    // insert node at tail
    temp->next = new;
}


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
bool searchBST(TreeNode* root, int val)
{
    // if root is NULL
    if (root == NULL)
    {
        return false;
    }
    
    // if root->data is val
    if (root->data == val)
    {
        return true;
    }
    
    // if val is less than root->data
    if (val < root->data)
    {
        searchBST(root->left, val);
    }
    
    // if val is greater than root->data
    if (val > root->data)
    {
        searchBST(root->right, val);
    }
    // didn't find val
    return false;
}


////////////////////////////////////////////////
/**
 *
 *
 *
 *
 * different methods and operations on tries
 *
 */