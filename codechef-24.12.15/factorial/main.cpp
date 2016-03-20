# include "iostream"

using namespace std;

int main(){

int T; // T is the number of inputs
int x; // input
int count;
cin>>T;
if(T>0){
		
		for (int i = 0; i < T; i++)
		{
			cin>>x;  //input the number



			// Calculation of Factorial
		   	long long int fact=1;
					
					for (int j = 0; j < x; j++)
					{
				
						fact=fact * (x-j);

					}
					cout<<fact<<"\n";


			//Calculation of number of trailing zeros
			int count =0;
					
					while(fact%10==0)
								{
									  	fact=fact/10;
										count=count+1;																		
								}
										
										cout<<count<<"\n"; // displays number of trailingzeros
											
		}
		


}
else{

	cout<<"enter positive T !";
}
return 0;

}