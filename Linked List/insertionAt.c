#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head=NULL,*newnode,*temp;
    int pos,i=1,count=0;

    /* creating linked list */
    int n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
        }else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        count++;
    }

    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos>count){
        printf("Invalid position");
        return 0;
    }

    temp=head;
    i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d",&newnode->data);

    newnode->next=temp->next;
    temp->next=newnode;

    /* display */
    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");

    return 0;
}