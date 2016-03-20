//
//  main.c
//  dataStructures
//
//  Created by Muhammed Othman on 3/19/16.
//  Copyright © 2016 Muhammed Othman. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main(int argc, const char * argv[]) {
    
    // build an interface to interact with different data structures
    // switch statments etc
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    
    head = malloc(sizeof(node));
    second = malloc(sizeof(node));
    third = malloc(sizeof(node));
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    
    insertAtEndwithPush(&head, 4);
    
    iterateList(head);
    
    //insertAtHead(&head, 0);
    // testing search
    bool check = searchLinkedList(head, 4);
    printf(check ? "true\n": "false\n");
    
    
    // testing lenght
    printf("length: %d\n", lengthLL(head));
}
