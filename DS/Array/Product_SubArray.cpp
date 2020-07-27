#include<bits/stdc++.h>
using namespace std;
void subArrayProduct(int arr[],int n)
{
    int product = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
                product *= arr[j];
        }
    }
    cout<<product<<" ";
}

int main()
{
    int arr[] = {1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    subArrayProduct(arr,n);
    return 0;
}
