#include<bits/stdc++.h>
using namespace std;
// --BRUTE FORCE--
bool bruteForce(string text, string pat) {
    int t = text.size();
    int p = pat.size();

    for (int i=0;i<=t-p;i++) {
        int j=0;
        while(j<p && text[i+j] == pat[j]) {
            j++;
        }
        if (j==p) return true;   // Found the pattern
    }
    return false;
}

int main() {
    string test_str = "supercalifragilisticexpialidocious";
    string target   = "list";

    if (bruteForce(test_str, target))
        cout << "Found";
    else
        cout << "Not found";
    return 0;
}
// --BOYER MOORE--
