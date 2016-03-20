# include "iostream"
using namespace std;

int main (){

int T;

cin>>T;
int x[T],y[T];
int score1[T],score2[T], array1[T],array2[T];
int sum1 = 0;
int sum2 = 0;

	for (int i = 0; i < T; i++)
{
	cin>>x[i]>>y[i];
	

	sum1=sum1+x[i];
	sum2=sum2+y[i];
	score1[i]=sum1;
	score2[i]=sum2;
	array1[i]=score1[i]-score2[i];
	array2[i]=score2[i]-score1[i];

}
int max1, max2 =0;
for (int j= 0; j < T; j++)
{
	if (array1[j]>max1)
	{
		max1=array1[j];/* code */
	}

	if (array2[j]>max2)
	{
		/* code */   max2=array2[j];
	}

}
if (max1>max2)
{
	cout<<1<<" "<<max1;/* code */
}

else if (max2>max1){

	cout<<2<<" "<<max2;
}
return 0;
}