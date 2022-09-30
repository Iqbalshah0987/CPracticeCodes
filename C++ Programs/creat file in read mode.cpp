#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   char ch;
   fin.open("myfile.txt",ios::in);
   ch=fin.get();//this is for string.   //fin>>ch;  //this is for character.
   while(!fin.eof())
   {
       cout<<ch;
       ch=fin.get();   //fin>>ch;
   }
   fin.close();
   getch();
}
