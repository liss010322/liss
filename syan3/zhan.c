#include<stdio.h>
#include<malloc.h>
#include "zhan.h"


//初始化链栈
LinkStack* InitStack() {
	LinkStack *t=(LinkStack*)malloc(sizeof(LinkStack));
	t->next=NULL;
	return t;
}


//判断栈是否为空
int Empty(LinkStack *s){
	return s->next ==NULL;
}

//元素x进栈
void push(LinkStack *s,dataType x){
        LinkStack *t=(LinkStack*)malloc(sizeof(LinkStack));
	t -> data =x;
	t -> next =s -> next;
	s -> next =t;
}

//出栈
void pop(LinkStack *s){
	if (Empty(s)) exit(1);
	LinkStack *p = s -> next;
	s -> next = p -> next;
	free(p);
}

//取栈顶元素的值
dataType GetTop(LinkStack *s){
	return s->next->data;
}

//将十进制数转换为2~16进制数
char *c ="0123456789ABCDEF";
void Conversion(int n,int d){

	LinkStack *s =InitStack();

	while (n){
		push(s,n%d);
		n /=d;
	}
	while (!Empty(s)){
		printf("%c",c[GetTop(s)]);
		pop(s);
	}
	printf("\n");
}

