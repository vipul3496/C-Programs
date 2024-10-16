#include<iostream>
using namespace std;
class Bill{
    public:
        int pizzas;
        int puffs;
        int cold_drink;
        void getData(){
            cout<<"\nEnter the no of pizzas bought:";
            cin>>pizzas;
            cout<<"Enter the no of puffs bought:";
            cin>>puffs;
            cout<<"Enter the no of cool drinks bought:";
            cin>>cold_drink;
        }
        void bill_detail(){
            cout<<endl<<"    ***********Bill Detail***********"<<endl<<endl;
            cout<<"No of pizzas:"<<pizzas<<endl;
            cout<<"No of puffs:"<<puffs<<endl;
            cout<<"No of coldrinks:"<<cold_drink<<endl<<endl;
            cout<<"Total price = "<<(100*pizzas)+(20*puffs)+(10*cold_drink)<<endl;
        }
};
int main(){
    Bill obj;
    obj.getData();
    obj.bill_detail();
    return 0;
}