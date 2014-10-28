#include <iostream>
using namespace std;

int n, x,y,z,k;

int main() {
x=3;
y=5;
k=1;
n=1;
z=1;

while (n < 100){
	if (n%x==0){
		if (n%y==0) {
			cout << "TF" << endl;
		}
		else{

		cout << "Three" << endl;
		
		}
	}
	else{
		if (n%y==0){
			cout << "Five" << endl;
		}
		else{
		cout << n << endl;
	}
	
	}
	n=n++;
}
system("pause");

}