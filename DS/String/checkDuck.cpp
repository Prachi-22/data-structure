#include<iostream> 
using namespace std;

bool isduck(string num)
{
   int i =0;
   int n = num.length();
   while(i < n && num[i] == '0')
    i++;
    while(i < n )
    {
        if(num[i] == '0')
        return true;
        i++;
    }
    return false;
}
    

int main()
{
    string num ="999";
    if(isduck(num))
    cout<<"num is duck";
    else
    cout<<"num is not duck";
    return 0;
}