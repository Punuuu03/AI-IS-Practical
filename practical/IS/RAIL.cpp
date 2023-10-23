#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    string s;
    cout<<"enter the string";
    getline(cin,s);
    cout<<"enter the key";
    cin>>n;
    vector<vector<char>> a(n,vector<char>(s.size(),' '));
    int flag=0;
    j=0;
    for(int i=0;i<s.size();i++){
        a[j][i]=s[i];
        if(j==n-1){
            flag=1;
        }
        else if(j==0)
        flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
    cout<<"enc";
    for(int i=0;i<n;i++){
        for(int j=0;j<s.size();j++){
            if(a[i][j]!=' ')
            cout<<a[i][j];
        }
    }
    cout<<"dec";
    flag=0;
    j=0;
    for(int i=0;i<s.size();i++)
    {
        cout<<a[j][i];
        if(j==n-1){
            flag=1;
        }
        else if(j==0)
        flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
     cout<<endl;
     return 0;
}













