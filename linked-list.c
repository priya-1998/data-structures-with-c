/*
 * Linked List:
 * It is a collection of data elements called node in which the linear
 * representation is given by links from one node to the next node.
 *
 * Below is a programm of a linked list implemented using c.
 *
 */

#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
	};

typedef struct node* NODE;

NODE start=NULL;

void display();
NODE create_node();

void insert_beg();
void insert_last();
void insert_mid();

void delete_beg();
void delete_last();
void delete_mid();


int main(){

		int choice;

		do{
		// Menu
		printf("******   Choose from the options   ******\n\n");
		printf("1. Create a List\n ");
		printf("2. Display List\n ");

		printf("3. Add node at the begining\n ");
		printf("4. Add node at the End\n ");
		printf("5. Add node in the middle\n ");

		printf("6. DELETE a node from the BEGINING\n ");
		printf("7. DELETE a node from the END\n ");
		printf("8. DELETE a given node from the middle \n ");
		printf("9. DELETE the entire List. \n ");

		printf("10. EXIT \n\n");

		scanf("%d", &choice);

		switch(choice){
			case 1:	create_node();
					break;
			case 2:	display();
					break;
			case 3:	insert_beg();
					break;
			case 4:	insert_last();
					break;
			case 5:	insert_mid();
					break;
			case 6: delete_beg();
					break;
			case 7:	delete_last();
					break;
			case 8:	delete_mid();
					break;
			// case 9:	del_all();
			// 		break;
			case 10:	exit(0);
					break;

			default:
					printf("Wrong input! Try again!!\n\n");
		}


		}while(choice != 10);

    return 0;
}

void display(){
	
	if(start==NULL){
		printf("\n List is already empty...");
	}
	
	NODE temp=start;

	printf("\n Current Linked List: \n");
	while(temp != NULL){
		printf(" %d ",temp->data);
		temp= temp->next;
	}
	printf("\n");
}

NODE create_node(){
	NODE new_node = (NODE)malloc(sizeof(struct node));
	return new_node;
}

void insert_beg(){
	NODE new_node;
	int data;
	new_node= create_node();

	printf("\n Enter the data to insert at begining: ");
	scanf("%d",&data);

	new_node->data=data;

	if( start == NULL){
		new_node->next = NULL;
		start=new_node;
	}else{
		new_node->next=start;
		start=new_node;
	}

	display();
}

void insert_last(){
	NODE new_node,temp=start;
	new_node= create_node();
	int data;

	printf("\n Enter the data to insert at last: ");
	scanf("%d",&data);

	new_node->data = data;
	new_node->next = NULL;

	if(temp == NULL){
		start=new_node;
		display();
		return ;
	}

	while(temp->next != NULL){
	temp=temp->next;
	}

	temp->next = new_node;

	display();
}

void insert_mid(){
	int pos,data,count=0;
	NODE new_node,temp=start;

	new_node=create_node();

	printf("Enter the position where to insert the new node: ");
	scanf("%d",&pos);

	//Count the no of nodes in the list:
	while(temp!= NULL){
		count++;
		temp= temp->next;
	}

	temp=start;

	if(pos==1 || pos >= count){
		printf("Error: Invalid position\n Please enter position between 1 and %d \n",count);
		return ;
	}

	printf("\n Enter the data to insert at position %d : ", pos);
	scanf("%d",&data);
	new_node->data = data;

	pos=pos-2;

	while(pos--){
	temp=temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	display();

}

void delete_beg(){

	if(start == NULL){
	printf("\n Error: The list is already empty!");
	return ;
	}

	NODE temp;
	temp=start;

	start= temp->next;

	printf("\n The element with data %d deleted!", temp->data);

	free(temp);

	display();
}

void delete_last(){

	if(start == NULL){
	printf("\n Error: The list is already empty!");
	return ;
	}

	NODE temp, t=start;

	while(t->next->next != NULL){
		t=t->next;
	}

	temp=t->next;
	t->next= NULL;

	printf("\n The element with data %d deleted!", temp->data);

	free(temp);

	display();

}

void delete_mid(){
	if(start == NULL){
	printf("\n Error: The list is already empty!");
	return ;
	}

	NODE temp,t=start;
	int pos,count=0;

	printf("\n Enter the position: ");
	scanf("%d",&pos);

	//Count the no of nodes in the list:
	while(t!= NULL){
		count++;
		t= t->next;
	}

	t=start;

	if(pos==1 || pos >= count){
		printf("Error: Invalid position\n Please enter position between 1 and %d \n",count);
		return ;
	}

	pos=pos-2;
	while(pos){
	t=t->next;
	}

	temp=t->next;
	t->next=temp->next;

	printf("\n The element with data %d deleted!", temp->data);

	free(temp);

	display();
}
