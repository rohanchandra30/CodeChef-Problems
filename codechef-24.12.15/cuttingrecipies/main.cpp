#include <iostream>

using namespace std;

int main() {

int T,N,arr[N],array2[N],r,gcd;

cin>>T;

for (int i = 0; i < T; i++)
{
	cin>>N;
	int arr[N], array2[N];
	
	for(int k=0; k<N; k++)
	{

		cin>>arr[k];
		array2[k]=arr[k];
	}
	
gcd=arr[0];		
for (int j = 0; j < N-1; j++)
{

while(gcd!=0){

	r=gcd;
	gcd=arr[j+1]%gcd;
	arr[j+1]=r;

}

    gcd = arr[j+1];


}
for (int l = 0; l < N; l++)
{
	cout<<array2[l]/gcd<<" ";
}
}


return 0;
}