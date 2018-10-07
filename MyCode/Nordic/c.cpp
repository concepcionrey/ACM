#include<iostream>
#include <string>
using namespace std;

int main() {
	int n{0};
	cin >> n;
	
	for (int i{0}; i< n; ++i) {
		string input;
		cin >> input;
		if(input.compare("P=NP") == 0) {
			cout << "skipped\n";
		} else {
			string str1 = input.substr(0,input.find("+"));
			int str1_int = std::stoi(str1);
			str1 = input.substr(input.find("+"));
			int str2_int = std::stoi(str1);
			cout << str1_int+str2_int << "\n";
		}
	}
	
	return 0;
}