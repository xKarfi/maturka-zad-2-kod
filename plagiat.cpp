#include <iostream>

using namespace std;

int binarny (double x, int k)
{
	
	cout<<"0,";
	double y=x;
	for(int i=1; i<=k; i++)
	{
	if(y>= 0.5)
	{
		cout<<"1";	
	}
	else
	{
		cout<<"0";
	}
	y*=2;
	if(y>=1)
	{
		y = y-1;
	}
}
cout<<endl;
cout<<"Y: "<<y;
}
int main(int argc, char** argv) 

{
	double x;
	int k;
	cout<<"Podaj x: ";
	cin>>x;
	cout<<"Podaj k: ";
	cin>>k;
	binarny(x, k);
	
	return 0;
}
