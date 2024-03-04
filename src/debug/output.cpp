#include "output.hpp"

void Output::PrintfArr(vector<int> array) {
    for (auto i : array) {
        cout << i << " ";
    }
    cout << endl;

    return;
}

void Output::PrintfList(ListNode *list) {
    for (ListNode *node = list; node; node = node->next) {
        cout << node->val << " ";
    }
    cout << endl;

    return;
}
