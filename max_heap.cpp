#include<iostream>
#include<math.h>

using namespace std;

int arr[]={0,1,16,5,30,27,17,20,2,57,3,90};

int parent(int a){
    return a/2;
}
int left(int a){
    return a*2;
}
int right(int a){
    return (a*2)+1;
}


void max_heap(int *a,int i,int n){
    
    if((right(i)) < ((n/2)) && (left(i)) < ((n/2))){
        
        max_heap(a,right(i),n);
        max_heap(a,left(i),n);
        
    }   
    if(a[right(i)]>a[i] && a[right(i)] > a[left(i)] && i<=n){
        int temp =a[right(i)] ;
        a[right(i)] =a[i];
        a[i]=temp;        
    }
    if(a[left(i)]>a[i] && a[left(i)] > a[right(i)] && i<=n){
        int temp =a[left(i)] ;
        a[left(i)] =a[i];
        a[i]=temp;        
    }
    
}
void insert (int*a,int x,int l){
    a[l]=x;
    max_heap(a,1,l+1);
}



int main()
{
    int a[]={0,9,3,10};
    max_heap(arr,1,12);
    max_heap(arr,1,12);
    max_heap(arr,1,12);
    max_heap(arr,1,12);
    max_heap(arr,1,12);
    insert(arr,100,12);
    int x=2;
    for(int i=1;i!=13;i++){
        
        cout<<arr[i]<<" ";
        if((i)==(x-1)){
            cout<<endl;
            x*=2;
        }        
    }
}
