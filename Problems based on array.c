#include <stdio.h>
#include <string.h>
#include<stdbool.h>

void display(int arr[],int n){
    printf("elements of the array\n");
    for(int i=0;i<n;i++){
        printf ("%d ",arr[i]);
    }
    printf("\n");
}
int insert_1st(int arr[],int n,int element){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=element;

    return n+1;
}
int insert_last(int arr[],int n,int element){
    for(int i=n-1;i<0;i--){
        arr[i+1]=arr[i];
    }
    arr[n]=element;
    return n+1;
}
int insert_index(int arr[],int n,int element,int index){
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return n+1;
}
int del_s(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}

int del_l(int arr[],int n)
{
    
    return n-1;
}
int del_index(int arr[],int n,int index)
{
    for(int i=index ;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;
    display(arr,n);
    n  =insert_1st(arr,n,20);
    display(arr,n);
    n  =insert_last(arr,n,9);
    display(arr,n);
    n =insert_index(arr,n,8,4);
    display(arr,n);
    n =del_s(arr,n);
    display(arr,n);
     n =del_l(arr,n);
    display(arr,n);
     n =del_index(arr,n,4);
    display(arr,n);
}
// Check array is sorted or not

int isSorted(int arr[],int n){
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){;
        flag=false;
        break;
    }}
    
    if (flag==false){
       return false; 
    }
    else{
        return true;

    }

}
int main(){
    int arr[]={1,2,3,5,4};
    int n=5;
    printf("%d",isSorted(arr,n));

}
