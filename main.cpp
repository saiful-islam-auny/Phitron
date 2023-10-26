#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int count = 0;
        long long result = 0;

        for (int i = 0; i < N; i++) {
            int j = i;
            while (j + 1 < N && arr[j] == arr[j + 1]) {
                j++;
            }
            int len = j - i + 1;
            result += (long long)(len * (len + 1)) / 2;
            i = j;
        }

        cout << "Case " << t << ": " << N * (N + 1) / 2 - result << endl;
    }

    return 0;
}
