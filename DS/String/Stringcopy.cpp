#include <bits/stdc++.h> 
using namespace std;

void copyString(char S1[],char S2[])
{
    int i = 0;
    for(i = 0; S1[i] != '\0' ;i++)
    {
        S2[i] = S1[i];
        
    }
    S2[i] = '\0';
}





int main()
{
    char S1[100] = "Welocome";
    char S2[100] = "India";
    cout<<"\nString1 is :"<<S1;
    cout<<"\nString2 is :"<<S2;
    copyString(S1,S2);
    cout<<"\nAfter Copying first String into Second: ";
    cout<<S2;
    return 0;
    

}