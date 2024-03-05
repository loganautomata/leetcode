#include "output.hpp"
#include "solution.cpp"

using namespace std;

Output output;
Solution solution;

int main(int, char**){
    string s = "pwwkew";
    
    cout << solution.lengthOfLongestSubstring(s) << endl;

    return 0;
}
