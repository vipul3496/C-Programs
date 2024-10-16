#include <iostream>
#include<conio.h>
using namespace std;

void setArr(int value , int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        arr[i] = value;
    }
}

int sumArr(int arr[] , int size){
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    return sum;
}
void printLetterFreq(int arr[],char c){
    cout<<endl<<"--------------------------------"<<endl;
    for(int i = 0 ; i < 26 ; i++){
        if(arr[i] == 0) continue;
        cout<<(char)(c+i)<<" --> "<<arr[i]<<endl;
    }
}

int main()
{
    int capFreq[26];
    int smallFreq[26];
    string input;
    int wordCount = 0;
    
    setArr(0,capFreq,26);
    setArr(0,smallFreq,26);
    
    cout<<"Please Enter a string :"<<endl;
    getline(cin,input);
    
    for(int i = 0 ; i < input.length();i++){
        
        if(input[i] >= 'A' && input[i] <= 'Z'){
            capFreq[(input[i]-'A')]++;
        }
        else if(input[i] >= 'a' && input[i] <= 'z'){
            smallFreq[(input[i]-'a')]++;
        }
        
        if(input[i+1] == ' ' || i == (input.length()-1)){
            wordCount++;
        }
        
    }
    int letters = sumArr(capFreq,26);
    letters += sumArr(smallFreq,26);
    
    cout<<"total word count : " << wordCount<<endl;
    cout<<"total letters : "<<letters;
    printLetterFreq(capFreq,'A');
    printLetterFreq(smallFreq,'a');

    getch();
    return 0;
}