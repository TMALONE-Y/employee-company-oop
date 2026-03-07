#include<iostream>
using namespace std;

class company {

public:

	int employee_id;
	string employee_name;
	float employee_salary;

	void save(int id, string name, float salary) {

		employee_id = id;
		employee_name = name;
		employee_salary = salary;
	}

	void print() {

		cout << "employee id: " << employee_id

			<< "\nemployee name: " << employee_name

			<< "\nemployee salary: " << employee_salary << endl;
	}
};

int main() {

	company employee_Info;



	employee_Info.save(2582007, "yazan abushreefih", 11.5);
	employee_Info.print();


	return 0;
}