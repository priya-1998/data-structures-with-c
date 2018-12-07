#include <stdio.h>

void linear_search(int[],int,int);

int main(){
    int array[]={12,43,65,76,112,45,23,65,76,32,23,0,54,76,786};

    linear_search(array,15,23);

    return 0;
}

void linear_search(int a[], int size , int num ){
    int i, count;

    for(i=0; i < size; i++){
        if(a[i] == num){
            printf("\n Element found at index %d",i);
            count++;
        }
    }


        if(count)
        printf("\n %d Matched %d times in total...",num, count);
        else
        printf("\n Element not found...");

}
