#include <iostream>
int sum(int * date,int number);
using namespace std;
int main(int argc, char const *argv[]){
	int number = 5;
	int date[number];
	for (int i = 0; i < number; ++i)
	{
		/* code */
		cin >> date[i];
	}
	cout<<sum(date,number)<<endl;
	return 0;
}

int sum(int * date,int number){
	int sum = 0;
	for (int i = 0; i < number; ++i)
	{
		/* code */
		sum += date[i]; 
	}
	return sum;
}