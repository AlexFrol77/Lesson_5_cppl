#include <iostream>

template <class T>
class Mass {
private:

	int _rows,
		_cols;
	class SubMass;
	SubMass* arr_int;

	class SubMass {
	public:
		T* p_arr_int;
		SubMass() {}
		SubMass(int size) {
			p_arr_int = new T[size];
			for (int i = 0; i < size; i++) {
				p_arr_int[i] = rand() % 50;
			}
		}
		~SubMass() { }
		T& operator[](int cols) {
			return p_arr_int[cols];
		}
	};
public:

	Mass(int rows, int cols) {
		this->_rows = rows;
		this->_cols = cols;
		arr_int = new SubMass[rows];
		for (int i = 0; i < rows; i++) {
			arr_int[i] = SubMass(cols);
		}
	}
	Mass(const Mass<T>&) = delete;
	~Mass() { 
		for (int i = 0; i < _rows; i++) {
			if (arr_int[i].p_arr_int != nullptr)
				delete[](arr_int[i].p_arr_int);
		}
		if (arr_int != nullptr)
			delete[] arr_int;
	}
	Mass<T>& operator=(const Mass<T>&) = delete;
	int& Get_rows() {
		return _rows;
	}
	int& Get_cols() {
		return _cols;
	}
	SubMass& operator[](int rows) {
		if (rows >= 0 && rows < _rows) {
			return arr_int[rows];
		}
		else {
			throw std::runtime_error("Выход за диапазон массива");
		}
	}
};

template <class T>
void Print_mass(Mass<T>& mass, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		std::cout << std::endl;
		for (int j = 0; j < cols; j++) {
			std::cout << mass[i][j] << " ";
		}
	}
	std::cout << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	Mass<double> test(3, 5);
	test[0][0] = 4.1;
	std::cout << test[0][0];

	Print_mass(test, test.Get_rows(), test.Get_cols());

	return 0;
}