#include <iostream>
#include <vector>

template <class T>
T MySqrt(T num) {
	return (num * num);
}
template <class T>
std::vector<T> MySqrt(std::vector<T> vec) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i] = vec[i] * vec[i];
	}
	return vec;
}
void PrintIn() {
	std::cout << "[IN:] ";
}
void PrintOut() {
	std::cout << "[OUT:] ";
}
template <class T>
void PrintNum(T& num) {
	std::cout << num << std::endl;
}
template <class T>
void PrintVec(std::vector<T>& vec) {
	for (const auto& st : vec) {
		std::cout << st << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");
	
	auto num = 4;
	auto num_sqrt = MySqrt(num);

	std::vector<int> vec = { -1, 4, 8 };
	std::vector <int> vec_sqrt = MySqrt(vec);

	PrintIn();
	PrintNum(num);
	PrintOut();
	PrintNum(num_sqrt);

	PrintIn();
	PrintVec(vec);
	PrintOut();
	PrintVec(vec_sqrt);

	return 0;
}