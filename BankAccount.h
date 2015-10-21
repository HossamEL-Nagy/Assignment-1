#include <string>
using namespace std;

class BankAccount
{
	private:
		string Name;
		string accountNumber;
		double balance;
	public:
		BankAccount(string name, string number, double balance);
		void deposite(double amount);
		void withdraw(double amount);
		void Displaly();
};
