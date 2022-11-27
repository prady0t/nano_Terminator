#include<iostream>
#include"v1.h"
using namespace std;
void mainMenu()
{
    cout<<endl<<endl;
    system("cat readme.txt");
}
void TextEditor(string s,string name)
{
    
//     ifstream MyReadFile(name);

// // Use a while loop together with the getline() function to read the file line by line
// while (getline (MyReadFile, s)) {
//   // Output the text from the file
//   cout << s;
// }

// // Close the file
// //MyReadFile.close();
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
        system("./banner.sh");
        
    cout<<"Welcome to Text editor: "<<endl<<endl;
    cout<<"Enter name of file: ";
    cin>>Fname;
    cout<<endl<<endl;
    ifstream MyReadFile(Fname);
 string ts;
// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, ts)) {
  // Output the text from the file
  cout << ts<<endl;
}

// Close the file
MyReadFile.close();

    
    while(str[0]!=58)
    {
    //cin>>str;
    cin.getline(str,1000);
    TextEditor(str,Fname);
    }
    }
}

int main()
{
    mainMenu();
    while(1)
    {
    TerminalHAndeler();
    system("clear");
    }

}
 