#include<iostream> 
using namespace std;
const int MAX_CHAR = 26;
int roundup(int n)
{
    int a = (n/10) * 10;
    int b = a + 10;
    return(n - a > b - n) ? b : a;
    
}

int main()
{
 int n = 52;
 cout<<roundup(n);
 return 0;
}