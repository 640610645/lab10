#include<iostream>
using namespace std;

void printO(int x,int y){
	cin >> x;
	cin >> y;
	if(x <= 0 || y <= 0){
		cout << "Invalid input";
	}
	for(int N = 0; N < x; N++){
		for(int M = 0; M < y; M++){
			cout << 'O';
		}
		cout << '\n';		
	}

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
