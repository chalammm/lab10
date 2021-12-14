#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{	
	double loan;
    double per ;
    double pay ; 

	cout << "Enter initial loan: "; 
	cin >> loan;
	cout << "Enter interest rate per year (%): "; 
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1;
    double Interest,total,balance;
	cout << fixed << setprecision(2); 
	while (loan > 0.00) 
	{
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		Interest = (loan*per)/100;
		cout << setw(13) << left << Interest;
    total = loan + (loan*per)/100;
    		if (pay > total)
    		{
        		pay = total;
    		}
    	cout << setw(13) << left << total;
    	cout << setw(13) << left << pay;
    	balance = total -pay;
    	cout << setw(13) << left << balance;
    	cout << "\n";
    	i++;
    	loan = balance;
    }

    return 0;
}
	