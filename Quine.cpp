#include <string>
#include <fstream>
using namespace std;
int main() {
	string a[] = {
		"QuineTest.txt"
		"#include <string>",
		"#include <fstream>",
		"using namespace std;"
		"int main() {",
	};
	string b[] = {
		"string a[] = {",
		"string b[] = {",
		"string c[] = {",
		"};",
	};
	string c[] = {
		""
	};
	ofstream write;
	write.open(a[0]);
	for (int i = 1; i < 5; i++) {
		write << a[i];
		write << '\n';
	}

	write.close();
	return 0;
}