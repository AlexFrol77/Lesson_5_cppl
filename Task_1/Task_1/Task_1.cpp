#include <iostream>
#include <vector>

template <class T>
void MySqrt(T &num) {
	std::cout << "[IN]: " << num << std::endl;
	std::cout << "[OUT]: " << num * num << std::endl;
}
template <class T>
void MySqrt(std::vector<T> &vec) {
	std::cout << "[IN]: ";
	for (const auto sl : vec) {
		std::cout << sl << " ";
	}
	std::cout << std::endl;
	std::cout << "[OUT]: ";
	for (const auto sl : vec) {
		std::cout << sl * sl << " ";
	}
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");
	
	auto num = 4;
	std::vector<int> vec = { -1, 4, 8 };
	
	MySqrt(num);
	MySqrt(vec);

	return 0;
}