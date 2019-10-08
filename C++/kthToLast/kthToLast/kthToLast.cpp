#include "pch.h"
#include <iostream>
#include <list>

template<typename T>
T get_k_to_last(std::list<T> &myList, int k);

int main()
{
	std::list<int> myList{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	std::cout << get_k_to_last_easy(myList, 5);

	return EXIT_SUCCESS;
}

template<typename T>
T get_k_to_last_easy(std::list<T> &myList, int k) {
	auto itor = myList.begin();
	int index = (int)myList.size() - k;
	std::advance(itor, index);

	return *itor;
}


/*
pass in 1
get the last element
pass in 3
get the third from the last element
*/