#include <iostream>
using namespace std;

int gcd (int m, int n)
{
    if(n == 0) return m;
    cout << "gcd(" << m << ',' << n <<')'<< endl; 
    return gcd(n, m % n);
}

int main()
{
  int x,y;
  cin>>x>>y;
    cout << "gcd = " << gcd(x,y) << endl;
    return 0;
}
