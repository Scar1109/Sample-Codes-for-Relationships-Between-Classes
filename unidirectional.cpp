//Uni directional association
#include <iostream> 
#include <string>
using namespace std;


class Manager
{
	private:
		string managerID;
		string name;
	public:
		Manager();
		Manager(string managerID, string pname)
		{
			managerID = managerID ;
			name = pname;	
		}
		void displayManager()
		{
			cout << " Manager ID  = " << managerID << endl;
			cout << " name  = " << name << endl;
		}
};


class Department
{
    private:
    string deptID;
   	Manager *mgr; //an object of Manager as attribute

    public:  
   	Department (string pdeptID,  Manager *m) 
    {  
		deptID = pdeptID;
        mgr = m;
    } 

    void displayDept()
	{
		cout << "deptID " << deptID << endl;
		mgr->displayManager();
	}   
};



int main()
{
	char ch;
	Manager *m = new Manager("001", "Amal");
	m->displayManager();
	cout << " **************************" << endl;
	Department *d = new Department("D1", m);
	d->displayDept();
	delete d;
	delete m;
	cin >> ch;
	return 0;
}


