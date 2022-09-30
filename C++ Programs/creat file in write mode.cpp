#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   fout.open("myfile.txt",ios::out);
   fout<<"Hello";
   fout.close();
   getch();
}
