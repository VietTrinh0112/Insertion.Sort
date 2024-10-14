#include <iostream>
using namespace std;
const int MAX_SIZE = 1000;

int main() {
    int N;
    cout << "Nhập số N: ";
    cin >> N;

    int SoNguyenTo[MAX_SIZE];
    int SoBlum[MAX_SIZE];
    int soNguyenTo_count = 0;
    int soBlum_count = 0;

    for (int i = 2; i < N; ++i) {
        int laNguyenTo = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                laNguyenTo = 0;
                break;
            }
        }

        if (laNguyenTo == 1) {
            SoNguyenTo[soNguyenTo_count++] = i;
        }
    }

    for (int i = 0; i < soNguyenTo_count; ++i) {
        for (int j = i; j < soNguyenTo_count; ++j) {
            int tich = SoNguyenTo[i] * SoNguyenTo[j];
            if (tich < N) {
                SoBlum[soBlum_count++] = tich;
            }
        }
    }

    cout << "Số nửa nguyên tố Blum nhỏ hơn " << N << ": ";
    for (int i = 0; i < soBlum_count; ++i) {
        cout << SoBlum[i] << " ";
    }
    cout << endl;

    return 0;
}

