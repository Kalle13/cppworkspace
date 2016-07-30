#include <stdio.h>
#include <iostream>
using namespace std;

typedef unsigned int uint;

struct Node {
  int data;
  struct Node* next;
};

Node* CreateLinkedList(int numNodes);
Node* CreateNodeArray(int numElements, int deleteFlag);
void PrintLinkedListElements(Node* nodeHead);
void Print(Node* head);
Node* Insert(Node *head,int data);

int main(){

    Node pHead;// = CreateNodeArray(10,0);
    //PrintLinkedListElements(pHead);
    pHead.data = 10;
    pHead.next = NULL;
    printf("%d, %p", pHead.data, pHead.next);

/*
    Node tempLinkedListMember;
    Node newLinkedListMember;

    for(int i=0;i<10;i++){
        newLinkedListMember.data = i;
        tempLinkedListMember.next = &newLinkedListMember;
        tempLinkedListMember = newLinkedListMember;
        printf("Data = %d\nAddress = %p\nNext Address = %p\n", newLinkedListMember.data, &newLinkedListMember, newLinkedListMember.next);
    }
*/
    return 0;
}

// Function CreateNode Array creates a linked list using an array and returns the address of the array (i.e. the head node's address)
Node* CreateNodeArray(int numElements, int deleteFlag){
    Node* nodeArray;
    if(deleteFlag == 0){
        nodeArray = new Node[numElements];
        for(uint i = 0;i<sizeof(nodeArray)/sizeof(Node);i++){
          nodeArray[i].data = i*i-2*i+3;
        }
        for(uint i = 0;i<(sizeof(nodeArray)/sizeof(Node) - 1);i++){
          nodeArray[i].next = &nodeArray[i+1];
        }
        nodeArray[numElements-1].next = NULL;
        return &nodeArray[0];
    }
    else{
        delete[] nodeArray;
        return NULL;
    }
}

// Function CreateLinkedList creates a linked list and returns the address of the head node
Node* CreateLinkedList(int numNodes){
    Node newNodeA;
    Node* linkedListHead = &newNodeA;
    newNodeA.data = 0;
    for(int i=0;i<numNodes;i++){
        Node newNodeB;
        newNodeB.data = 0;
        newNodeA.next = &newNodeB;
        newNodeA = newNodeB;
        if(i == numNodes-1){
            newNodeA.next = NULL;
        }
    }
    return linkedListHead;
}

void PrintLinkedListElements(Node* nodeHead){
    int nodeCount = 0;
    Node currentNode = *nodeHead;
    printf("Node#\t\tData\t\tAddress(Hex)\t\tAddress(integer)\n");
    while(nodeHead != NULL){
        //printf("%d\t\t%d\t\t0x%08x\t\t%d\n", nodeCount, currentNode.data, (uint) &currentNode, (uint) &currentNode);
        printf("%d\t\t%d\n", nodeCount, currentNode.data);
        nodeHead = currentNode.next;
        currentNode = *nodeHead;
        nodeCount++;
    }
}

// Print method for HackerRank problem 'Print the Elements of a Linked List'
void Print(Node* head)
{
    Node linkedList;
    while(head != NULL){
      linkedList = *head;
      printf("%d\n", linkedList.data);
      head = linkedList.next;
    }
}

// Insert method for HackerRank problem 'Insert a Node at the Tail of a Linked List'
Node* Insert(Node *head,int data)
{
    Node* pHeadOfLinkedList = NULL;
    Node a;
    if(head == NULL) {
        a.data = data;
        a.next = NULL;
        pHeadOfLinkedList = &a;
        return pHeadOfLinkedList;
    }
    else {
        pHeadOfLinkedList = head;
        Node b;
        b.data = data;
        while(head != NULL){
            a = *head;
            head = a.next;
        }
        a.next = &b;
        return pHeadOfLinkedList;
    }
}
