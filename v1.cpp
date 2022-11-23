// #include<iostream>
// #include<fstream>
// #include<string.h>
// #include<stdlib.h>
// #include<stack>
// using namespace std;
// char s[100];//for input string
// stack<string>st;//to store history of commands
// string input()
// {
    
//     cin.getline(s,100);
//     return s;

// }

// void executeBash()
// {
    
//     system("./whoami.sh");

// }
// void History(string ch)
// {
    
//     st.push(ch);
// }
// void printHistory()
// {
//     while (!st.empty()) {
//         cout<<" ";
//         cout << st.top() <<endl;
//         st.pop();
//     }
// }
// int main()
// {
//     int count=1;
//     while(1)
//     {
//     ofstream Myfile("whoami.sh");
//     cout << "\033[31m"<<"-> ";
//     string tempChar=input();
//     Myfile<<tempChar;
//     History(tempChar);
//     cout << "\033[33m"<<++count;
//     Myfile.close();

//     executeBash();
    
    
    
//     if(tempChar=="oops")
//     {
//     break;
//     cout<<endl;
//     }
// }
// printHistory();
// }
