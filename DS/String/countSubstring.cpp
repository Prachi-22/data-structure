#include<bits/stdc++.h>
using namespace std;

int countSubString(string str)
{
    int n = str.length();
    return n*(n+1)/2;
}
int main()
{
    string a = "abc";
    cout<<countSubString(a);
    return 0;
} 