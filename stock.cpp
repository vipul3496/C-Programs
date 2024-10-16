#include<iostream>
using namespace std;
class stock{
    public:
        int day;
        int price[20];
        void getData(){
            cout<<"Enter the no. of days :";
            cin>>day;
            cout<<"Enter the all stock price :";
            for(int i=0;i<day;i++)
                cin>>price[i];
        }
        int min(){
            int min=price[0];
            for(int i=1;i<day;i++){
                if(min>price[i])
                    min=price[i];
            }
            return min;
        }
        int max(){
            int max=price[0];
            for(int i=1;i<day;i++){
                if(max<price[i])
                    max=price[i];
            }
            return max;
        }
};
int main(){
    stock obj;
    obj.getData();
    cout<<"Profit = "<<obj.max()-obj.min();
}