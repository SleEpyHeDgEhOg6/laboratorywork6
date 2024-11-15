#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;


int diffWordsCounter(string str) {
	std::set<string> stroka;
	std::string fl;
	bool p = false;//p=true - внутри слова(ну как бы собирается оно,то есть пока следующим элементом не станет какой-то символ не буква,то слово собирается) p=false - вне слова 
	int len = str.size();
	for (int i = 0; i < len; ++i){
		if ((str[i] == ' ' || str[i] == '.' || str[i] == ',') && p == true){
			stroka.insert(fl);
			fl.clear();
			p = false;
		}
		else {
			if (isalpha(str[i])){
				p = true;
				fl += str[i];
			}
		}
	}
	if (p == true){
		stroka.insert(fl);
	}
	return stroka.size();	
}
int main() {
	string str = "can you can a can";
	std::cout << diffWordsCounter(str)<<std::endl;
	return 0;
}
