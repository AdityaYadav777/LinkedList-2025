#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node* next;
};


struct node* addData(struct node* head,int num){
	
	    struct node*t=head;
			
	    if(head == NULL ){
	   	head=(struct node*)malloc(sizeof(struct node));
		head->data=num;
		head->next=NULL;
		return head;
		}
		
	    struct node*h=(struct node*)malloc(sizeof(struct node));
	    while(t->next!=NULL){
	    	t=t->next;
		}
		
	    h->data=num;
	    h->next=NULL;
		t->next=h;
		
    	return head;
	
}

void PrintData(struct node* h){
	struct node *t=h;

	while(t!=NULL){
		printf("->%d",t->data);
		t=t->next;
	}
}

struct node* addInMidel(struct node* head,int num,int index){
	 
	 struct node* temp=head;
	 int count=0;
	 
	 if(head==NULL){
	 	printf("You dont Have Data to merge!!");
	 	exit(1);	
	 }
	 
	 while(count!=index-1){
	 	temp=temp->next;
	 	count++;
	 }
	 
	 struct node* newNode=(struct node*)malloc(sizeof(struct node));
	 
	 newNode->data=num;
	 newNode->next=temp->next;
	 temp->next=newNode;
	 return head;	 
	
}

 struct node* deleteDataFirst(struct node* head){

 	if(head==NULL){
 		printf("No Data Found");
 		exit(1);
 		return head;
	 }
	 
   head=head->next;
   return head;
	 
 }
 
 struct node* deleteInIndex(struct node* head,int index){
 	
 	struct node* t =head;
 	struct node* counter=head;
 	int i=0;
 	
 	
 	if(head==NULL){
 		printf("No Data Avilable");
 		return head;	
	 }
	 
	 while(i!=index-1){
	 	t=t->next;
	 	counter=counter->next;
	 	i++;
	 }
	 
	 
	 counter=counter->next;
	 t->next=counter->next;
	 
	 
	 free(counter);
	
	 return head;
     	
 }



struct node* deleteAtLast(struct node* head){
	
	struct node* tem=head;
	struct node* del=head;
	

	
	del=del->next;
	
	while(del->next!=NULL){
		tem=tem->next;
		del=del->next;
	}
	
    tem->next=del->next;
	return head;	
}



struct node* updateFirst(struct node* head,int num){
	struct node* tem=head;
	tem->data=num;	
	return head;
}


struct node* updateAtIndex(struct  node* head,int index,int num){
	
	struct node* tem=head;
	
	if(head==NULL){
		return head;
	}
	
	int count=0;
	while(count!=index-1){
		count++;
		tem=tem->next;
	}
	
	
	tem->data=num;
	return head;
	
}


struct node* updateAtLast(struct node* head,int num){
	
	struct node* tem=head;
	
	if(head==NULL){
		return head;
	}
	
	while(tem->next !=NULL){
		
		tem=tem->next;
		
	}
	
	
	tem->data=num;
	return head;
	
}




int main(){
	
      struct node *head =NULL;
      
      
	  head= addData(head,100);
	  head= addData(head,300);
	  head= addData(head,400);
	  head= addData(head,500);
	  head= addData(head,100);
	  head= addData(head,200);
	  head= addData(head,300);
	  head= addData(head,400);
	  
	  
      head= addInMidel(head,200,1);
	  head= deleteDataFirst(head);
	  head= deleteInIndex(head,2);
	  
	  head=deleteAtLast(head);
	  
	  head=updateFirst(head,1);
	  head=updateAtIndex(head,3,1000);
	  head=updateAtLast(head,2000);
	  
	  
      PrintData(head);
      
}
