#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
void printl(){};
string movie[]={"kgf","dhamal","jawan","pathan","jani","extraction","kantara"};

string random_movie(){
    srand(time(0));
    return movie[rand()%(movie->length())];
}
int main(){
    string ran = random_movie();
    char c[20];
    for(int i=0;i<ran.length();i++)
        c[i]='_';
       
    for(int i=0;i<ran.length();i++)
            cout<<c[i]<<" ";  

    char ch;
    bool b=false,win=false;
    int count=0;
    for(int i=0;i<13;i++)
    {
        cout<<"\n\nGuess the letter : ";
        cin>>ch;
        for(int i=0;i<ran.length();i++){
            if(ch==ran.at(i)&&c[i]=='_'){
                c[i]=ch;
                b=true;
                count++;
                break;                
            }
        }
        if(b)
            b=false;
        else
            cout<<"\nYou choose wrong letter"<<endl;
        for(int i=0;i<ran.length();i++)
                    cout<<c[i]<<" ";
        if(count==ran.length())
        {
            win=true;
            break;
        }
        
    }
    if(win){
        cout<<"\n\n\4  you guess the Right movie name  \4";
    }
    else{
        cout<<"\n\nyou loose the game \ncorrect name is : "<<ran;
    }
}

