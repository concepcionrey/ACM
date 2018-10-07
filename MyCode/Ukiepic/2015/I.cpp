#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

std::string input{""};
std::string result{""};
std::vector<char> v {'B','C','D','G','K','N','P','T'};
std::vector<char> vL {'b','c','d','g','k','n','p','t'};
std::vector<char> vE {'a','o','u'};


bool isHardConsonant(char curr, int index) {
	if (curr == ' ') {
		return true;
	}
	if (index == 0) {
		for(int i{0} ; i < v.size(); ++i) {
			if (curr == v[i]) {
				return true;
			}
		} 
	} else {
		for(int i{0} ; i < vL.size(); ++i) {
			if (curr == vL[i]) {
	
				return true;
			}
		} 
	}
	return false;
}

char findCharToReplace(char curr, int i) {
	int x{1000000};
	int indexToFollow{0};

	if(i == 0) {
	for(int i{0} ; i < v.size(); ++i) {
		int currDiff{abs(curr-v[i])};
		if (x > currDiff) {
			x = currDiff;
			indexToFollow = i;
		}
	}
		return v[indexToFollow];
	} else {
		for(int i{0} ; i < vL.size(); ++i) {
		int currDiff{abs(curr-vL[i])};
		if (x > currDiff) {
			x = currDiff;
			indexToFollow = i;
		}
		}
	}
	return vL[indexToFollow];
}

char findEndingToReplace(char curr) {
	int x{1000000};
	int indexToFollow{0};
	for(int i{0} ; i < vE.size(); ++i) {
		int currDiff{abs(curr-vE[i])};
		if (x > currDiff) {
			x = currDiff;
			indexToFollow = i;
		}
	}
	return vE[indexToFollow];
}

int main() {
	getline(std::cin,input);

	for(int i{0}; i<input.size(); ++i) {
		char foo = input[i];

		if (foo == ' ') {
			std::string res{" "};
			result+=res;
			continue;
		} 

		if(!isHardConsonant(input[i],i)) {
		//	cout << "I got here\n";
			char str = findCharToReplace(input[i], i);
		//	cout << "This is str: " << str << "\n";
			result+= str;
		//	cout << "This is result: " << result << "\n";

			if(static_cast<char>(input[i+1]) == ' ') {
				char val = findEndingToReplace(str);
				result+= val;
				result+= "h";
			} else {
				while(input[i] != ' ' && i < input.size()) {
					++i;
					result+=input[i];
				}
			}
		}

		

	}
	cout << result;
	return 0;
}

// curr.substr(0,0).compare("b") != 0
// 

/*
if(curr != 'b' || curr != 'c' || curr != 'd' || curr != 'g' || curr != k) {
		cout << "bark \n";
		return false;
	} else {
		return true;
	}
 */