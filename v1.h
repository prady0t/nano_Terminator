#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<vector>
#include<unistd.h>
using namespace std;
char s[100];//for input string
vector<string>st;//to store history of commands

string input()
{
    
    cin.getline(s,100);
    return s;

}
void executeBash()
{
    cout<<"\033[31m"<<" "<<endl;
    
    system("./whoami.sh");

    cout<<endl;

}
void History(string ch)
{
    
    st.push_back(ch);
}
void printHistory()
{
    int s=st.size()-1;
    while(s>=0)
{
    cout<<st[s]<<endl;
    s--;
}
}

int setUpTerminal()
{
    int count=0;
    while(1)
    {
        
    ofstream Myfile("whoami.sh");
    cout << "\033[104m"<<++count<<"\033[0m"<<"\033[32m"<<"-> ";
    string tempChar=input();
    if(tempChar=="oops")
    {
    break;
    cout<<endl;
    return 0;//for exit command
    }
    
    if((tempChar[0]>=48&&tempChar[0]<=57))
    {
        // if(tempChar=="")
        // {
        //     cout<<endl;
        //     Myfile.close();
        //     count-=1;
        //     continue;
        // }
        int num=stoi(tempChar);
    
    Myfile<<st[num-1];
    
    Myfile.close();
    executeBash();
    continue;
    }
    
    if (tempChar=="textMe")
    return 2;//for text editor

    
    

    Myfile<<tempChar;
    History(tempChar);
    
    Myfile.close();

    executeBash();
    
    
    
    
    
}
//printHistory();
return 0;
}