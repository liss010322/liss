#ifndef zhan_h
#define zhan_h
#include<stdio.h>
#include<malloc.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
}LinkStack;

LinkStack* InitStack();
int Empty(LinkStack *s);
void push(LinkStack *s,dataType x);
void pop(LinkStack *s);
dataType GetTop(LinkStack *s);
void Conversion(int n,int d);
#endif
