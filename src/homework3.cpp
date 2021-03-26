#include <iostream>
#include <iomanip>
using namespace std;
typedef enum
{
	SUN,
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT
} WEEKDAY;
int main(int argc, char const *argv[])
{
	int number = 1;
	WEEKDAY day = FRI; 
	cout<<"Calendar 2016-01\n";
	cout<<"---------------------------\n";
	cout<<"Su  Mo  Tu  We  Th  Fr  Sa\n";
	cout<<"---------------------------\n";
	for (int i = 0; i < 6; ++i)
	{
		int space = 4*day+2;
		cout<<setw(space)<<number;
		day = (WEEKDAY)((day+1)%7);
		number++;
		while(day<=SAT && number<=31)
		{
			cout<<setw(4)<<number;
			if (day == SAT)
			{
				day = (WEEKDAY)((day+1)%7);
				number++;
				cout<<"\n";
				break;
			}
			day = (WEEKDAY)((day+1)%7);
			number++;
		}
		if (number>31)
		{
			break;
		}

	}
	cout<<"\n---------------------------\n";
	return 0;
}