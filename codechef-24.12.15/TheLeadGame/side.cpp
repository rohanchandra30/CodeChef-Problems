#include<iostream>
using namespace std;
 
int main()
{
	int n,score1=0,score2=0,a,b,max1=0,max2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		score1=score1+a;
		score2=score2+b;
		if(max1<(score1-score2))
		{
            max1=score1-score2;
		}
 
		if(max2<(score2-score1))
        {
            max2=score2-score1;
        }
 
	}
	if(max1>max2)
	{
		cout<<1<<" "<<max1;
	}
	else
	{
		cout<<2<<" "<<max2;
	}
 
	return 0;
 
}