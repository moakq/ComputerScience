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
    bool check = searchLinkedList(head, 2);
    printf(check ? "true\n": "false\n");
}
