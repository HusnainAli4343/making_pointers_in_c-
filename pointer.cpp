#include <iostream>

using namespace std;

int main()

{
	//	pointer conscept
	int x = 20;
	//making pointer
	int *p;
	//& is refernce function
	cout<<"Address in RAM: "<<&x<<endl;
	//put the addres in p variable
	p = &x;
	
	cout<<"value of address: "<<*p<<endl;
	
	
	return 0;

}
