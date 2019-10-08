#include "pch.h"
#include <iostream>
#include <list> 
#include <unordered_map>

void remove_duplicates(std::list<int> &myList);
void print_sorted_list(std::list<int> &myList);

int main()
{
	std::list<int> myList = {3, 3, 2, 5, 7, 3, 5, 7, 8, 4, 3, 2, 3, 5 , 7, 5, 6};

	remove_duplicates(myList);
	print_sorted_list(myList);
}

void remove_duplicates(std::list<int> &myList) {
	std::unordered_map<int, bool> myMap;
	for (auto it = myList.begin(); it != myList.end(); it++)
	{
		std::unordered_map<int, bool>::const_iterator itor = myMap.find(*it);
		if (itor == myMap.end()) {
			std::pair<int, bool> new_pair{ *it, true };
			myMap.insert(new_pair);
		}
		else {
			auto temp = it;
			it--;
			myList.erase(temp);
		}
	}
}

void print_sorted_list(std::list<int> &myList) {
	myList.sort();

	// iterate through list with pointers
	for (auto it = myList.begin(); it != myList.end(); it++)
	{
		// dereference the memory for the value
		std::cout << *it << ", ";
	}
}


/*
write code to remove duplicates from an unsorted linked list
follow up
how would you solve this problem if a temporary buffer is not allowed

brute force algorithm
sort the list
delete all but one list element
maybe use remove and store a temperary reference to the object
then readd it into the list behind the current node

dont overthink things
doing it without a buffer requires you to use the runner method which gives n^2 time complexity

the real solution is in linear because it must go through every node in the list once

*/
