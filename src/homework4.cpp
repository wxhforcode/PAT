#include <iostream>
using namespace std;
int gcd(int a,int b);
int lcm(int a,int b);
int main(int argc, char const *argv[]){
	int a,b,gcd_,lvm_;
	cin>>a>>b;
	gcd_ = gcd(a,b);
	lvm_ = lcm(a, b);
	cout <<"gcd is:"<<gcd_<<endl;
	cout <<"lcm is:"<<lvm_<<endl;
	return 0;
}
int gcd(int a,int b){
	if(a == 0){
		return -1;
	}
	if (b%a == 0)
	{
		return a;
	}
	else{
		return gcd(b%a, a);
	}
}
int lcm(int a,int b){
	int gcd_ = gcd(a, b);
	return (a/gcd_)*(b/gcd_)*gcd_;
}
