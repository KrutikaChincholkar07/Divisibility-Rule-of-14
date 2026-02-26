#include <iostream>
using namespace std;

int main() {
    int num, temp;

    cout << "Enter a number: ";
    cin >> num;

    bool div2 = (num % 2 == 0);

    temp = num;
    while (temp > 70) {
        int last = temp % 10;
        temp = temp / 10 - 2 * last;
    }

    bool div7 = (temp % 7 == 0);

    if (div2 && div7)
        cout << num << " is divisible by 14";
    else
        cout << num << " is not divisible by 14";

    return 0;
}
