#include <iostream>
#include <string>

#define SIZE 2

using namespace std;

class Employee
{
private :
		string empID;
		string name;
public :
		Employee(string pempID, string pname)
		{
			empID = pempID;
			name = pname;
		}
		void displayEmployee()
		{
				cout << "empID  = "  << empID << endl;
				cout << "name  = " << name << endl;
				cout << "**************************" << endl;
		}
		~Employee()
		{
			cout << "Deleting Employee " << empID << endl;
		}
};

class Department
{
    private:
        Employee *emp[SIZE]; // Aggregation Relationship
    public:
        Department() {}
        void addEmployee(Employee *emp1, Employee *emp2) {
            emp[0] = emp1;
            emp[1] = emp2;
        }
        void displayDepartment() {
            for (int r=0; r < SIZE; r++) 
                emp[r]->displayEmployee(); 
        }
        ~Department() {
            cout << "Department Delete " << endl;
        }
};

int main()
{
	Employee *e1 = new Employee("E001", "Nimal");
	Employee *e2 = new Employee("E002", "Jagath");

    Department *ABC = new Department();

	ABC->addEmployee(e1, e2);
    ABC->displayDepartment();
	delete ABC;

	e2->displayEmployee();
	e1->displayEmployee();
	delete e1;
	delete e2;
	Employee *e3 = new Employee("E003", "Pradeep");
	Employee *e4 = new Employee("E004", "Amila");
	ABC->addEmployee(e3, e4);
	ABC->displayDepartment();
	return 0;
}