#include<iostream>
using namespace std;

int main(){
    int num,num2,count=0,carry=0,rem,rem2;
    cout<<"Enter two number :";
    cin>>num>>num2;
    while(num!=0 || num2!=0){
        rem=num%10;
        rem2=num2%10;
        if(rem+rem2+carry>9){
            carry=(rem+rem2+carry)/10;
            count++;
        }
        num/=10;
        num2/=10;
    }
    cout<<"carry count = "<<count;
    return 0;
}