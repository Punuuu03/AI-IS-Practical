#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
         return a;
    return gcd(b, a % b);
}
int main()
{
    double m, p, q, i, j, e, d;
    cout << "enter the no to enc dec";
    cin >> m;
    cout << "1st prime";
    cin >> p;
    cout << "2nd prime";
    cin >> q;
    int n = p * q;
    cout << n;
    int phi=(p-1)*(q-1);
    for(int i=2;i<phi;i++){
        if(gcd(i,phi)==1){
            e=i; 
            break;
        }
    }
    i=1;
    while(true)
    {
        int j=(phi *i)+1;
        if(fmod(j,e)==0){
            d=j/e;
            break;
        }
        i++;
    }
    cout<<"phi"<<phi;
    cout<<"e"<<e;
    cout<<"d"<<d;
    cout<<"public enc("<<e<<","<<n;
    cout<<"privete dec("<<d<<","<<n;
     
     int cipher=fmod(pow(m,e),n);
     cout<<"enc cipher"<<cipher<<endl;;
     int plain=fmod(pow(cipher,d),n);
     cout<<"enc plain"<<plain;
     return 0;
}
