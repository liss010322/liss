#include<stdio.h>
#include<malloc.h>
#include "dlb.h"

//创建链表
LinkList Creat_LinkList()
{       LinkList L=NULL;
	LNode *s,*r=NULL;
	int x;
        printf("请依次输入元素并且按回车，以值50终止(不包含50）。\n");
	scanf("%d",&x);
	while(x!=50)
	{s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		if(L==NULL)L=s;
		else r->next=s;
		r=s;
		scanf("%d",&x);
	}
	if(r!=NULL)   r->next=NULL;
	return L;
}

//求单链表的元素个数
int Length_LinkList(LinkList L)
{
        LNode *p=L;
	int j=1;
	while (p->next)
	{
		p=p->next;
		j++;
	}
	return j;
}
//在链表L的第i个位置插入值为x的元素
int Insert_LinkList(LinkList L,int i,datatype x)
{
	LNode *p=L,*s;
	s=(LNode *)malloc(sizeof(LNode));
	s->data=x;
	s->next=p->next;
	p->next=s;
}
//删除单链表L的第i个元素
int  Del_LinkList(LinkList L,int i)
{
	LinkList p,s;	
	if(p->next==NULL)
	{printf("第i个结点不存在");
		return 0;}
	      else
	      {s=p->next;
	       p->next=s->next;
	       free(s);
	       return 1;}
}
//判断链表是否为空
int Empty(LinkList L){
	return L->next==NULL;
}
//求链表L的第i个元素
void Get_LinkList(LinkList L,int i)
{
	LNode *p=L;
	int j=0;
	while(p->next!=NULL&&j<i)
	{p=p->next; j++;}
	if(j==i) printf("链表L第%d个元素为：%d\n",i+1,p->data);
}
//在链表L中查找值为x的元素
LNode *Locate_LinkList(LinkList L,datatype x)
{
	LNode *p=L->next;
	while (p!=NULL&& p->data!=x)
		p=p->next;
	return p;
}
//输出链表
void printList(LinkList L)
{
	LNode *p=L;
	printf("表中数据为：");
	while (p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
//清空链表
void ClearList(LinkList L)
{
LNode *p,*q;
p=L->next;
while(p){
q=p;
p=p->next;
free(q);}
L->next=NULL;
} 
