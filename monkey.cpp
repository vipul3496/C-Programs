#include<iostream>
using namespace std;
class Monkey{
    public:
        int n;
        int k;
        int j;
        int b;
        int p;
        void getData(){
            cout<<"Enter no. of monkey :";
            cin>>n;
            cout<<"Enter the no. banana and peanut a monkey can eat at a time one :";
            cin>>k>>j;
            cout<<"Enter no. of banana and peanut :";
            cin>>b>>p;
        }
        void eatBanana(){
            b-=k;
            n--;
        }
        void eatPeanuts(){
            p-=j;
            n--;
        }
};
int main(){
    Monkey obj;
    obj.getData();
    while(obj.b>=obj.k || obj.p>=obj.j){
        if(obj.b>=obj.k)
            obj.eatBanana();
        else
            obj.eatPeanuts();
    }
    cout<<"the number of monkey remain :"<<obj.n;
    return 0;
}