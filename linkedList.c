#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList *LIST;
typedef struct node* NODE;
struct node
{
    int element;
    NODE next;
};
struct linkedList
{
    int count;
    NODE head;
};

LIST newList(){
    LIST list;
    list=(LIST) malloc(sizeof(struct linkedList));
    list->count=0;
    list->head=NULL;
    return list;
}

NODE newNode(int x){
    NODE node;
    node=(NODE) malloc(sizeof(struct node));
    node->element=x;
    node->next=NULL;
    return node;
}

void addNodeToList(LIST list,NODE node){
    if(list->count==0){
        list->head=node;
        list->count++;
        node->next=NULL;
    }
    else{
        node->next=list->head;
        list->head=node;
        list->count++;
    }
}

void addNodeInEnd(LIST list,NODE node){
    if(list->count==0){
        list->head=node;
        node->next=NULL;
        list->count++;
    }
    else{
        NODE lastNode;
        lastNode->next=list->head;
        while (lastNode->next!=NULL)
        {
            lastNode=lastNode->next;
        }
        lastNode->next=node;
        list->count++;
        node->next=NULL;
    }
}

void addAfterElement(LIST list,NODE node, int element){
    NODE searchNode;
    searchNode=list->head;
    for (int i = 0; i <= list->count; i++)
    {
        if(searchNode->element==element){
            break;
        }
        searchNode=searchNode->next;
    }
    
    node->next=searchNode->next;
    searchNode->next=node;
    list->count++;
}

void removeFirstNode(LIST list){
    NODE node = list->head;
    list->head=node->next;
    free(node);
    list->count--;
}

void removeLastNode(LIST list){
    NODE node;
    node=list->head;
    while (node->next!=NULL)
    {
        node=node->next;
    }
    free(node);
}

int searchForInLinkedList(LIST list,int element){
    NODE node=list->head;
    int count=1;
    for(count;count<=list->count;count++){
        if(node->element==element){
            return count;
        }
        else{
            node=node->next;
        }
    }
    return -1;
}

void printList(LIST list){
    if(list->count!=0){
    NODE node=list->head;
    while (node->next!=NULL)
    {
        printf("The node element is : %d\n",node->element);
        node=node->next;
    }
    printf("The node element is : %d\n",node->element);
    }
}

void removeElement(LIST list,int element){
    NODE node=list->head;
    NODE prev=node;
    while (node->next!=NULL)
    {
        if(node->element==element)
            break;
        prev=node;
        node=node->next;
    }
    if(node->element!=element)
        printf("Element not found.\n");
    else{
        prev->next=node->next;
        list->count--;
        free(node);
    }
}

int isEmpty(LIST list){
    NODE node = list->head;
    if(node==NULL){
        printf("\nEmpty");
        return 1;
    }
    else{
        printf("\nNot Empty");
        return 0;
    }
}

int main(){
    LIST list =newList();
    
    // NODE node1= newNode(5);
    // NODE node2= newNode(6);
    // NODE node3= newNode(7);
    // NODE node4= newNode(8);
    // NODE node5= newNode(9);
    // NODE node6= newNode(10);
    // NODE node7= newNode(11);

    // addNodeToList(list,node1);
    // addNodeToList(list,node2);
    // addNodeToList(list,node3);
    // addNodeToList(list,node4);
    // addNodeToList(list,node5);
    // addNodeToList(list,node6);
    // addAfterElement(list,node7,9);

    int x=isEmpty(list);
    printList(list);
    printf("%d\n",list->count);
    return 0;
}