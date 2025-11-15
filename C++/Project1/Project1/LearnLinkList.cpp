//#include <stdio.h>
//#include<stdlib.h>
//
//
////链表： 是结构体变量与结构体变量通过指针链接在一起
////动态创建一个链表：动态内存申请加模块化设计
////1.创建链表（创建一个表头用于表示整个节点）
////2.创建阶段
////3.插入节点
////4.删除节点
////5.打印节点
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
////创建一个函数返回链表的头节点的地址
//struct Node* createList()
//{
//	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
//	//headNode 成为了结构体变量
//	//变量使用前必须初始化
//	headNode->data = 1;
//	headNode->next = NULL;
//	return headNode;
//};
//
////创建节点
//struct  Node* createNode(int data) {
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	return newNode;
//};
//
////打印节点
//void printList(struct Node* head) {
//	struct Node* currentNode = head->next;
//	while (currentNode != NULL) {
//		printf("%d -> ", currentNode->data);
//		currentNode = currentNode->next;
//	}
//	printf("节点数据打印完毕");
//}
//
////插入节点
//void insertNode(struct Node* head, int data) {
//	struct Node* newNode = createNode(data);
//
//	struct Node* currentNode = head;
//
//	//找到链表的最后一个节点（尾插入）
//	//while (currentNode->next != NULL) {
//	//	currentNode = currentNode->next;
//	//}
//	//currentNode->next = newNode;
//
//	//插入到表头之后
//	newNode->next = currentNode->next;
//	currentNode->next = newNode;
//}
//
////删除指定数据的节点
//void deleteNode(struct Node* head, int data) {
//	struct Node* currentNode = head;
//	while (currentNode->next != NULL) {
//		//找到要删除的节点
//		if (currentNode->next->data == data)
//		{
//			currentNode->next = currentNode->next->next;
//
//			break;
//		}
//		else
//		{
//			if (currentNode->next == NULL) {
//				printf("没有找到要删除的节点");
//				return;
//			}
//			else {
//				currentNode = currentNode->next;
//			}
//
//		};
//	}
//}
//
//void main() {
//
//	struct Node* LinkList = createList();
//
//	insertNode(LinkList, 1);
//	insertNode(LinkList, 2);
//	insertNode(LinkList, 3);
//	insertNode(LinkList, 4);
//	printList(LinkList);
//	//
//	deleteNode(LinkList, 3);
//	printList(LinkList);
//
//}