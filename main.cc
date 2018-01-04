#include "list.h"
#include "array.h"
#include <iostream>
#include "deque.h"

#define PRINT(SIZE, T) for(size_t i = 0; i < SIZE; ++i) { std::cout<< T[i] << " ";} std::cout << std::endl;

int main()
{
	//list
	mylib::List<char> list;
	list.append('a');
	list.append('b');
	list.append('c');
	list.append('d');
	list.append('e');
	list.append('f');
	list.append('g');
	list.append('h');
	list.append('c');
	list.insert(2, 'k');
	list.removeAt(2);
	list.removeAll('c');
	for (int i = 0; i < list.count(); ++i)
	{
		std::cout << list.at(i) << std::endl;
	}
	std::cout << list.indexOf('c', 4) << list.value(4) << std::endl;
	mylib::List<char> llist;
	llist = list;
	for (int i = 0; i < llist.count(); ++i)
	{
		std::cout << llist.at(i) << std::endl;
	}
	//array
	mylib::Array<int, 6> arry;
	arry[0] = 1;
	arry[1] = 2;
	arry[2] = 3;
	arry[3] = 4;
	arry[4] = 5;
	arry[5] = 6;
	mylib::Array<int, 6> aarry;
	aarry.fill(9);
	arry.swap(aarry);
	PRINT(arry.length(), arry);
	PRINT(aarry.length(), aarry);
	std::cout << std::endl << aarry[0] << aarry.front() << aarry.back();

	//deque
	mylib::Deque<int> deque;
	deque.push_back(1);
	deque.push_back(1);
	deque.push_back(1);
	deque.push_back(1);
	deque.push_back(1);
	deque.push_back(1);
	PRINT(deque.size(), deque);
	deque.pop_back();
	deque.pop_back();
	deque.pop_back();
	deque.pop_back();
	PRINT(deque.size(), deque);
	return 0;
}
