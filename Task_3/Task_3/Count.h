#pragma once

class Count {
public:
	Count();
	Count(int* arr_data, int size);
	~Count();

	void operator()();

	int Get_sum();
	int Get_count();

	void Print_source();
	void Print_count_sum();
	void Print_count_num();

private:
	int* ptr_arr_source = nullptr;
	int _size,
		count_sum = 0,
	    count_num = 0;
};