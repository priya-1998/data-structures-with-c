#include <stdio.h>

void swap(int *, int *);
int pos_of_min(int [], int, int);
void selection_sort(int [], int);

void swap(int *a, int *b){
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
}

int pos_of_min(int a[],int start_pos, int n){
	int i,min, min_pos;
	
	min = a[start_pos];
	min_pos = start_pos;
	
	for(i=start_pos; i<= n-1 ; i++){
		if(min > a[i]){
			min=a[i];
			min_pos=i;
			}
	}
	
	return min_pos;
}


void selection_sort(int a[], int n){

	int i, min_loc;

	for(i=0; i<= n-2; i++){

		min_loc=pos_of_min(a, i+1, n );
		
		if(a[i]> a[min_loc]){
		swap(&a[i], &a[min_loc]);
		}
}


}

int main(){
	int a[]={23,43,12,4,23,87,34,76,46,90,14,57};
	int i, n=12;
	
	printf("Array before sorting: \n");
	for(i=0; i<=n-1; i++){
	printf(" %d ", a[i]);
	}
	
	selection_sort(a,n);
	
	printf("\n Array after sorting: \n");
	for(i=0; i<=n-1; i++){
	printf(" %d ", a[i]);
	}
	
	return 0;
}
