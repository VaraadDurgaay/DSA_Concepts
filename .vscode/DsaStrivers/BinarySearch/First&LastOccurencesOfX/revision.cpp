#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> &a, int x) {
    int n = a.size();
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] >= x) {
            ans = mid;  // Store index, not value
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int upperbound(vector<int> &a, int x) {
    int n = a.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] > x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

vector<int> occurrences(vector<int> &a, int x) {
    int first = lowerbound(a, x);
    if (first == -1 || first >= a.size() || a[first] != x) {
        return {-1, -1};
    }
    int last = upperbound(a, x);
    if (last == -1) {
        last = a.size();  // If no upper bound, set to array size
    }
    return {first, last - 1};
}

int main() {
    vector<int> a{1, 2, 2, 2, 2, 3, 4, 5, 6};
    vector<int> result = occurrences(a, 2);
    cout << "First occurrence: " << result[0] << ", Last occurrence: " << result[1] << endl;
    return 0;
}
