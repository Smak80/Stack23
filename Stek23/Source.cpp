#include <iostream>
#include "stek.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	elem<char*>* stack1 = nullptr;
	const char* values[] = { "один", "два", "три", "четыре", "пять", "6", "7", "8", "9", "10" };
	for(int i = 0; i<10; i++)
	{
		cout << values[i] << " ";
		push(stack1, (char*)values[i]);
	}
	cout << endl;
	char* val;
	while (pop(stack1, val))
	{
		cout << val << " ";
	}
	cout << endl;
}