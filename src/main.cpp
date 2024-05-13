#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<int> arr = {1,2,3};
    string s = "cbaebabacd";
    string p = "abc";

    cout <<solution.subarraySum(arr, 3) << endl;

    return 0;
}
