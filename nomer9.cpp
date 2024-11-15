#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;

void Sort(list<int>& nums) {
	int fl;
	int len = nums.size();
	for (auto p = 0; p < len; ++p){
		list<int>::iterator i = nums.begin();//на первый элемент
		while (i !=--nums.end()) {//-- предпоследний элемент,чтобы не выйти за границы 
			auto chra = i++;//хранит текущий элемент iterator,а потом увеличивает его
			if (*i > *chra)//два соседних элемента 
			{
				fl = *i;
				*i = *chra;
				*chra = fl;
			}
		}
	}
}
int main() {
	std::list<int> nums = { 1, 5, 4, -3 };
	Sort(nums);
	for (int num : nums) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	return 0;
}
