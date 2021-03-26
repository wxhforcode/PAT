#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isPrime(int a);
void getInput(int &number);
string primeSector(int number);
int main(int argc, char const *argv[])
{
	int number;
	getInput(number);
	if (isPrime(number))
	{
		cout<<number<<" = "<<number<<endl;
	}
	else
	{
		cout<<number<<" = "<<primeSector(number)<<endl;
	}
	
	return 0;
}
void getInput(int &number)
{
	cout<<"input number:";
	cin>>number;
	while(number <= 1){
		cout<<"please input right number:\n";
		cin>>number;
	}
	
}
bool isPrime(int a)
{
	if(a == 2)
		return true;
	if(a%2 == 0)
		return false;
	int k = sqrt(a);
	for (int i = 3; i <= k; i=i+2)
	{
		if (a%i == 0)
		{
			return false;
		}
	}
	return true;
}
string primeSector(int number)
{	

	string temp;
	int i;
	if (isPrime(number))
	{	
		temp = to_string(number);
		return temp;
	}
	double n_Sqrt = sqrt(number);
	for (i = 2; i <= n_Sqrt; ++i)
	{
		if (isPrime(i)&&number%i == 0)
		{
			temp = to_string(i);
			temp = temp+'*';
			break;
		}

	}
	return temp+primeSector(number/i);

}























