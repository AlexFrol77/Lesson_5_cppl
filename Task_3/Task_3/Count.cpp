#include <iostream>
#include "Count.h"

template <class T>
Count<T>::Count() { }
template <class T>
Count<T>::~Count() { }
template <class T>
void Count<T>::operator()(T num) {
	if (num % 3 == 0) {
		count_num++;
		count_sum += num;
	}
}
template <class T>
int Count<T>::Get_sum() {
	return count_sum;
}
template <class T>
int Count<T>::Get_count() {
	return count_num;
}
