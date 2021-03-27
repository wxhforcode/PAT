#include <iostream>
#include <cstdlib>
using namespace std;
int callatz(int number);
int main(int argc, char const *argv[])
{
	int number,time;
	cin>>number;
	time = callatz(number);
	return 0;
}

int callatz(int number){
	if (number == 1)
	{
		return 0;
	}
	return  1;
}
