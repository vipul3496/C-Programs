#include<iostream>
using namespace std;
class Test{
    public:
    void fn(){
        cout<<"HELLO";
    }
};
class T : public Test{
    public:
    void fn(){
        
        cout<<"HI............";
    }
};
int main(){
    // T t2;
    // t2.Test::fn();

    T t3;
    Test *t4 = &t3;
    t4->fn();
    return 0;
}