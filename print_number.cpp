#include <iostream>
using namespace std;
void print(int a){
    if(a<1){
        return ;
    }
    else{
         
        print(a-1);
        cout<<a;
   
}
}

int main() {
    int x;
    cin>>x;
    print(x);
    return 0;
}

