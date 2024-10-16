#include<iostream>
using namespace std;

int f(int x){
    if(x%2 == 0)
        return f(f(x-1));
    else
        return x++;
}
int main(){
    cout<<f(12);
    return 0;
}