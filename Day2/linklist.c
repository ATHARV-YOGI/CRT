#include<stdio.h>

struct linklist{
      int data;
      linklist *next;
};



int main(){
     
    linklist *head=NULL;
      
    linklist *newnode = malloc(sizeof(linklist));
     printf("enter data ");
     scanf("%d",&newnode->data);
     newnode->next = NULL;
     if(head == NULL){
        head->next = newnode;
     }
     
 return 0;


}