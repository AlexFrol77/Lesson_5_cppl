#include <iostream>
#include <vector>
#include <algorithm>
#include "Count.h" 
#include "Count.cpp"

void PrintOut(const int& result) {
	std::cout << "[OUT]: " << "Get_count() = " << result << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");
	
	int arr_data[6]{ 4, 1, 3, 6, 25, 54 };

	std::vector<int> vec_data = { 4, 1, 3, 6, 25, 54 };

	Count<int> f;
	Count<int> s;

	auto Print = [](const int& num) {std::cout << num << " "; };

	std::cout << "[IN]: ";
	std::for_each(arr_data, arr_data + 6, Print);
	std::cout << std::endl;
	f = std::for_each(arr_data, arr_data + 6, f);
	PrintOut(f.Get_count());
	PrintOut(f.Get_sum());

	std::cout << "/////////////////////" << std::endl;

	std::cout << "[IN]: ";
	std::for_each(vec_data.begin(), vec_data.end(), Print);
	std::cout << std::endl;
	s = std::for_each(vec_data.begin(), vec_data.end(), s);
	PrintOut(s.Get_count());
	PrintOut(s.Get_sum());

	return 0;
}