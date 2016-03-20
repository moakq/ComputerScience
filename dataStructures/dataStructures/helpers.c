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


// -MARK: Singly linked list functions

void iterateList(node* head)
{
    node* current  = head;
    if (head == NULL)
    {
        printf("list is empty\n");
        exit(1);
    }
    else
    {
        while (current != NULL) {
            printf("[ %02d ] -> ", current->data);
            current = current->next;
        }
        printf(" NULL\n");
    }
}

int lengthLL(node* list)
{
    node* current = list;
    int count = 0;
    
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


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


void insertAtHead(node** headRef, int n)
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
    new->next = *headRef;
    *headRef = new;
}


void insertAtN(node* head, int n)
{

}


void insertAtEnd(node** headRef, int n)
{
    // create a new node
    node* newNode = malloc(sizeof(node));
    
    if (newNode == NULL)
    {
        exit(1);
    }
    
    // initialize new node
    newNode ->data = n;
    newNode->next = NULL;
    
    // create a temp pointer to head
    node* current = *headRef;
    
    // find end of linked list
    // special case if list is empty
    if (current == NULL)
    {
        *headRef = newNode;
    }
    else
    {
        while(current->next != NULL)
        {
            current = current->next;
        }
        // insert node at tail
        current->next = newNode;
    }
}

void insertAtEndwithPush(node** headRef, int n)
{
    node* current = *headRef;
    
    // special case for empty node
    if (current == NULL) {
        insertAtHead(headRef, n);
    }
    else
    {
        // locate the last node
        while (current->next != NULL) {
            current = current->next;
        }
        
        // build the node after the last node
        insertAtHead(&(current->next), n);
    }
}

node* copySLL(node* head)
{
    // used to iterate over original list
    node* current = head;
    
    // head of new list
    node* newList = NULL;
    
    // to keep track of the tail of new list
    node* tail = NULL;
    
    while (current != NULL) {
        // special case for the first node
        if (newList == NULL)
        {
            newList = malloc(sizeof(node));
            newList->data = current->data;
            newList->next = NULL;
            tail = newList;
        }
        else
        {
            tail->next = malloc(sizeof(node));
            tail = tail->next;
            tail->data = current->data;
            tail->next = NULL;
        }
        current = current->next;
    }
    return(newList);
}

node* recurCopySSL(node* head)
{
    node* current = head;
    
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        // make the one node
        node* newList = malloc(sizeof(node));
        newList->data = current->data;
        
        // recur for the rest
        newList->next = recurCopySSL(current->next);
        return newList;
    }
}

// -MARK: Doubly linked lists functions


// -MARK: Stack functions


void push(int n)
{
    // TODO
}


void pop(void)
{
    // TODO
}


// -MARK: Queue functions


void enqueue(int n)
{
    // TODO
}


void dequeue(void)
{
    // TODO
}


// -MARK: Tree functions


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


// -MARK: Trie functions