#include<iostream>
#include"v1.h"
using namespace std;
void TextEditor(string s,string name)
{
    ofstream textFile(name,ios::out | ios::app);
    
    textFile<<s;
    textFile<<endl;
    

    
    // if(s=="-1")
    // return "-1";
    
}
void TerminalHAndeler()
{
    char str[100];
    int x=setUpTerminal();
    if(x==0)
    {
        cout<<"Bye";
        exit(0);
    }
    if(x==2)
    {
        system("clear");
        string Fname;
    cout<<"Welcome to Text editor: "<<endl<<endl;
    cout<<"Enter name of file: ";
    cin>>Fname;
    cout<<endl<<endl;

    
    while(str[0]!=58)
    {
    //cin>>str;
    cin.getline(str,100);
    TextEditor(str,Fname);
    }
    }
}

int main()
{
    while(1)
    {
    TerminalHAndeler();
    }

}
 
 