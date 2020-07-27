#include<iostream>
using namespace std;
void minMaxLengthWords(string input,string &minword,string &maxword)
{
    int len = input.length();
    int ei = 0,si = 0;
    int min_len = len,min_start_index = 0,max_len = 0,max_start_index = 0;
    
    while(ei <= len)
    {
        if(ei < len && input[ei] != ' ')
        ei++;
        
        else
         {
            int curr_len = ei - si;
            if(curr_len < min_len)
            {
                min_len = curr_len;
                min_start_index = si;
            }
            if(curr_len > max_len)
            {
                max_len = curr_len;
                max_start_index = si;
            }
            ei++;
            si = ei;
         }
    }     
    minword = input.substr(min_start_index,min_len);
    maxword = input.substr(max_start_index,max_len);
    
}
int main()
{
    string a = "i love apple";
    string minword,maxword;
    minMaxLengthWords(a,minword,maxword);
    cout<<"\nminimum length word is : "<<minword;
    cout<<"\nmaximum length word is : "<<maxword;
    return 0;
    
}