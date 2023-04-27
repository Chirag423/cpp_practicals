#include <iostream>
#include <string>
using namespace std;

void character_address(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        const char* p = &str[i];
        cout << "Address of '" << str[i] << "' is: " << static_cast<const void*>(p) << endl;
    } 
}

void str_concatenate(const string& str1, const string& str2) {
    string str3 = str1 + " " + str2;
    cout << str3 << endl; 
}

void str_comparison(const string& str1, const string& str2) {
    if (str1 == str2) {
        cout << "The strings are equal." << endl;
    } else if (str1 < str2) {
        cout << "The first string is less than the second." << endl;
    } else {
        cout << "The first string is greater than the second." << endl;
    }
}

void str_length(const string& str1){
    int length = str1.length();
    cout << "The length of the string is: " << length << endl;
}

void str_uppercase(string& str) {
    for (char& c : str) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
    }
    cout << "Uppercase string: " << str << endl;
}

void str_reverse(string& str) {
    string reversed_str = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversed_str << endl;
}

void str_insert(string& str, const string& insert_str) {
    int pos;
    cout << "Write the position at which you want to insert second string: ";
    cin >> pos;
    str.insert(pos, insert_str);
    cout << "\nModified string: " << str << endl;
}

int main() {
    cout << "enter your first string 'str' : " << endl;
    string str;
    getline(cin, str);
    cout << "enter your second string 'str1' : " << endl;
    string str1;
    getline(cin, str1);
    
    cout << "\n1. Address of each character in the string 'str'and 'str1' : " << endl;
    character_address(str);
    cout << "\n";
    character_address(str1);

    cout << "\n2. Concatenate string 'str' and 'str1':" << endl;
    str_concatenate(str, str1);

    cout << "\n3. Comparing str and str1: " << endl;
    str_comparison(str, str1);

    cout << "\n4. Calculate length of 'str' and 'str1': " << endl;
    str_length(str);
    str_length(str1);

    cout << "\n5. Convert lowercase to uppercase: " << endl;
    str_uppercase(str);
    str_uppercase(str1);

    cout << "\n6. Reverse the string: " << endl;
    str_reverse(str);
    str_reverse(str1);

    cout << "\n7. Insert str1 in str on user-specified position: " << endl;
    str_insert(str, str1);
}
