#include <iostream>
using namespace std;
void toh(int n,char S,char D, char T){
    if(n==1){
        cout<<S<<"-->"<<D<<endl;
    }
    else{
        toh(n-1,S,T,D);
        toh(1,S,D,T);
        toh(n-1,T,D,S);
    }
}
int main() {
    int x;
    char a='A',b='C',c='B';
    cin>>x;
    toh(x,a,b,c);
    return 0;
}
