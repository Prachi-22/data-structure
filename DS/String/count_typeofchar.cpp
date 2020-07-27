#include <iostream>
using namespace std;

void count(string str)
{
    int upper=0,lower=0,numeric=0,special=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'A' && str[i]<='Z')
        upper++;
        else if(str[i]>='a' && str[i]<='z')
        lower++;
        else if(str[i]>='0' && str[i]<='9')
        numeric++;
        else
        special++;
    }
    cout<<"uppercase letters"<<upper<<endl;
     cout<<"lowercase letters"<<lower<<endl;
      cout<<"numeric letters"<<numeric<<endl;
       cout<<"special characters"<<special<<endl;
}

int main() {
    string str ="geeks@908";
    count(str);
    return 0;
    
    
}