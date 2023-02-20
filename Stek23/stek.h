#pragma once

struct elem
{
	int x;
	elem* next = nullptr;
};

void push(elem*& stek, int value);
bool pop(elem*& stek, int& value);
bool peek(elem* stek, int& value);
