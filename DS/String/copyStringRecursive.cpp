#include <bits/stdc++.h> 
using namespace std;

void copyString(char S1[],char S2[],int index = 0)

{
    
 S2[index] = S1[index];
 if(S1[index] == 0)
 return;
 copyString(S1,S2,index+1);

    
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