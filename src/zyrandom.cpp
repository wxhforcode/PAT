#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void randomize(){
	srand((int)time(NULL));
}

int generateRandNumber(int low,int high){
	double rate;
	if (low > high)
	{
		cout<<"generateRandNumber : Make sure low <= high\n";
		exit(1);
	}
	rand();
	rate = (double)rand()/((double)RAND_MAX+1.0);
	return low + (int)(rate*(high - low + 1));
}

int nonRepeatRandNumber(int low,int high){
	;
}
double generateRandReal(double low,double high){
	double rate;
	if (low > high)
	{
		cout<<"generateRandReal : Make sure low <= high\n";
		exit(2);
	}
	rand();
	rate = (double)rand()/(double)RAND_MAX;
	return low + rate * (high - low);

}







