#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;


map<string, int> wordsMapCounter(string str) {
	bool p = false;
	std::map<string, int> cht;
	std::string fl;
	int len = str.size();
	for (int i = 0; i < len; ++i) {
		if ((str[i] == ' ' || str[i] == ',' || str[i] == '.') && p == true) {//p=true - внутри слова(ну как бы собирается оно,то есть пока следующим элементом не станет какой-то символ не буква,то слово собирается) p=false - вне слова 
			cht[fl]++;//если слово еще не встречалось,то будет добавлено в map
			p = 0;
			fl.clear();
		}
		else {
			if (isalpha(str[i]))
			{
				p = 1;
				fl += str[i];
			}
		}
	}
	if (p == true) {//проверка на то осталось ли еще в fl часть слова и если есть,то добавить в ответ 
		cht[fl]++;
	}
	return cht;
}
int main() {
	std::map<std::string, int> words = wordsMapCounter("can you can");
	for (auto l : words) {
		std::cout << l.first << ":" << l.second << std::endl;
	}
}
