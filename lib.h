

#ifndef LIST_NODE_H
#define LIST_NODE_H

typedef struct ListNode ListNode;

ListNode* Create(int);

ListNode* CreateNext(int, ListNode*);

void Print(ListNode*);

void Free(ListNode*);
#endif