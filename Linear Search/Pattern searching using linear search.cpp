#include <iostream>
#include<string.h>
using namespace std;

void search (char* pattern, char* text)
{
    int m=strlen(pattern);
    int n=strlen(text);
    
    for (int i=0;i<=n-m;i++)
    {
        int j;
        for (j=0; j<m; j++)
            if (text[i+j] != pattern[j])
                break;
        if (j==m)
            cout<<"pattern found at index"<<i<<endl;
            
    }
    
}
int main()
{
    char text[20];
    cout<<"enter the text";
    cin>>text;
    char pattern[20];
    cout<<"enter the pattern";
    cin>>pattern;
    search(pattern,text);
    return 0;
}
