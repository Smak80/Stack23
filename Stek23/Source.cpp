#include <iostream>
#include "stek.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	elem* stack1 = nullptr;
	int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for(int i = 0; i<10; i++)
	{
		cout << values[i] << " ";
		push(stack1, values[i]);
	}
	cout << endl;
	int val;
	while (pop(stack1, val))
	{
		cout << val << " ";
	}
	cout << endl;
}