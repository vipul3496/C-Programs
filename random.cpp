#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int random_number(){
    srand(time(0));
    return rand()%50;
}
int main(){
    // srand(50);
    // cout<<rand();//generate a fix number
    // cout<<time(0);//it return time in second since EPOCH(frome Jan 1970)
    // srand(time(0));
    // cout<<rand();
    int r,n,b=1;
    r = random_number();
    for(int i=0;i<5;i++){
        cout<<"\nenter a number ";
        cin>>n;
        if(n==r){
            cout<<"\n\5 You win the game \5"<<endl;
            b=0;
            break;
        } 
        else if(n<r) cout<<"This number is small"<<endl;
        else cout<<"This number is greater"<<endl;
    }
    if(b) cout<<"You loose the game the number is = "<<r<<endl;
}