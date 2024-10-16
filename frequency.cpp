#include<iostream>
#include<string.h>
using namespace std;

int array[26];

class Count{
    public :
        string s="";
        void getStr(){
            cout<<"\n\nEnter string :";
            cin>>s;
        }
        void frequency(){
            for(int i=0;i<s.length();i++)
            {
                array[s[i]-97]++;
            }
        }
        void printFr(){
            for(int i=0;i<26;i++){
                if(array[i]!=0)
                cout<<"\n"<<(char)(i+97)<<"="<<array[i];
            }
        }
};

int main(){
    Count obj;
    while(1){
        obj.getStr();
        for(int i=0;i<26;i++)
            array[i]=0;
        obj.frequency();
        cout<<"\n1.single charater frequency\n2.all frequency\n3.exit";
        cout<<"\nEnter your choice :";
        int choice;
        char fr;
        cin>>choice;
        
        switch (choice)
        {
            case 1:
                cout<<"\nenter character :";
                cin>>fr;
                cout<<fr<<"="<<array[fr-97];
                break;
            case 2:
                obj.printFr();
                break;
            default:
                exit(1);
        }
    }
    
    return 0;
}