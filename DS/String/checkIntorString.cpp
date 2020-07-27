#include<iostream> 
using namespace std;

bool isnum(string str)
{
    for(int i = 0 ;i < str.length();i++)
     if(isdigit(str[i]) == false)
        return false;
return true;
}
    

int main()
{
    string str = "9870B";
    if(isnum(str))
        cout<<"Integer";
    else
    cout<<"string";
    return 0;
    
    
}