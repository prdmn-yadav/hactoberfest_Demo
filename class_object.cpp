#include<iostream>
#include<string>
using namespace std;

//class
class house
{
private :                     //access specifier :we hide the member var ,only member function can access these var.
    //member variables
	int length = 0, breadth = 0;
public :                       //access specifier
	//member functions
	void setData(int x, int y)
	{
		length = x;
		breadth = y;
	}
	//member functions
	void area()
	{
		cout << "\nArea of house " << length * breadth;
	}
};

int main()
{
	house gini,gane; //memory allocate when obj created.

	gini.setData(300, 500);
	gane.setData(400, 600);

	gini.area();
	gane.area();
	//member function shared by all object.

	return 0;
}
