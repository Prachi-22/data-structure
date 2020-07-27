#include<iostream>
#include<cstring>
using namespace std;
bool isSubString(char str1[],char str2[],int m,int n)
{
    if(m == 0)
        return 1;
    if(n == 0)
        return 0;
    if(str1[m-1] == str2[n-1])
        return isSubString(str1,str2,m-1,n-1);
    return isSubString(str1,str2,m,n-1);
}
int main()
{
    char str1[] = "rhi";
    char str2[] = "prachi";
    int m =strlen(str1);
    int n =strlen(str2);
    isSubString(str1,str2,m,n) ?cout<<"yes":
                                cout<<"no";
            return 0;
    
}