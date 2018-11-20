#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[50], b[50]; int x=0;
    cout<<"a=";
    gets(a);
    for(int i=0, k=strlen(a)-1; i<strlen(a), k>=0; i++, k--)
        b[k]=a[i];
        cout<<"b=";
        for(int j=0;j<strlen(a);j++)
    cout<<b[j];
    cout<<endl;
    for(int j=0;j<strlen(a);j++)
    if(a[j]==b[j]) x++;
    if(x==strlen(a))cout<<"e palindrom";
    else cout<<"nu e palindrom";
}

