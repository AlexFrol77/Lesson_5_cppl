#include <iostream>
#include "Count.h"


Count::Count() {
	std::cout << "Введите размер массива: ";
	std::cin >> _size;
	ptr_arr_source = new int[_size];
	std::cout << "Заполните массив:" << std::endl;
	for (int i = 0; i < _size; i++) {
		std::cout << i + 1 << ") - ";
		std::cin >> ptr_arr_source[i];
	}
}
Count::Count(int* arr_data, int size) {
	this->_size = size;
	ptr_arr_source = new int[_size];
	for (int i = 0; i < _size; i++) {
		ptr_arr_source[i] = arr_data[i];
	}
}
Count::~Count() {
	delete[] ptr_arr_source;
}

void Count::operator()() {
	for (int i = 0; i < _size; i++) {
		if (ptr_arr_source[i] % 3 == 0) {
			count_num++;
			count_sum += ptr_arr_source[i];
		}
	}
	Print_source();
	Print_count_sum();
	Print_count_num();
}

int Count::Get_sum() {
	return count_sum;
}

int Count::Get_count() {
	return count_num;
}


void Count::Print_source() {
	std::cout << "[in]: ";
	for (int i = 0; i < _size; i++) {
		std::cout << ptr_arr_source[i] << " ";
	}
	std::cout << std::endl;
}
void Count::Print_count_sum() {
	std::cout << "[out]: " << "Get_sum() = " << Get_sum() << std::endl;
}
void Count::Print_count_num() {
	std::cout << "[out]: " << "Get_count() = " << Get_count() << std::endl;
}