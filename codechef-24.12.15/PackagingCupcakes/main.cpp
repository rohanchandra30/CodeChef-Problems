# include "iostream"
using namespace std;

int main(){

long long int T,N;
cin>>T;
int x;

for (int i = 0; i < T; i++)
{
	cin>>N;

	if (N>=2 && N<=100000000)
	{
		if (N%2==0)
		{
			x=(N/2)+1;
			cout<<x<<"\n";
		}
	
else 
{
	x=(N+1)/2;
	cout<<x<<"\n";

}

	}

}



return 0;
}