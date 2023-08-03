#include <iostream>
#include <cstring>

//write a table in command line arguemnt

using namespace std;

const int size = 26;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Enter string in command line argument." << endl;
        return 1;
    }

    int count[size] = {0};

    for (int i = 1; i < argc; i++) {
        char* str = argv[i];
        int len = strlen(str);
        for (int j = 0; j < len; j++) {
            if (isalpha(str[j])) {
                char ch = tolower(str[j]);
                count[ch - 'a']++;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        if (count[i] > 0) {
            cout << static_cast<char>(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}
