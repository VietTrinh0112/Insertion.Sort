#include <iostream>
using namespace std;

int main() {
    int n = 9, temp, number;
    string input[n] = {"xanh", "đỏ", "xanh", "đỏ", "đỏ", "trắng", "đỏ", "xanh", "trắng"};
    int colors[n];

    for (int i = 0; i < n; i++) {
        if (input[i] == "đỏ") {
            colors[i] = 0;
        } else if (input[i] == "trắng") {
            colors[i] = 1;
        } else {
            colors[i] = 2;
        }
    }

    for (int i = 1; i < n; i++) {
        temp = i;
        number = colors[i];
        while (temp > 0 && colors[temp - 1] > number) {
            colors[temp] = colors[temp - 1];
            temp--;
        }
        colors[temp] = number;
    }

    cout << "Dãy các màu sắc sau khi đã sắp xếp: ";
    for (int i = 0; i < n; i++) {
        switch (colors[i]) {
            case 0: 
                cout << "đỏ "; break;
            case 1: 
                cout << "trắng "; break;
            case 2: 
                cout << "xanh "; break;
        }
    }
    cout << endl;

    return 0;
}
