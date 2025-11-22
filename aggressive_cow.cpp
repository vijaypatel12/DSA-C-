#include <iostream>
#include <vector>
#include <algorithm> // for sort, max_element, min_element
using namespace std;

bool ispossible(vector<int> &arr, int N, int c, int minAllowedDist) {
    int cows = 1;              // first cow at first stall
    int lastStallPos = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == c) return true;
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int c) {
    sort(arr.begin(), arr.end()); // sort stalls

    int minval = arr[0];
    int maxval = arr[N - 1];
    int st = 1, end = maxval - minval;
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (ispossible(arr, N, c, mid)) {
            ans = mid;     // store possible answer
            st = mid + 1;  // try for more distance
        } else {
            end = mid - 1; // reduce distance
        }
    }
    return ans;
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};

    cout << getDistance(arr, N, C) << endl;
    return 0;
}
