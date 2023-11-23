#include<iostream>
using namespace std;
int main()
{
	char choice;
	int initial_quantity, stock_threshold, sold, remaining_stock=0, restocked_quantity;
	cout << "Enter the initial quantity of product: ";
	cin >> initial_quantity;
	cout << "Enter minimum quantity threshold: ";
	cin >> stock_threshold;
	while (remaining_stock > 0);
	{
		cout << "Enter the sold products quantity: ";
		cin >> sold;
		remaining_stock = initial_quantity - sold;
		if (remaining_stock < stock_threshold)
		{
			cout << "please restock.";
			cout << "Enter the quantity restocked: ";
			cin >> restocked_quantity;
			remaining_stock += restocked_quantity;
		}
		cout << "remaining stock quantity is: " << remaining_stock << endl;
		cout << " do you want to recheck? (y/n): ";
		cin >> choice;
		while (choice == 'y')
			return 0;
		
	}
	
}