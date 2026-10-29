#include <iostream>
using namespace std;

int main() {
    int s1, s2, month;
    cout << "Enter salaries and month: ";
    cin >> s1 >> s2 >> month;

    while (month <= 0) {
        cout << "Invalid month! Enter again: ";
        cin >> month;
    }

    int bonus = 0;
    if (month == 1) {
        bonus = 150;
    }

    int total1 = s1 + bonus;
    if(month==1) cout << "Month 1: " << total1 << endl;
    cout << "Month 2: " << s2 << endl;
    return 0;
}
