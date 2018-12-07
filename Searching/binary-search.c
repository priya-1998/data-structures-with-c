// TODO: Find and fix bug in binary_search() function. It doesn't give correct output

#include <stdio.h>

void binary_search(int array[], int size, int num_to_be_searched);

int main(){
    int array[]={12,43,65,76,112,45,23,65,76,32,23,0,54,76,786};

    printf("hkhkh");

    binary_search(array,15,23);

    return 0;
}

void binary_search(int a[], int n, int num){
    int i, index=-1, mid, lb, ub;

    lb = 0;
    ub = n-1;
    mid = (lb+ub)/2 ;

    while(lb<=ub){
        if(num == a[mid])
            index=mid;
            else if(num > a[mid])
                lb = mid+1;
                else
                ub = mid-1;

        mid = (lb+ub)/2 ;
    }

    printf("\n Element found at index %d ", mid);

}
