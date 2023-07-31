#include <iostream>

using namespace std;

int gcd(int m, int n){
    if(m == 0 || n == 0){
        return (m==0)?n:m;
    }
    else{
        return gcd(n%m, m);
    }
}

int lcm(int m, int n){
    int g = gcd(m,n);
    return (m*n)/g;
}

int main()
{
    int m,n;
    cout<<"Enter the numbers to find LCM and GCD: ";
    cin>>m>>n;
    cout<<"LCM: "<<lcm(m,n);
    cout<<"\nGCD: "<<gcd(m,n);

    return 0;
}
