#include<stdio.h>
#include<stdlib.h>

int size=10;
int top=-1;
int *arr=(int*)malloc(size * sizeof (int));


void push(int num){
	
	if(top==size-1){
		printf("Stack Overflow");
		exit(1);
	}
	top++;
	arr[top]=num;
	printf("Data Added Sucessfully: %d \n",arr[top]);
	
}


void pop(){
	
	if(top==-1){
		printf("Stack UnderFlow!!");
		exit(1);
	}
	
	int num=arr[top];
	top--;
	printf("Data Removed SuccessFully:%d\n",num);
	
}

void Peek(){
	
	int i=0;
	while(i<=top){
		printf("Stack Have: %d\n",arr[i]);
		i++;
	}
	
	
}

int main(){

   push(10);
   push(20);
   push(30);
   push(40);
   pop();
   Peek();
	
}

