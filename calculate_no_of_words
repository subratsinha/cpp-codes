// this is the impementation of how we calculate number of words in a text file in c++ language

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
 
 
int main()
{
 ifstream file;
 file.open("data_file.txt.txt",ios::in); 
 int count=0;
 char str[20],word[20];
 
 cout<<"Enter a word to count:";
 cin>>word;
 file.seekg(0,ios::beg);
 while(file)
 {
  file>>str;
  if(strcmp(str,word)==0)
   {
     count++;
   }
 } 
 
 cout<<"Occurrence of word="<<count<<"times";
 file.close(); 
 
 return 0;
 
}
