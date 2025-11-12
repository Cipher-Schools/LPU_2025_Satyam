#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    int vowels = 0, consonants = 0;
    char ch;
    while (file.get(ch)) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
    file.close();
}
