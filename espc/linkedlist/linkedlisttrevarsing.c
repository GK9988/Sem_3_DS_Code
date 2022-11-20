#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void trivarsal(struct Node* ptr){
    while(ptr!=NULL){
    printf("elment is: %d\n", ptr->data);
    ptr = ptr->next;
    }

}
int main()
{
    //creating nodes
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    //DMA in heap
    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    fourth=(struct Node *) malloc(sizeof(struct Node));
    //inserting data
    head->data = 11;
    head->next =second;
    second->data=48;
    second->next=third;
    third->data=13;
    third->next=fourth;
    fourth->data=98;
    fourth->next=NULL;//terminating the linked list
    trivarsal(head);
    return 0;
}