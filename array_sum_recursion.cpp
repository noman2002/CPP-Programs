#include<iostream>
using namespace std;

int main(){
    int a,sum=0;
    cin>>a;
    int n[a];
for(int i=0;i<a;i++){
   cin>>n[i];
}
for(int i=0 ; i<a; i++){
      sum=sum+n[i];
    }
    cout<<sum ;
    return 0;
}
