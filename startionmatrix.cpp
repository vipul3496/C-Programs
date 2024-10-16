#include<iostream>
#include<conio.h>
void star_multiply(int* , int* ,int* , int , int , int);
using namespace std;
int main(){
    int n;
    cout<<"enter matrix size in 2^n :";
    cin>>n;
    int *a=new int[n*n];
    int *b=new int[n*n];
    cout<<"enter "<<(n*n)<<" element for first matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i * n + j];
        }
    }
    cout<<"enter "<<(n*n)<<" element for second matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i * n + j];
        }
    }
    cout<<"first matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<a[i * n + j];
        }
        cout<<"\n";
    }
    cout<<"second matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<b[i * n + j];
        }
        cout<<"\n";
    }
    cout<<"resultant matrix : \n";
    int* result = new int[n*n];
    for(int k=0;k<n;k=k+2){
        for(int l=0;l<n;l=l+2){
            star_multiply(a,b,result,k,l,n);
        }
    }
    // result = star_multiply(a,b,0,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\t"<<result[i * n + j];
        }
        cout<<"\n";
    }
}
void star_multiply(int *a,int *b,int *result,int i,int j,int n){
    int p,q,r,s,t,u,v;
    p = (a[i * n + j] + a[i+1 * n + j+1]) * (b[i * n + j] + b[i+1 * n + j+1]);
    q = (a[i+1 * n + j] + a[i+1 * n +1]) * b[i *n + j];
    r = a[i * n + j] * (b[i * n + j+1] - b[1 * n + j+1]);
    s = a[i+1 * n + j+1] * (b[i+1 * n + j] - b[i * n + j]);
    t = (a[i * n + j] + a[i * n + j+1]) * b[1 * n + j+1];
    u = (a[i+1 * n + j] - a[i * n + j]) * (b[i * n + j] + b[i * n + j+1]);
    v = (a[i * n + j+1] - a[i+1 * n + j+1]) * (b[i+1 * n + j] + b[i+1 * n + j+1]);
    result[i * n + j]=p+s-t+v;
    result[i * n + j+1]=r+t;
    result[i+1 * n + j]=q+s;
    result[i+1 * n + j+1]=p+r-q+u;
}