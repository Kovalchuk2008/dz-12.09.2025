#include <iostream>
using namespace std;

class Car
{
	char* model;
	double price;
	int year;
public:
	Car(const char *mod, double pr, int annual)
	{
		model = new char[strlen(mod) + 1];
		strcpy_s (model, strlen(mod) + 1, mod);
		    price = pr;
			year = annual;
	}
	void Print()
	{
		cout << "Model: " << model << "\tPrice: " << price << "\tYear: " << year << endl;
	}
	~Car()
	{
		delete[] model;
	}

};


int main()
{
	Car obj1("Dodge", 10000, 2025);
	obj1.Print();
}