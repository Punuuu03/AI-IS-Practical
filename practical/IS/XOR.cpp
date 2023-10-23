#include<iostream>
#include<string.h>
using namespace std;
void operation(char str[])
{
    int length=strlen(str);
    char output1[12];
    char output2[12];
    char output3[12];
    for(int i=0;i<=length-1;i++){
        output1[i]=str[i]&127;
        output2[i]=str[i]^127;
        output3[i]=str[i]|127;
    }
    cout<<"string after and operation"<<output1<<endl;
    
    cout<<"string after xor operation"<<output2<<endl;
    
    cout<<"string after or operation"<<output3<<endl;
}
    int main(){
        char str[20];
        cout<<"enter the string";
        cin>>str;
        operation(str);
        return 0;
    }
