#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int callatz(int number);
int main(int argc, char const *argv[])
{
	int number,times;
	cin>>number;
	times = callatz(number);
	cout<<times;
	
	return 0;
}

int callatz(int number){
	int times = 0;
	if (number == 1)
	{
		return times;
	}
	while(number!=1){
		if(number%2 == 0){
			number = number/2;
		}
		else
			number = (3*number+1)/2;
		times++;
	}
	return  times;
}
