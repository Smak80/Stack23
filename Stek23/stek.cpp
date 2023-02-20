#include "stek.h"

void push(elem*& top, int value)
{
	elem* new_el = new elem;
	new_el->x = value;
	new_el->next = top;
	top = new_el;
}

bool pop(elem*& top, int& value)
{
	if (!top) return false;

	value = top->x;
	auto old_el = top;
	top = top->next;
	delete old_el;
	return true;
}

bool peek(elem* top, int& value)
{
	if (!top) return false;

	value = top->x;
	return true;
}

