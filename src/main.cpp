#include "input.hpp"
#include "output.hpp"
#include "solution.cpp"

using namespace std;

Input input;
Output output;
Solution solution;

int main(int argc, char **argv) {
    vector<int> array;

    input.ScanfArr(array);
    int ans = solution.calScore(array);
    cout << ans << endl;

    return 0;
}
