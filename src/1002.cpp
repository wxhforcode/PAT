#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string number;
	cin >> number;
	int total = 0;
	for (int i = 0; i < number.length(); ++i)
	{
		total += number.at(i) - '0';
	}
	number = to_string(total);
	for (int j = 0; j < number.length(); j++)
	{
		switch (number.at(j)-'0')
		{
		case 0:
			cout<<"ling";
			break;
		case 1:
			cout<<"yi";
			break;
		case 2:
			cout <<"er";
			break;
		case 3:
			cout <<"san";
			break;
		case 4:
			cout <<"si";
			break;
		case 5:
			cout <<"wu";
			break;
		case 6:
			cout <<"liu";
			break;
		case 7:
			cout <<"qi";
			break;
		case 8:
			cout <<"ba";
			break;
		case 9:
			cout <<"jiu";
			break;
		default:
			break;
		}
		if(j!=number.length()-1)
			cout<<" ";
	}
	
	return 0;
}