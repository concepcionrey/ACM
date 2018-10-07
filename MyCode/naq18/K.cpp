#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

string str{};
string res{};
int main() {
	getline(cin, str);

	if(str[0] == 'E') {
		char curr{str[2]};
		int count = 0;
		for(int i = 2; i <str.length(); ++i) {
			if(str[i] == curr) {
				++count;
			}
			if(str[i] != curr) {
				res+= curr;
				res+= to_string(count);
				curr = str[i];
				count = 1;
			}
		}
		res+= curr;
		res+= to_string(count);
	} else {
		char curr{str[2]};
		for(int i = 2; i < str.length(); ++i) {
			if (i % 2 == 0) {
				string temp = str.substr(i+1,1);
				int count = stoi(temp,0);
				for(int j = 0; j<count; ++j) {
					res+= curr;
				}
				curr = str[i+2];
			}
		}
	}

	cout << res;
	return 0;
}