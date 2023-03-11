#pragma once

template <class T>
class Count {
public:

	Count();
	~Count();

	void operator()(T num);

	int Get_sum();
	int Get_count();

private:
	int	count_sum = 0,
	    count_num = 0;
};