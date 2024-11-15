#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;

void plusesDeleter(vector<float>& vec) {
	int len = vec.size();
	for (int i = 0; i < len; ++i){
		if (vec[i] > 0){
			for (int p = i; p < len - 1; ++p){
				vec[p] = vec[p + 1];//сдвиг влево
			}
			vec.pop_back();
			--len;//уменьшаем длину, так как и элементов стало меньше
			--i;//уменьшаем для поиска следующего элемента,так как при сдвиге все оставшиеся элементы сдвигаются влево
		}
	}
}

int main(){
	std::vector<float> a = { 1, 0, -8, -9, 0, 10, 23, -7 };
	plusesDeleter(a);
	for (auto i : a) cout << i << " ";
	return 0;
}
