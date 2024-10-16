#include<iostream>
using namespace std;

bool toggle(bool b){
    if(b)
        return false;
    else 
        return true;
}
void print(bool * a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    bool *ptr ;
    int n;
    cout<<"enter the number of bulb :";
    cin>>n;
    ptr = new bool[n];
    for(int i=0;i<n;i++)
        ptr[i]=false;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j=j+i+1){
            ptr[j]=toggle(ptr[j]);
        }
    }
    for(int i;i<n;i++)
        cout<<ptr[i]<<"\t";
    return 0;
}