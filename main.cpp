#include <iostream>
#include <string>

bool IsKPeriodic(const string& str, int K) {
    if (K <= 0 || str.length() % K != 0) {
        return false;
    }
    
    string pattern = str.substr(0, K);
    for (int i = K; i < str.length(); i += K) {
        if (str.substr(i, K) != pattern) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::cout << IsKPeriodic("abcabcabcabc", 3) << std::endl;

    return 0;
}