#include<iostream>
using namespace std;

class MPCS_Exam{
    public:
        int t1[3];
        int t2[3];
        int t3[3];
        void getData(int i){
            cout<<"Enter the oxygen level(1 to 100) of trainee in Round "<<i<<" :";
            cin>>t1[i]>>t2[i]>>t3[i];
        }
        void average(int* t1,int i){
            int avg;
            if((t1[1]>=1&&t1[1]<=100) && (t1[2]>=1&&t1[2]<=100) && (t1[3]>=1&&t1[3]<=100)){
                avg = (t1[1]+t1[2]+t1[3])/3;
                if(avg>=70)
                    cout<<"\nTrainee is fit : "<<i;
            }
        }
};
int main(){
    MPCS_Exam obj;
    obj.getData(1);
    obj.getData(2);
    obj.getData(3);
    obj.average(obj.t1,1);
    obj.average(obj.t2,2);
    obj.average(obj.t3,3);
    return 0;
}