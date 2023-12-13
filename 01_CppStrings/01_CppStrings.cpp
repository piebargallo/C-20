#include <string>
#include <iostream>
#include <format>
using namespace std;

int main() {
	string strHello{ "Hello!!" };
	string strWorld{ "The World..." };
	auto position{ strHello.find("!!") };
	if (position != string::npos) {
		// Found the "!!" substring, now replace it.
		strHello.replace(position, 2, strWorld.substr(3, 6));
	}
	cout << format("Format out: {}", strHello) << endl;
	return 0;
}