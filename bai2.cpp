//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//	string name, ho, ten;
//	int index;
//	bool truesyntax = false;
//	do {
//		cout << "moi ban nhap ten voi cu phap 'ho, ten' " << endl;
//		getline(cin, name);
//		for (int i = 0; i < name.length(); i++) {
//			if (name[i] == ',') {
//				truesyntax = true;
//				break;
//			}
//		}
//		if (!truesyntax) {
//			cout << "ban nhap sai cu phap" << endl;
//		}
//	} while (!truesyntax);
//	index = name.find(',');
//	ho = name.substr(0, index );
//	ten = name.substr(index+1, name.length());
//	cout << "ho cua ban la: " << ho << endl;
//	cout << "ten cua ban la: " << ten << endl;
//	cout << "vay ten cua ban la: " << ho << ten << endl;
//	return 0;
//}