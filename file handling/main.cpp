#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char country[50],capital[50];
char line[500];/*
ofstream fout;
fout.open("countries.txt");
cout<<"Enter any 5 Country :"<<endl;
fout<<"COUNTRIES: "<<endl<<"----------------"<<endl;
for (int i=1;i<6;i++)
{
cin.getline(country,50);
fout << country << endl;

}
fout.close ();
fout.open("capital.txt");

cout<<"Enter any 5 Country and their capital:"<<endl;
{
fout<<"CAPITALS:"<<endl<<"----------------"<<endl;
for (int i=1;i<6;i++)
{
cin.getline(capital,50);
fout << capital << endl;

}
}fout.close();

cout<<"ALL data is saved"<<endl;
*/

ifstream fin;
fin.open("countries.txt");
cout<<"contents of country file";
while (fin)
{
	fin.getline(line,500);
	cout<<line<<endl;
}
fin.close();
cout<<endl;
fin.open("capital.txt");
cout<<"contents of capital file";
while (fin)
{
	fin.getline(line,500);
	cout<<line<<endl;
}
fin.close();

return 0;
}

