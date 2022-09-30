#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   fout.open("myfile.txt",ios::out);
   int pos;
   pos=fout.tellp();
   cout<<pos;
   fout<<"Hello Sir";
   pos=fout.tellp();
   cout<<pos;
   fout.close();
   getch();
}
