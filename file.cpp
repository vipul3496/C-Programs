#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string data;
    ifstream fin;
    ofstream fout;
    fin.open("Data.txt",ios::app);
    while(fin){
        getline(fin,data);
        cout<<data;
    }
    fin.close();

    fout.open("Data.txt",ios::app);
    fout<<"sample data "<<endl;
    fout.close();


    return 0;
}