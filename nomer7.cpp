#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;

void reverseNum(list<int>& nums) {
	list<int>::iterator it = nums.begin();
	for (list<int>::iterator it = nums.begin(); it != nums.end(); it++){
		nums.insert(it, -*it);//insert-позволяет добавить элемент в любое указанное место и сдвигая уже стоящие там элементы
	}
}

int main(){
	std::list<int> num = { 1, 5, 4, -3 };
	reverseNum(num);
	for (int i : num) cout << i << " ";
	return 0;
}
