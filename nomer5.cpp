#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;

std::vector<std::string> uniqueWords(const std::string& str){
	std::set<string> ch(str.begin(), str.end());
	std::vector < std::string>v(ch.begin(), ch.end());
	return v;
}
int main() {
	std::vector<std::string> unique = uniqueWords("Can you can");
	for (string p : unique) {
		std::cout << p << " ";
	}
	return 0;
}
