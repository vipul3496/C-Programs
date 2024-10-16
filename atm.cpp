#include<iostream>
using namespace std;

class Atm{
    public:
        int choice;
        int console(){
            cout<<"\n1. deposite \n2.withdraw\n3.check balance\n";
            cout<<"enter your choice :";
            cin>>choice;
            return choice;
        }
};
int main(){
    Atm obj;
    int d,w,b=5000;
    while(1){
        switch(obj.console()){
            case 1:
                cout<<"Enter the amount you want to deposite :";
                cin>>d;
                b+=d;
                cout<<"successfully deposited\n";
                break;
            case 2:
                cout<<"Enter the amount you want to withdraw :";
                cin>>w;
                if(w<=b){
                    b-=w;
                    cout<<"successfully withdraw\n";
                }
                else
                    cout<<"insufficint balance\n";
                break;
            case 3:
                cout<<"your balance is = "<<b;
                break;
            default :
                exit(1);
        }
    }
    return 0;
}