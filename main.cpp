#include <iostream>

using namespace std;

class Bank{
	public:
		double balance = 500;
		


		void showmenu(){
			cout<< "**********MENU***********" << endl;
			cout << "1 check balance"<< endl;
			cout << "2 deposit"<< endl;
			cout << "3 withdraw" << endl;
			cout << "4 quit" << endl;
			cout <<"**************************" << endl;	
		}

		void check(){
			
			cout << "Balance $"<< balance<<endl;

		}
		void deposit(){

			double d_amount;
			cout << "enter amount to be deposited$ ";
			cin >> d_amount;
			balance += d_amount;
			cout << d_amount << " deposited";
		}

		void withdraw(){
			double d_amount;
			cout << "enter amount to be withdrawn$ ";
			cin >> d_amount;
			if (d_amount < balance)
			{
				balance -= d_amount;
				cout << d_amount << " withdrawn";
			}
			else
			{
				cout << "insufficient fund";
			}
			
			
		}

};




int main(int argc, char const *argv[])
{

	int opt;
	Bank bank;
	do
	{
	bank.showmenu();
	cout << "option$ ";
	cin >> opt;

		switch (opt)
	{
	case 1:
		bank.check();
		break;
	
	case 2:
		bank.deposit();
		break;
	case 3:
		bank.withdraw();
	}

	if (opt != 1 || opt != 2 || opt != 3 || opt != 4 ){
		break;
	}
	} while (opt == 4);


	return 0;
}

