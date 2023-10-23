#include<iostream>
using namespace std;
void swapping(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
void display(int *array,int size)
{
    for(int i=0;i<size;i++)
    cout<<array[i]<<" ";
    cout<<endl;
}
void selectionsort(int *array,int size){
    int i,j,imin;
    for(int i=0;i<size-1;i++){
    imin=i;
    for(int j=i+1;j<size;j++)
    if(array[j]<array[imin])
    imin=j;
    swap(array[i], array[imin]);
    }

}
int main(){
    int n;
    cout<<"enter no of vertices";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array before sort";
    display(arr,n);
    selectionsort(arr,n);
    cout<<"array after sort";
    display(arr,n);
    return 0;

}
