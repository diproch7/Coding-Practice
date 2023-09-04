#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;    //Reading input from STDIN
	long long int mod = 1000000007; //Mod 10^9+7
	long long int factorial[100001];
	factorial[0]=1;factorial[1]=1;
	for(int i=2;i<=100000;i++)
	{
		factorial[i]=(i*factorial[i-1])%mod; // Stores factorial
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<factorial[n]<<endl;

	}	
}
