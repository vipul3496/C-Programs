#include<iostream>
using namespace std;
class A{
    public:
        void print(){
            cout<<"This is A class"<<endl;
        }
};
class B{
    public:
        void print(){
            cout<<"This is B class"<<endl;
        }
};
class C : public A , public B{
    public:
    
};

int main(){
    C obj;
    obj.B::print();
    return 0;
}