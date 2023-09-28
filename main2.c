#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertNodeAtEnd(NODE n1, LIST l1);
void insertNodeIntoList(NODE n1, LIST l1);
NODE createNewNode(STUDENT value);
LIST createNewList();
void printList(LIST l1);
void printNode(NODE n1);
STUDENT newStudent(char id[15],int mark[5]);

typedef struct{
    char ID[15];
    int marks[5];
} STUDENT;

typedef struct node * NODE;
struct node{
	STUDENT student;
	NODE next;
};

typedef struct linked_list * LIST;
struct linked_list{
	int count;
	NODE head;
};

STUDENT newStudent(char id[15],int mark[5]){
    STUDENT student;
    strcpy(student.ID,id);
    for (int i = 0; i < 5; i++)
    {
        student.marks[i]=mark[i];
    }
    return student;
}
void printNode(NODE n1){
    printf("Node element is: \t");
    puts(n1->student.ID);
}

void printList(LIST l1){
    NODE temp=l1->head;
    for (int i = 0; i < l1->count; i++)
    {
        printNode(temp);
        printf("%d\n",i);
        temp=temp->next;
    }
}

LIST createNewList(){
    LIST list;
    list=(LIST) malloc(sizeof(struct linked_list));
    list->count=0;
    list->head=NULL;
    return list;	
}

NODE createNewNode(STUDENT value){
	NODE node;
    node=(NODE) malloc(sizeof(struct node));
    node->next=NULL;
    node->student=value;
    return node;
}


void insertNodeIntoList(NODE n1, LIST l1){
	if(l1->count==0){
        l1->head=n1;
        l1->count++;
        n1->next=NULL;
    }
    else{
        n1->next=l1->head;
        l1->head=n1;
        l1->count++;
    }
}

void insertNodeAtEnd(NODE n1, LIST l1){
    if(l1->count==0){
        l1->head=n1;
        n1->next=NULL;
        l1->count++;
    }
    else{
        NODE temp = l1->head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n1;
        n1->next=NULL;
        l1->count++;
    }
}

int main(){
    LIST list = createNewList();

    STUDENT s1,s2,s3;
    int mark1[5]={10,10,10,10,10};
    int mark2[5]={10,10,10,10,0};
    int mark3[5]={0,10,10,10,10};
    s1=newStudent("Chayan",mark1);
    s1=newStudent("Lily",mark2);
    s1=newStudent("Main",mark3);

    NODE node1 =createNewNode(s1);
    NODE node2 =createNewNode(s2);
    NODE node3 =createNewNode(s3);

    insertNodeIntoList(node1,list);
    insertNodeIntoList(node2,list);
    insertNodeIntoList(node3,list);

    printList(list);

}