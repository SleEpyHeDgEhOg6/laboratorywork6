#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
	for (auto it = first; it != last; ++it) {
		if (*it == el) {//*-получает элемент по очереди, на который указывает it
			return it;
		}
	}
	return last;
}

int main() {
	std::vector<int> v = { 6, 8, 1, 2, 3, 4, 5 };
	std::vector<int>::iterator it = Find(v.begin(), v.end(), 2);
	std::cout <<std::distance(v.begin(), it) << std::endl;
	return 0;
}
