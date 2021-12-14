#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan,interest,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    int year = 0;
	double prevbal = loan,total,newbal,rate;
	do{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year+1; 
		cout << setw(13) << left << prevbal;
		rate = (interest/100)*prevbal;
		cout << setw(13) << left << rate;
		total =  prevbal + rate;
		if(total < pay){
			pay = total;
		}
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		newbal = total - pay;
		cout << setw(13) << left << newbal;
		prevbal = newbal;
		cout << "\n";
		year++;	
	} while(newbal > 0);
	
	return 0;
}
