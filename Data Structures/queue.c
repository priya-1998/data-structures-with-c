#include <stdio.h>
#define MAX 20

struct node {
int queue[MAX];
int front, rear;
};

typedef struct node NODE;

void insert(NODE*);
void delete(NODE*);
void traverse(NODE*);

int main(){
	int choice;
	char ch;
	NODE n; // structure variable
	NODE* p = &n; // structure variable pointer
	
	p->front = -1;
	p->rear = -1;

	do{
		printf("\n 1.INSERT");
		printf("\n 2.DELETE");
		printf("\n 3.TRAVERSE");
		printf("\n Enter your choice \n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1 : insert(p);
						break;
			case 2 : delete(p);
						break;
			case 3 : traverse(p);
						break;
			
			default : printf("\n you entered wrong choice");
		}
		
		printf("\n\n press (Y/y) to continue = ");
		scanf(" %c", &ch);
	} while(ch == 'Y' || ch == 'y' );
    return 0;
}

void insert(NODE* p){
	int data;
	printf("\n Enter the data to insert: ");
	scanf("%d",&data);
	if(p->rear == -1){
		p->rear=0;
		p->front=0;
		p->queue[p->rear]=data;
	}else if(p->rear == MAX-1){
		printf("Queue is full");
		return ;
	}else{
	p->rear++;
	p->queue[p->rear]=data;
	}
	
	printf("\n Data inserted...");
		return ;
}

void traverse(NODE* p){
	int i;
	if(p->rear == -1){
	printf("\n Queue is empty!");
	return ;
	}
	
	for(i=p->front; i<= p->rear; i++)
	printf(" %d  ", p->queue[i]);
	
	return ;
}

void delete(NODE* p){
	int data;

	if(p->rear == -1){
	printf("\n Queue is empty!");
	}else if(p->rear == p->front){
	data=p->queue[p->front];
	p->front=-1;
	p->rear=-1;
	}else{
	data= p->queue[p->front];
	p->front++;
	}
	
	printf("%d is deleted from the queue", data);

}





