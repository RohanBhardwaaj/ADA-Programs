#include <iostream>
using namespace std;

int main() 
{
	int c;
	cout << "Enter Counting value: ";
	cin >> c;
	
	int i;
	cout << "Enter intial value: ";
	cin >> i;
	
	int m;
	cout << "Enter modulo value: ";
	cin >> m;
	
	int l;
	cout << "Enter lambda value: ";
	cin >> l;
	
	int a;
	cout << "Enter additive value: ";
	cin >> a;
	
	for(int j=1;j<=i;j++)
	{
		c=(l*c+a)%m;
		cout<<c;
	}
	
	return 0;
}
