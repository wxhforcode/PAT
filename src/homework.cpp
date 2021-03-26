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
	int date;
	const WEEKDAY date_1 = FRI;
	WEEKDAY weekday;
	cin >> date;
	if (date<1 || date >31)
	{
		cout << "error" <<endl;
		return 1;
	}
	weekday = (WEEKDAY )((date-1+date_1)%7);
	cout<<weekday<<endl;
	return 0;
}