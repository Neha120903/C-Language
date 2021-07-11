#include<iostream>
using namespace std;

//Write a program using function to print all the numbers btw 2 given numbers
#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(isprime(i)== true)
		cout<<i<<endl;
	}
}

//Program for Fibonacci sequence
#include<iostream>
using namespace std;
void fib(int n)
{
	int t1=0;
	int t2=1;
	int nextterm;
	for(int i=1;i<=n;i++)
	{
		cout<<t1<<endl;
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
	}
	return ;
}
int main()
{
	int n;
	cin>>n;
	fib(n);
}
//Write a program to find factorial of number.
#include<iostream>
using namespace std;
int fac(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
	f=f*i;
	return f;
}
int main()
{
	int n;
	cin>>n;
	int ans= fac(n);
	cout<<ans<<endl;
}














