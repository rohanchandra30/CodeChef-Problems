# include "iostream"

using namespace std;

int main() {

int i,j;
int count=0;
cin >> i >> j;

if (i>0 && i<10000000 && j>0 && j<10000000)
{


		for (int k = 0; k < i; k++)
		{
			
	  		int x;
			cin >> x;	

				if (x>0&&x<1000000000)
				{
				if (x%j==0)
				{
					count=count+1;
				}
			
else{
	count=count+0;
}
					
				}
				
				

	  	}

cout<<count;


}
return 0;


}