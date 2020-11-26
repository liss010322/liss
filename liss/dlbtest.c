#include "dlb.h"

int main()
{

        LinkList list=Creat_LinkList();
        Insert_LinkList(list,3,15);
        printf("执行命令：在表中第2个位置插入元素15。\n");
        printList(list);
        printf("链表中的元素个数为：%d\n",Length_LinkList(list));
        Get_LinkList(list,3);
}
