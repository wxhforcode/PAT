#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "../include/zyrandom.h"
#define randMax 52
int myRandomNumber(int low,int high);
void printRandNumber(int low,int high);
double myRandomReal(double low,double high);
void printRandCard(int number);
using namespace std;
int main(int argc, char const *argv[])
{
    srand((int)time(NULL));
	printRandNumber(1,randMax);
	return 0;
}

void printRandNumber(int low,int high){
	if(low > high){
		return;
	}
	int number = myRandomNumber(low,high);
	printRandCard(number);
	printRandNumber(low,number-1);
	printRandNumber(number+1,high);
}
void printRandCard(int number){
	string color;
	string cardNumber;
	switch((number-1)/13){
		case 0: color = "♣";break;
		case 1: color = "♦";break;
		case 2: color = "♥";break;
		case 3: color = "♠";break;
		default: color = "error";
	}
	switch((number%13)+1){
		case 11: cardNumber = "J"; break;
		case 12: cardNumber = "Q"; break;
		case 13: cardNumber = "K"; break;
		case 1:  cardNumber  = "A"; break;
		default: cardNumber = to_string(number%13+1);
	
	}
	cout<<color<<" "<<cardNumber<<endl;
}
int myRandomNumber(int low,int high){
	if (low > high)
	{
		cout<<"generateRandNumber : Make sure low <= high\n";
		exit(1);
	}
	return low+rand()%(high-low+1);
}


double myRandomReal(double low,double high){
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

