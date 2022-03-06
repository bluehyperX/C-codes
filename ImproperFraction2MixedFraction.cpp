#include <iostream>
using namespace std;

int main() {
    int num,den,a;
    
    cin>>num;
    cin>>den;
    a=num/den;
    num=num%den;
	cout<<a<<" "<<num<<"/"<<den<<endl;
	return 0;
}