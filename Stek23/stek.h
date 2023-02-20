#pragma once

template <typename T>
struct elem
{
	T x;
	elem* next = nullptr;
};

template <typename T>
void push(elem<T>*& top, T value) {
	elem<T>* new_el = new elem<T>;
	new_el->x = value;
	new_el->next = top;
	top = new_el;
}

template <typename T>
bool pop(elem<T>*& top, T& value) {
	if (!top) return false;

	value = top->x;
	auto old_el = top;
	top = top->next;
	delete old_el;
	return true;
}

template <typename T>
bool peek(elem<T>* top, T& value) {
	if (!top) return false;

	value = top->x;
	return true;
}
