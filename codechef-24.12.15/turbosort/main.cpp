# include "iostream"
using namespace std;

int main(){

long long int T,temp;

//Enter T
cin>>T;
long long int array [T];


	for (int i = 0; i < T; i++)
	{
		//Start entering T inputs
		cin>>array[i];
	}		

			// Sorting Code: this loop tells us the toal number of passes through the array
			for (int j = T-1; j >=0; j--)
			{

				
					for (int k = 0; k < j; k++)
					{
						if (array[k]<array[k+1])
						{
							temp=array[k];
							array[k]=array[k+1];
							array[k+1]=temp;
						}

					}
	}
for (int l = 0; l < T; l++)
{
	cout<<array[l]<<"\n";
}

return 0;

}