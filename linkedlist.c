#include <stdio.h>
#include <stdlib.h>
    struct Node
    {
        int data;
        struct Node * next;
    };
    
    int main(){
    int value, i, n, newvalue, pos;
    struct Node *head = NULL, *temp =  NULL, *newnode = NULL;
    
    printf("Enter the number of nodes");
    scanf("%d", &n);

    

    for ( i = 0; i < n; i++) 
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter Node value %d: ", i+1);
        scanf("%d", &value);
        newnode -> data = value;

        if(head == NULL){
            head = newnode;
            temp = head;
        }

        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
        //Adding element in the beginning
        printf("Enter value to add at the beginning ");
        scanf("%d", &value);
        newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data=value;
        newnode->next=head;
        head= newnode;
        

        //inseting an element at a specific position
        printf("Enter position ");
        scanf("%d", &pos);
        printf("Enter value ");
        scanf("%d", &newvalue);
        newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data=newvalue;
        temp=head;
        for(i=1 ; i<pos ; i++){
            temp = temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;

        //Inserting element at the end 
        printf("Enter value to insert at the end");
        scanf("%d", &value);
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=value;

        if(head==NULL){
            head=newnode;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }

        //display the linked list
        temp = head;
        while(temp!=NULL){
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");

    
    
return 0;

}
