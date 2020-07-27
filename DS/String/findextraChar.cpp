#include<iostream> 
using namespace std;


char findExtra(string strA,string strB)
{
    int res=0,i;
    for(i=0;i<strA.length();i++)
    {
        res ^= strA[i];
    }
    for(i=0;i<strB.length();i++)
    {
        res ^= strB[i];
    }
    return((char)(res));
}

int main()
{
    string strA ="abcdef";
    string strB ="fbacdek";
    cout<< findExtra(strA,strB);
    return 0;
}