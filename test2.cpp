#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,n1=n;;
    int rem;
    while (n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n/=10;
    }
    if(n1==sum)
        cout<<"number is palindrom";
    
    return 0;
}