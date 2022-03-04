#include <iostream>
using namespace std;

struct BankAccount {
	int money = 1000;
	bool PayBill(int bill_value) noexcept{
		if (bill_value < 0)
			throw invalid_argument("Bill Value can't be negative!");
		if (money >= bill_value) {
			money -= bill_value;
			return true;
		} else
			return false;
	}
};
int main() {
	BankAccount acct;
	// crash although we can catch!
	try {
		cout << acct.PayBill(-10) << "\n";
	} catch (invalid_argument &e) {
		cout << "Caught an exception: " << e.what() << "\n";
	}
	cout << "Bye";

	return 0;
}
