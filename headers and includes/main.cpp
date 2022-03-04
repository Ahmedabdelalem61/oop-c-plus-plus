#include <iostream>
using namespace std;

struct Employee;
void SpecialPrint(Employee& e, string before, string after);

struct Employee {
	string id;

	Employee(string id_);
	void Print();
};

Employee::Employee(string id_) {
	id = id_;
}

void Employee::Print() {
	cout << id << "\n";
}

void SpecialPrint(Employee& e, string before, string after) {
	cout << before << e.id << after << "\n";
}

int main() {
	Employee e("I15");
	SpecialPrint(e, "[[", "]]");

	return 0;
}
