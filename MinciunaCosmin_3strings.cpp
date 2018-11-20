#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char a[50];
    cout<<"a=";
    gets(a);
    for(int i=0;i<strlen(a);i++)
        strlwr(a);
    cout<<a;
}
