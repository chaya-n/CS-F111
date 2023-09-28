#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linkedList *LIST;
typedef struct node* NODE;

typedef struct{
    char ID[15];
    int marks[5];
} STUDENT;
struct node
{
    STUDENT element;
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

NODE newNode(STUDENT stud){
    NODE node;
    node=(NODE) malloc(sizeof(struct node));
    node->element=stud;
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

STUDENT newStudent(char id[15],int mark[5]){
    STUDENT student;
    strcpy(student.ID,id);
    for (int i = 0; i < 5; i++)
    {
        student.marks[i]=mark[i];
    }
   return student;
}


void printList(LIST l1){
    NODE temp=l1->head;
    for (int i = 0; i < l1->count; i++)
    {
        printf("The name of student is : %s",temp->element.ID);
        printf("%d\n",i);
        temp=temp->next;
    }
}

int main(){

    STUDENT s1,s2,s3;
    int mark1[5]={10,10,10,10,10};
    int mark2[5]={10,10,10,10,0};
    int mark3[5]={0,10,10,10,10};
    s1=newStudent("Chayan",mark1);
    s2=newStudent("Lily",mark2);
    s3=newStudent("Main",mark3);

    LIST list = newList();

    NODE node1,node2,node3;

    node1=newNode(s1);
    node2=newNode(s2);
    node3=newNode(s3);

    addNodeToList(list,node1);
    addNodeToList(list,node2);
    addNodeToList(list,node3);
    
    printList(list);

    printf("Hi mom %d",list->count);
}