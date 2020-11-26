#ifndef dlb_h
#define dlb_h
#include<stdio.h>
#include<malloc.h>

typedef int  datatype;
typedef struct LNode
{  datatype data;
   struct LNode *next;
}LNode,*LinkList;



LinkList Creat_LinkList();
int Length_LinkList(LinkList L);
int Insert_LinkList(LinkList L,int i,datatype x);
int  Del_LinkList(LinkList L,int i);
int Empty(LinkList L);
void Get_LinkList(LinkList L,int i);
LNode *Locate_LinkList(LinkList L,datatype x);
void printList(LinkList L);
void ClearList(LinkList L);
#endif
