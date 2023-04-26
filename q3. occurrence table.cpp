#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <text>" << endl;
        return 1;
    }

    char* text = argv[1];
    int freq[26] = {0};

    // Count the frequency of each alphabet
    for (int i = 0; i < strlen(text); i++) {
        if (isalpha(text[i])) {
            freq[tolower(text[i]) - 'a']++;
        }
    }

    // Print the table of frequencies
    cout << "Alphabet\tFrequency" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << (char)(i + 'a') << "\t\t" << freq[i] << endl;
        }
    }

    return 0;
}
