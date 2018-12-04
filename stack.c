#include <stdio.h>
#define MAX 20
struct node {
int stack[MAX];
int top;
};

typedef struct node* NODE;

void push(NODE);
void pop(NODE);
void traverse(NODE);

void push(NODE p){
	int item;
	if(p->top == MAX-1){
		printf("\n OVERFLOW: The stack is full");
		return ;
	}
	
	printf("\n Enter the element: ");
	scanf("%d",&item);
	
	p->top++;
	
	p->stack[p->top] = item;
	
} 

void pop(NODE p){
	int item;
	if(p->top == -1){
		printf("\n UNDERFLOW: The stack is empty");
		return ;
	}
	
	item=p->stack[p->top];
	p->top--;
	
	printf("%d is deleted", item);
}

void traverse(NODE p){
int i;
	if(p->top == -1){
		printf("\n UNDERFLOW: The stack is empty");
		return ;
	}
	
	printf("\n The elements in the stack: \n");
	
	for(i = p->top; i>=0; i--)
	printf("\n %d", p->stack[i]);
}

int main(){
	char ch;
	int choice;
struct node stack;
NODE p= &stack;
p->top = -1;

do{
		printf("\n 1.PUSH");
		printf("\n 2.POP");
		printf("\n 3.TRAVERSE");
		printf("\n Enter your choice \n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1 : push(p);
						break;
			case 2 : pop(p);
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
