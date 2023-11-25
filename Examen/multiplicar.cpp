#include<iostream>
using namespace std;
int main()
{
	int n, i=0;
	cout<<"Ingrese que tabla desea";
	cin>>n;
	do{
		i=i+1;
		cout<<i<<"x"<<n<<"="<<i*n<<endl;
		
	}while(i<10);

	return 0;	
}
