#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   char ch;
   fin.open("myfile.txt",ios::in);
   int pos;
   pos=fin.tellg();
   fin>>ch;
   cout<<ch;
   pos=fin.tellg();
   fin>>ch;
   cout<<ch;
   fin.close();
   getch();
}
