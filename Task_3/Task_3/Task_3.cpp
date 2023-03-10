#include <iostream>
#include "Count.h" 

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");
	
	int arr_data[6]{ 4, 1, 3, 6, 25, 54 };
	int* ptr_arr = arr_data;
	int size = sizeof(arr_data) / sizeof(arr_data[0]);

	Count count;
	count();

	return 0;
}