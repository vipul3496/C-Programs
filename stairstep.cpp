#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no. of steps :";
    cin>>m;
    cout<<"Enter the no. of step jump :";
    cin>>n;
    int move;
    if(m%n==0)
        move= m/n;
    else
        move = m/n+1;
    cout<<"step move="<<move;
    return 0;
}