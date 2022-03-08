#include<iostream>
#include<string>

using namespace std;

int main() {
	string name;
	bool truename=true;
	cout << "moi ban nhap ten bat ki" << endl;
	cin >> name;
	for (int i = 0; i < (name.length() / 2);i++) {
		if (name[i] != name[(name.length()) - i - 1]) {
			truename = false;
		}
	}
	if (truename) {
		cout << "ten " << name << " la chuoi palindrome!" << endl;
	}
	else {
		cout << "ten " << name << " khong phai la chuoi palindrome!" << endl;
	}
	return 0;
}