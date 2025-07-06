
#include "lib.h"
#include <stdio.h>
#include <stdlib.h>


struct ListNode
{
    int val;
    ListNode* next;
};

ListNode* Create(int value) 
{
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    if (!node) 
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    node->val = value;
    node->next = NULL;
    return node;
}

ListNode* CreateNext(int value, ListNode* next) 
{
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    if (!node) 
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    node->val = value;
    node->next = next;
    return node;
}

void Print(ListNode* head) 
{
    ListNode* curr = head;
    while (curr != NULL) 
    {
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("NULL\n");
}

void Free(ListNode* head) 
{
    ListNode* curr = head;
    while (curr != NULL) 
    {
        ListNode* temp = curr;
        curr = curr->next;
        free(temp);
    }
}