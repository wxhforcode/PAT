#include <iostream>
using namespace std;
void getInput(int &n,int &k);
int loop(int n,int k);
int recursion(int n,int k);
int main(int argc, char const *argv[])
{
	int n,k;
	getInput(n,k);
	cout<<"the resault of loop is :"<<loop(n, k)<<endl;
	cout<<"the resault of recursion is :"<<recursion(n, k)<<endl;
	return 0;
}
void getInput(int &n,int&k)
{
	cout<<"input n，k: ";
	cin>>n  >>k;
	while(n <= 1|| k<= 1){
		cout<<"please input right n:";
		cin>>n;
		cout<<"please input right k:";
		cin>>k;
	}	
}
int loop(int n,int k){
	int n1 = 1,n2,n3;
	if(k == 0||k == n){
		return 1;
	}
	for (int i = 1; i <= n; ++i)
	{	
		n1 = n1*i;
		if (i == k)
		{
			n2 = n1;
		}
		if (i == n-k)
		{
			n3 = n1;
		}
	}
	return n1/(n2*n3);
}
int recursion(int n,int k){
	if(k == 0||k == n){
		return 1;
	}
	else{
		return recursion(n-1,k)+recursion(n-1,k-1);
	}
}








