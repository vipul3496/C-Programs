#include<iostream>
using namespace std;
inline int max(int a,int b,int c){
    return a>b? a>c? a:c : b>c? b:c;
}
int main(){
    int lar = max(4,5,12);
    cout<<lar;
    return 0;
}