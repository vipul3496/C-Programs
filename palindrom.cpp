#include<iostream>
#include<string.h>
using namespace std;

class Palindrome{
    public:
        char str[100];
        int n;
        string s="";
        void pali(){
            cout<<"Enter a string :";
            gets(str);
            s=str;
            n=s.length();
        }
        void lower(){
            s="";
            for(int i=0;i<n;i++){
                if(str[i]>='A' && str[i]<='Z')
                    s += (str[i]+32);
                else if((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9'))
                    s+=str[i];
            }
        }
        bool check(){
            n=s.length();
            for(int i=0;i<=n/2;i++){
                if(s[i]!=s[n-i-1])
                    return false;
            }
            return true;
        }
};
int main(){
    Palindrome obj;
    obj.pali();
    obj.lower();
    if(obj.check())
        cout<<"\nYES";
    else 
        cout<<"\nNO";
    return 0;
}