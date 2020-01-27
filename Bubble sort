#include<stdio.h>
#define MAX 100

//swaps two elements in array
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//implementation of bubble sort algorithm
void Bub_sort(int *arr,int n){

       for(int j=0;j!=n;j++){
           int count=0;                         //stores no of swaps made in one scan
           for(int i=0;(i+1)!=n;i++){
                if(arr[i]>arr[i+1]){            //compare element with its right adjacent element
                    count++;
                    swap(&arr[i+1],&arr[i]);
                }
        }
        if(count==0)                            //if no swaps ware made then break
           break;                               //array is already sorted

   }

}

//display an arry
void disp(int *a ,int n){
    for(int i=0 ; i!=n;i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    int arr[MAX];
    printf("Input no of elements to sort : ");
    scanf("%d",&n);
    printf("enter your elements: \n");
    for (int i=0;i!=n;i++){
        printf("    :");
        scanf("%d",&arr[i]);
    }
    Bub_sort(arr,n);
    disp(arr,n);

    return 0;
}
