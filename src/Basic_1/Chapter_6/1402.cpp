#include <bits/stdc++.h>
using namespace std;

string decrypt(string cipher, string key)
{
    string plain = "";
    int keyLen = key.size();
    int keyPos = 0;
    for (char ch : cipher)
    {
        char kc = tolower(key[keyPos]);
        int shift = kc - 'a';
        char base = isupper(ch) ? 'A' : 'a';
        int cVal = ch - base;
        int pVal = (cVal - shift + 26) % 26;
        plain += char(base + pVal);

        keyPos = (keyPos + 1) % keyLen;
    }
    return plain;
}

int main()
{
    string key, cipher;
    getline(cin, key);
    getline(cin, cipher);
    transform(key.begin(), key.end(), key.begin(), ::tolower);
    cout << decrypt(cipher, key) << endl;
    return 0;
}