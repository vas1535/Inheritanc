#include<iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");   
	std::ofstream fout;
	
	fout.open("File.txt", std::ios_base::app);
	fout << "Hello Word!\n";
	fout.close();
	system("notepad File.txt");
}