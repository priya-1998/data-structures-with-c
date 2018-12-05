#include <stdio.h>

void swap(int *,int *);
void bubble_sort(int a[],int);

void bubble_sort(int a[],int n){
	int round,i;
	
	for(round=1; round <= n-1; round++){
		for(i=0; i<=n-round-1; i++){
			if(a[i] > a[i+1]){
			swap(&a[i], &a[i+1]);	
			}
		}
	}
}


void swap(int *a, int *b){
int temp;
temp= *a;
*a = *b;
*b = temp;
}

int main(){
	int a[]={23,43,12,4,23,87,34,76,46,90,14,57};
	int i, n=12;
	
	printf("Array before sorting: \n");
	for(i=0; i<=n-1; i++){
	printf(" %d ", a[i]);
	}
	
	bubble_sort(a,n);
	
	printf("\n Array after sorting: \n");
	for(i=0; i<=n-1; i++){
	printf(" %d ", a[i]);
	}
	
	return 0;
}
