#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a);

int main(int argc, char const *argv[]){	
	int number;
	cout<<"input number:";
	cin>>number;
	cout<<"The number is Prime?\n"<<boolalpha<<isPrime(number)<<endl;
	return 0;
}
bool isPrime(int a){
	if(a == 1||a == 2)
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
