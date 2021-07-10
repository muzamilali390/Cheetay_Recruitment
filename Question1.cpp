/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

string chooseAndSwap(string str)
{
    //Chossing two chars from String only if making  lexicographically smallest string  
    char char1,char2;
    int flag = 0;
    for (int i=0 ; i<str.length(); i++ )
    {
        if(str[i] != str[i+1])
        {
            if(str[i] > str[i+1])
            {
                char1 = str[i];
                char2=str[i+1];
                flag = 1 ; 
            }
            break;
        }
    }
//Swaping  after flag is 1 and string is lexicographically smallest string 
    if ( flag == 1 )
    {
        for (int i=0 ; i<str.length(); i++ )
        {
            if(str[i] == char1)
            {
                str[i] = char2;
            }
            else if(str[i] == char2)
            {
                str[i] = char1;
            }
        }
    }
    return str;
}



int main()
{
    
    string str;
    cout<<"Write String ";
    cin>>str;
    string s = chooseAndSwap(str);
    cout<<"Lexicographically Smallest String: "<<s<<endl;
    
    return 0;
}

