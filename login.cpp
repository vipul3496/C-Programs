#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

string email[10],password[10];

class Account{
    public:
        void file(string s,string p){
            ofstream fout;
            fout.open("login.txt",ios::app);
            fout<<s<<" , "<<p<<"\n";
            fout.close();

        }
        void check(string s,string p){
            ifstream fin;
            string data;
            string enter=s+" , "+p;
            fin.open("login.txt");
            while(fin){
                getline(fin,data);
                if(data.compare(enter)==0)
                    cout<<"\nlogin succesful\n";
                else
                    cout<<"\nlogin failed\n";
            }
        }
        int choice(){
            int c;
            cout<<"\nLogin = 1 \nRegister = 2 \nExit = any key";
            cout<<"\n\nEnter your choice :";
            cin>>c;
            return c;
        }
        void regist(){
            static int entry=0;
            cout<<"\nEnter email :";
            cin>>email[entry];
            cout<<"Create password :";
            cin>>password[entry];
            file(email[entry],password[entry]);
            entry++;
            cout<<"\n\5Account created successfully\5\n";
        }
        void login(){
            string mail="",pass="";
            cout<<"\nEnter email :";
            cin>>mail;
            // bool b=false;
            // int i;
            // for(i=0;i<email->length();i++){
            //     if(email[i] == mail)
            //     {
            //         b=true;
            //         break;
            //     }
            // }
            // if(b){
                cout<<"Enter password :";
                cin>>pass;
            //     if(password[i] == pass)
            //         cout<<"\n\5Login Succesfully\5\n";
            //     else
            //         cout<<"\nYou enter wrong password!\n\4Try Again to Login\n";
            // }
            // else
            //     cout<<"\nYou Don't have accound!\n\4Please Register first\n";
            check(mail,pass);
        }
};
int main(){
    Account obj;
    while(1)
    {
        int c = obj.choice();
        switch(c){
            case 1:
                obj.login();
                break;
            case 2:
                obj.regist();
                break;
            default:
                exit(1);
        }
    }

    return 0;
}
