#include <stdio.h>

void insertion_sort(int [], int);

void insertion_sort(int a[], int n){

	int i,j,temp;
	
	for(i=1; i<= n-1; i++){
		
		temp=a[i];
		for(j=i-1; j>=0 && temp < a[j] ; j--){
			a[j+1] = a[j];
		}
		a[j+1]=temp;
	}
}

int main(){
	int a[]={23,43,12,4,23,87,34,76,46,90,14,57};
	int i, n=12;
	
	printf("Array before sorting: \n");
	for(i=0; i<=n-1; i++){
	printf(" %d ", a[i]);
	}
	
	insertion_sort(a,n);
	
	printf("\n Array after sorting: \n");
	for(i=0; i<=n-1; i++){
	printf(" %d ", a[i]);
	}
	
	return 0;
}
