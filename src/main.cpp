#include "output.hpp"
#include "solution.cpp"

using namespace std;

Output output;
Solution solution;

int main(int, char**){
    vector<int> l1_arr = {9,9,9,9,9,9,9};
    vector<int> l2_arr = {9,9,9,9};
    ListNode *l1 = GenList(l1_arr);
    ListNode *l2 = GenList(l2_arr);
    
    output.PrintfList(solution.addTwoNumbers(l1, l2));

    return 0;
}
