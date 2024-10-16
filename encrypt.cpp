#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
void encrypt(string infile,string outfile,int key){
    ifstream inputfile(infile,ios::binary);
    ofstream outputfile(outfile,ios::binary);
    char ch;
    while(inputfile.get(ch)){
        outputfile.put(ch+key);
    }
    inputfile.close();
    outputfile.close();
}
void decrypt(string infile,string outfile,int key){
    ifstream inputfile(infile,ios::binary);
    ofstream outputfile(outfile,ios::binary);
    char ch;
    while(inputfile.get(ch)){
        outputfile.put(ch-key);
    }
    inputfile.close();
    outputfile.close();
}
int main(){
    int c;
    while(1){

        cout<<"\n1.Encrypt\n2.Decrypt\n3.Exit";
        cout<<"\nEnter your choice :";
        cin>>c;
        switch (c)
        {
        case 1:
            encrypt("encrypt.txt","output.txt",20);
            break;
        case 2:
            decrypt("output.txt","decrypt.txt",20);
            break;
        default:
            exit(0);
            break;
        }
    }
    
    // ifstream fin;
    // string data;
    // fin.open("encrypt.txt");
    // while(fin){
    //     getline(fin,data);
    //     cout<<data;
    // }
    // fin.close();
    
    // fin.open("decrypt.txt");
    // while(fin){
    //     getline(fin,data);
    //     cout<<data;
    // }
    // fin.close();
    return 0;
}