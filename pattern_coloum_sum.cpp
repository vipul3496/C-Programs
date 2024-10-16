#include<iostream>
using namespace std;
int main(){
    int n,sum=0,add=1;
    cout<<"enter number of line in pattern : ";
    cin>>n;
    for(int i=0;i<n;i++){
        sum=sum+add;
        for(int j=0;j<=i;j++){
            cout<<add<<"\t";
            add++;
        }
        cout<<"\n";
    }
    cout<<"\nSUM = "<<sum;
    return 0;
}