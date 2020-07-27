#include<iostream>
using namespace std;
#define NO_OF_CHAR 256

char secondMostFreqChar(string str)
{
    int count[NO_OF_CHAR] = {0},i;
    for(i=0;str[i];i++)
        (count[str[i]])++;
    int first = 0;
    int second = 0;
    for(i=0;i<NO_OF_CHAR;i++)
    {
     if(count[i] > count[first]) 
     {
         second = first;
         first = i;
     }
     else if(count[i]>=count[second] && count[i] != count[first])
     {
        second= i;
        
         
     }
    }
    return second;
    
}
int main()
{
    string str ="pessimist";
    char result = secondMostFreqChar(str);
    if(result != '\0')
    cout<<"\nmost second frequent char is :"<<result;
    else
    cout<<"\nNO second most frequent char";
    return 0;
    
}