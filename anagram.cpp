#include<iostream>
#include<string>
using namespace std;

int arr[26],arr2[26];

class Anagram{
    public:
        string str="",str2="";
        int count;
        void getString(){
            cout<<"\nEnter first string :";
            cin>>str;
            cout<<"\nEnter second string :";
            cin>>str2;
        }
        void frequency(){
            for(int i=0;i<str.length();i++){
                arr[str[i]-97]++;
                arr2[str2[i]-97]++;
            }
        }
};
int main()
{
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
        arr2[i]=0;
    }

    Anagram obj;
    obj.getString();
    if((obj.str).length() == (obj.str2).length())
        obj.frequency();
    else
    {
        cout<<"\nGiven strings are not Anagram strings";
        exit(1);
    }
    
    bool b=false; 
    for(int i=0;i<26;i++)
    {
        if(arr[i]==arr2[i])
            b=true;
    }
    if(b)
        cout<<"\nGiven Strings are Anagram Strings";
    else
        cout<<"\nGiven strings are not Anagram strings";
    
    return 0;
    
}