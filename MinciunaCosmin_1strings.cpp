#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char a[50],b[50];
    cout<<"a=";
    gets(a);
    cout<<"b=";
    gets(b);
    int x=0;
    for(int i=0;i<strlen(a);i++)
        if(a[i]==b[0]) x++;
    cout<<x;
}
