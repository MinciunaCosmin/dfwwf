#include<fstream>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char a[50],b[50];
    fstream f;
    f.open("input_f.dat",ios::in);
    f.get(a,50); f>>b;

    fstream g;
    g.open("output_f.dat",ios::out);

    int x=0;

    for(int i=0;i<strlen(a);i++)
        strlwr(a);


    for(int i=0;i<strlen(a);i++)
        if(a[i]==b[0]) x++;
    g<<x;
    f.close();
    g.close();
}
