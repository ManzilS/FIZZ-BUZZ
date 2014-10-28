#include <iostream>
using namespace std;

int n, x,y,z,k;

int main() {
x=3;
y=1;
k=1;
n=1;
z=1;

while (n < 10){
	//n==k;
	if (n%x==0){
		cout << n << x << endl;
		cout << " F" << endl;
		
	}
	else{
		cout << n << endl;
		//cout << k << endl;
	}
	n=n++;
}
system("pause");
}