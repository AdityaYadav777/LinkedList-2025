#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;

void push(int num){
 struct node* ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=num;
 if(head==NULL){
 	ptr->next=NULL;
 	head=ptr;
 }
 
 else{
 	
 	ptr->next=head;
 	head=ptr;
 }
  	
}

void Peek(){
	
	struct node* t=head;
	while(t!=NULL){
		printf("%d",t->data);
		t=t->next;
	}
}


void pop(){
	
	if(head==NULL){
	printf("No Data found to in stack");
	exit(1);
	}else
	head=head->next;
	
}


int main(){
	
push(10);
push(20);
pop();
pop();
Peek();	

}
