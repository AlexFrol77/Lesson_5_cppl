#include <iostream>

template <class T>
class Mass {
private:
	class SubMass;
	SubMass* arr_int;
	int _rows;
	int* _cols;
	class SubMass {
	public:
		int* p_arr_int;
		int temp;
		SubMass() {}
		SubMass(int size) {
			p_arr_int = new int[size];

			for (int i = 0; i < size; i++) {
				p_arr_int[i] = rand() % 50;
			}
		}
		int& operator[](int cols) {
			return p_arr_int[cols];
		}
	};
public:

	Mass(int rows, int cols) {
		this->_rows = rows;
		this->_cols = &cols;
		arr_int = new SubMass[rows];
		for (int i = 0; i < rows; i++) {
			arr_int[i] = SubMass(cols);
		}
	}
	int Get_rows() {
		return _rows;
	}
	int Get_cols() {
		return *_cols;
	}
	SubMass& operator[](int rows) {
		return arr_int[rows];
	}
};

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	auto test = Mass<int>(3, 5);
	test[0][0] = 4;
	std::cout << test[0][0];

	return 0;
}