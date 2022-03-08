//#include<iostream>
//#include<string>
//
//using namespace std;
//
//string deletespace(string name) {
//    string newname;
//    int count = 0;
//   
//    for (int i = 0; i < name.length(); i++) {
//        if (name[i] == ' ' && name[i] == name[i + 1]) {
//            for (int j = i; j < name.length(); j++) {
//                name[j] = name[j + 1];
//            }
//            i--;
//            count++;
//            continue;
//        }
//        if (name[0] == ' ') {
//            for (int j = 0; j < name.length(); j++) {
//                name[j] = name[j + 1];    
//            }
//            count++;
//        }
//    }
//    if (name.back() == ' ') {
//        count++;
//    }
//    newname = name.substr(0, name.length() - count);
//    return newname;
//}
//int countspace(string name) {
//    int count = 0;
//    for (int i=0; i < name.length(); i++) {
//        if (name[i] == ' ') {
//            count++;
//        }
//    }
//    return count;
//}
//int countletter(string name){
//    int count = 0;
//    for (int i = 0; i < name.length(); i++) {
//        if (((int)name[i] >= 65 && (int)name[i] <= 90) || (int)name[i] >= 97 && (int)name[i] <= 122) {
//            count++;
//        }
//    }
//    return count;
//}
//int countnumber(string name) {
//    int count = 0;
//    for (int i = 0; i < name.length(); i++) {
//        if ((int)name[i] >= 48 && (int)name[i] <= 57) {
//            count++;
//        }
//    }
//    return count;
//}
//int countletterhoa(string name) {
//    int count = 0;
//    for (int i = 0; i < name.length(); i++) {
//        if ((int)name[i] >= 65 && (int)name[i] <= 90) {
//            count++;
//        }
//    }
//    return count;
//}
//int countletterthuong(string name) {
//    int count = 0;
//    for (int i = 0; i < name.length(); i++) {
//        if ((int)name[i] >= 97 && (int)name[i] <= 122) {
//            count++;
//        }
//    }
//    return count;
//}
//
//
//string viethoa(string name) {
//    for (int i = 0; i < name.length(); i++) {
//        if ((int)name[i] >= 97 && (int)name[i] <= 122) {
//            name[i] = toupper(name[i]);
//        }
//    }
//    return name;
//}
//
//string viethoatu(string name) {
//    for (int i = 0; i < name.length(); i++) {
//        if (name[0] != ' ') {
//            name[0] = toupper(name[0]);
//        }
//        if (name[i] == ' ') {
//            name[i+1]= toupper(name[i+1]);
//        }
//    }
//    return name;
//}
//int countword(string name) {
//    int count=1;
//    for (int i = 0; i < name.length(); i++) {
//        if (name[i] == ' '&& (((int)name[i+1] >= 65 && (int)name[i+1] <= 90) || (int)name[i+1] >= 97 && (int)name[i+1] <= 122)) {
//            count++;
//        }
//    }
//    return count;
//}
//
//
//
//
//
//int main() {
//	int numberclick;
//	string name;
//    int temp;
//	cout << "moi ban nhap ten bat ki cua ai co the chua chu so" << endl;
//	getline(cin, name);
//	do {
//		cout << "1/ham xoa khoang trang 2 dau va cuoi cua chuoi" << endl;
//		cout << "2/ham dem so khoang trang cua chuoi" << endl;
//		cout << "3/ham dem ki tu chu so va chu cai" << endl;
//		cout << "4/ham dem ki tu in hoa" << endl;
//		cout << "5/ham dem ki tu in thuong" << endl;
//		cout << "6/ham chuyen toan bo chuoi sang in hoa" << endl;
//		cout << "7/ham in hoa ki tu dau tien moi tu" << endl;
//		cout << "8/ham dem 1 chuoi co bao nhieu tu" << endl;
//		cout << "9/thoat" << endl;
//		cin >> numberclick;
//        switch (numberclick)
//        {
//        case 1:
//        {
//            name = deletespace(name);
//            system("cls");
//            cout << "ten moi cua ban la:" << deletespace(name) << endl;
//            cout << "chieu dai cua ten ban la:" << deletespace(name).length() << endl;
//            break;
//        }
//        case 2:
//        {
//            system("cls");
//            cout << "khoang trang cua chuoi la:" << countspace(name) << endl;
//            break;
//        }
//        case 3:
//        {
//            system("cls");
//            cout << "ban muon dem so hay dem chu" << endl;
//            cout << "1/so" << endl;
//            cout << "2/chu" << endl;
//            cin >> temp;
//            if (temp == 1) {
//                cout << "tong chu so co trong chuoi la " << countnumber(name) << endl;
//            }
//            else {
//                cout << "tong chu cai co trong chuoi la " << countletter(name) << endl;
//            }
//            break;
//        }
//        case 4:
//        {
//            system("cls");
//            cout << "tong chu cai viet hoa co trong chuoi la " << countletterhoa(name) << endl;
//            break;
//        }
//        case 5:
//        {
//            system("cls");
//            cout << "tong chu cai viet thuong co trong chuoi la " << countletterthuong(name) << endl;
//            break;
//        }
//        case 6:
//        {
//            system("cls");
//            cout << "chuoi sau khi in hoa toan bo: " << viethoa(name) << endl;
//            break;
//        }
//        case 7:
//        {
//            system("cls");
//            cout << "chuoi sau khi in hoa tung chu: " << viethoatu(name) << endl;
//            break;
//        }
//        case 8:
//        {
//            system("cls");
//            cout << "tong so tu co trong chuoi la " << countword(name) << endl;
//            break;
//        }
//        default:
//        {
//            system("cls");
//            break;
//        }
//        
//        }
//	} while (numberclick!=9);
//	return 0;
//}