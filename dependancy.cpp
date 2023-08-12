// Dependency relationships

# include <iostream>
# include <string>
using namespace std;

class Product
{
        private:
            string productID;
            string name;
            double price;
        public:
            Product(){}
            Product(string pID, string pname,double pPrice)
            {
                productID = pID;
                name = pname;
                price = pPrice;
            }
            float getPrice()
            {
                    return price;
            }
            
            void display()
            {
                cout << "  Product ID =" << productID << endl;
                cout << " Product name =" << name << endl;
                cout << " Price = " << price << endl;
            }
};

class SalesPerson
{
        private:
            string name;
            double salesAmount;
        public:
            SalesPerson(string pname){
                name = pname;
                salesAmount = 0;
            }
            void addSales(int qty , Product *P)
            {
                salesAmount = qty  * P->getPrice();
            }
            void display()
            {
                    cout << "name = " << name << endl;
                    cout << "Sales Amount = " <<  salesAmount << endl;
            }
            
};

int main()
{
    char ch;
     Product *P1 = new Product("P001","Mugs" , 200.00);
     SalesPerson *SP = new SalesPerson("Ajith");
    SP->addSales(10, P1);
    SP->display();
    cin >> ch;
}