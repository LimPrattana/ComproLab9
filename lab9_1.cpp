#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay;
	double pre,in,tot,newb=0;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	cout<<fixed<<setprecision(2);
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/
	pre = loan;
	for(int i=1;pre>0;i++){
		in = (rate/100)*pre;
		tot = pre+in;
		if(pay>tot){
			pay=tot;

		}
		newb = tot-pay;
	cout << setw(13) << left << i; 
	cout << setw(13) << left << pre; 
	cout << setw(13) << left << in; 
	cout << setw(13) << left << tot;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newb;
	cout << "\n";
		pre = newb;
		
	}
	
	return 0;
}
