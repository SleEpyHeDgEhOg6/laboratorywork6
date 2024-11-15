#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;

int wordsCounter(const string& str){
	int count = 0;
	for (auto p = str.begin(); p < str.end(); ++p) {
		if (*p == ' ' || *p == ',' || *p == '.') {
			++count;
		}
	}
	int rt = count + 1;//+1 так как считаю не слова,а знаки или пробелы,а слов на одно больше
	return rt;
}

int main(){
	int words = wordsCounter("can you can");
	std::cout << words << std::endl;
}
