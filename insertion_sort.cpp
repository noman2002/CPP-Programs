#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=1;i<n;i++){

    int j=i;
    while (arr[j-1]>arr[j] && j>0)
    {
        swap(arr[j-1],arr[j]);
        j--;
    }

}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
}
}