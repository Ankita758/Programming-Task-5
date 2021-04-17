#include<iostream>
using namespace std;
int isprime(int n);
int main()
{
	int num,i;
	bool f=false;
	cout<<"Enter a positive number: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(isprime(i)==1)
		{
			if(isprime(num-i)==1)
			{
				cout<<num<<"="<<i<<" + "<<num-i<<endl;
				f=true;
		    }
		}
   }
	if(!f)
		cout<<num<<"cannot be expressed as sum of two prime numbers.";
	return 0;
}
//Function to check whether n is prime or not
int isprime(int n)
{
	int i=0,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==2)
		return 1;
	else
		return 0;
}
	
