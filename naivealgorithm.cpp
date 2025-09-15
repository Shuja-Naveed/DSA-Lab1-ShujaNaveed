#include <iostream>
#include <string>
using namespace std;

int naivePatternMatch(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();

    if (m == 0) return 0;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) break;
        }
        if (j == m) {
            return i; 
        }
    }
    return -1;
}

int main() {
    string text1 = "hello world";
    string pattern1 = "hello";
    cout << "Test Case 1: " << naivePatternMatch(text1, pattern1) << endl; 

    string text2 = "data structures";
    string pattern2 = "structures";
    cout << "Test Case 2: " << naivePatternMatch(text2, pattern2) << endl; 

    string text3 = "openai chatgpt";
    string pattern3 = "gpp";
    cout << "Test Case 3: " << naivePatternMatch(text3, pattern3) << endl; 

    string text4 = "example";
    string pattern4 = "";
    cout << "Test Case 4: " << naivePatternMatch(text4, pattern4) << endl; 
}
