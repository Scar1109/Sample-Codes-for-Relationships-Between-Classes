#include <iostream> 
#include <string>
#define SIZE 10
using namespace std;

class Customer;
class Order;

class Customer
{
	private:
		string name;
		string address;
		Order *order[SIZE];
		int noOfOrders;
	public:
		Customer();
		Customer( string pname, string paddress);
		void addOrder(Order *O);
		void displayCustomer();
		
		
};

class Order
{
    private:
        string orderID;
        Customer *Cus;
    
    public:  
        Order (string	porderID,  Customer *pCus);
        void displayOrders();
};

Order::Order (string	porderID,  Customer *pCus) 
{  
        orderID = porderID;
        Cus = pCus;
        Cus->addOrder(this);
}



void Order::displayOrders()
{
    cout << " orderID " << orderID << endl;
}

Customer::Customer( string pname, string paddress)
{
    name = pname;
    address = paddress;
    noOfOrders = 0;
}
void Customer::addOrder(Order *O)
{
        if (noOfOrders < SIZE)
            order[noOfOrders] = O;
        noOfOrders++;
}

void Customer::displayCustomer()
{
    cout << " Customer Name  = " << name << endl;
    cout << " Customer Address  = " << address << endl;
    for( int i = 0; i < noOfOrders; i++)
        order[i]-> displayOrders();
}



int main()
{
	char ch;
	Customer *C1 = new Customer("Gihan", "Malabe");
	Customer *C2 = new Customer("Ajith" , "Kandy");
	Order *O1 = new Order("001", C1);
    Order *O2 = new Order("002",  C1);
    cout << "orders of" << endl;
    C1->displayCustomer();
    cin >> ch;
	return 0;
}