#include <iostream>
#include <cstdio>
using namespace std;
int getPosition(int n);
int getNumber(int n);
int main(int argc, char const *argv[])
{
	int number = 9999;
	int n;
	cin>>n;
	int ans = getNumber(getPosition(n));
	cout<<ans;
	return 0;
}
int getPosition(int n)
{
	n = n-3;
	if (n<=0)
	{
		return 0;
	}
	int carNumber = n/260+1;
	int position = (carNumber-1)*256+(n%260-4);
	return position;
}
int getNumber(int n)
{
	int number = 0;
	int mod = 0;
	if (n==0)
	{
		return number;
	}
	else if (0<n && n<=9)
	{
		number = n;
	}
	else if (9< n && n<=9+180)
	{
		number = (n-9-1)/2;
		mod = (n-9-1)%2;
		number = number+10;
		if (mod == 0)
		{
			number = number/10;
		}
		else
		{
			number = number%10;
		}

	}
	else if (9+180 < n && n<=9+180+2700)
	{
		number = (n-9-180-1)/3;	
		mod = (n-9-180-1)%3;
		number = number+100;
		if (mod == 0)
		{
			number = number/100;
		}
		else if (mod == 1)
		{
			number = number%100/10;
		}
		else
		{
			number = number%10;
		}
	}
	else if (9+180+2700< n && n<=9+180+2700+3600)
	{
		number = (n-9-180-2700)/4;
		mod = (n-9-180-2700)%4;
		number = number+1000;
		if (mod == 0)
		{
			number = number/1000;
		}
		else if (mod == 1)
		{
			number = number%1000/100;
		}
		else if (mod == 2)
		{
			number = number%1000%100/10;
		}
		else
		{
			number = number%10;
		}
	}
	return number;

}
