#include <iostream>
using namespace std;

int getRate(long long C) {
    if (C >= 0 && C <= 10) return 10;
    else if (C >= 11 && C <= 230) return 5;
    else if (C >= 231 && C <= 559) return 8;
    else if (C >= 560 && C <= 1009) return 2;
    else if (C >= 1010 && C <= 5000) return 7;
    else if (C >= 5001 && C <= 10000) return 8;
    else return 3;
}

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        long long S, T;
        cin >> S >> T;

        long long time = 0;

        while (S < T) {
            int rate = getRate(S);
            S += rate;
            time++;
        }

        cout << time << endl;
    }

    return 0;
}
