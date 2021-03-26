#include <iostream>
using namespace std;
void printGraph(int line,int space);
void printSpace(int space);
void printChar(int currentline);
int main(int argc, char const *argv[]){
	int line,space;
	cout<<"input line:";
	cin>>line;
	cout<<"input space";
	cin>>space;
	printGraph(line,space);
	return 0;
}
void printChar(int currentline){
	for (int i = 0; i < 2*currentline-1; ++i)
	{
		cout<<"*";
	}
}
void printSpace(int space){
	for (int i = 0; i < space; ++i)
	{
		cout<<" ";
	};
}
void printGraph(int line,int space){
	for (int currentline = 1; currentline <= line; ++currentline)
	{
		printSpace(line - currentline);
		printChar(currentline);
		printSpace(space);
		printChar(line - currentline+1);
		cout<<"\n";
	}
}

