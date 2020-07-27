#include<iostream> 
using namespace std;
void conversion(char charSet[],string &str)
{
    int n = str.length();
    int hashset[26];
    for(int i=0;i<27;i++)
     hashset[str[i] - 'a'] = 'a'+ i;
    for(int i =0;i<n;i++)
        str[i] = hashset[str[i] - 'a'];
}

int main()
{
 char charSet[27] = "qwertyuiopasdfghjklzxcvbnm";
 string str = "egrt";
 conversion(charSet,str);
 cout<<str;
 return 0;
}