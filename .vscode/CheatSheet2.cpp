/************************************
 *        C++ DSA CHEATSHEET        *
 *  For Competitive Programming     *
 ************************************/

/************** 1. FAST I/O **************/
#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast_io();  // Speeds up input/output
    return 0;
}

/************** 2. COMMON MACROS **************/
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)
#define yes() cout << "YES\n";
#define no() cout << "NO\n";

/************** 3. COMMON ALGORITHMS **************/
// (A) BINARY SEARCH
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        (arr[mid] < target) ? low = mid + 1 : high = mid - 1;
    }
    return -1;
}

// (B) PREFIX SUM
vector<int> prefixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + arr[i];
    return prefix;
}

// (C) GCD & LCM
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// (D) FACTORIAL (Iterative)
ll factorial(int n) {
    ll fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    return fact;
}

// (E) FAST EXPONENTIATION (Binary Exponentiation)
ll fastExpo(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

/************** 4. SORTING TECHNIQUES **************/
void sortingExample() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    sort(arr.begin(), arr.end());  // Ascending
    sort(arr.rbegin(), arr.rend());  // Descending
}

/************** 5. DATA STRUCTURES **************/
// (A) HASHMAP
unordered_map<int, int> freq;
freq[10]++;  // Increment frequency of 10

// (B) PRIORITY QUEUE (Max Heap)
priority_queue<int> maxHeap;
maxHeap.push(10), maxHeap.push(20), maxHeap.push(5);
cout << maxHeap.top(); // Outputs 20

// (C) PRIORITY QUEUE (Min Heap)
priority_queue<int, vector<int>, greater<int>> minHeap;
minHeap.push(10), minHeap.push(20), minHeap.push(5);
cout << minHeap.top(); // Outputs 5

// (D) STACK
stack<int> st;
st.push(1), st.push(2);
st.pop(); cout << st.top(); // Outputs 1

// (E) QUEUE
queue<int> q;
q.push(1), q.push(2);
q.pop(); cout << q.front(); // Outputs 2

// (F) DEQUE
deque<int> dq;
dq.push_front(10), dq.push_back(20);
cout << dq.front(); // Outputs 10

/************** 6. GRAPH ALGORITHMS **************/
// (A) BFS (Breadth-First Search)
void bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

// (B) DFS (Depth-First Search)
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) dfs(neighbor, adj, visited);
    }
}

/************** 7. DYNAMIC PROGRAMMING (DP) **************/
// (A) FIBONACCI DP
vector<ll> dp(100, -1);
ll fibonacci(int n) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

// (B) KNAPSACK 0/1
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

/************** 8. TRICKS TO HANDLE LARGE NUMBERS **************/
// (A) Use long long for large numbers
long long sum = 0;

// (B) Prevent integer overflow in mid calculation
int mid = low + (high - low) / 2;

// (C) Use modulo when working with large numbers
const int MOD = 1e9 + 7;
long long result = (a % MOD * b % MOD) % MOD;

Handling Large Numbers in DSA Problems
=====================================================================
 **1. Use the Right Data Type**

// If `int` (32-bit) isn't enough, use `long long` (64-bit)
    long long sum = 0;

========================================================================
**2. Avoid Integer Overflow in Calculations**

// Binary Search Mid Calculation to Prevent Overflow
    int mid = low + (high - low) / 2;

// Multiplication Overflow Prevention
    if ((long long)a * b > c) {
    // Handle overflow case
    }

// Sum Overflow Prevention
    long long sum = accumulate(arr.begin(), arr.end(), 0LL);

===================================================================================
 **3. Use Double for Division Instead of Int**

// Wrong: Integer division causes precision loss
    int div = sum / x;

// Correct: Use double for precise division
    double div = (double)sum / x;
===================================================================================
**4. Use `ceil()` Carefully in Integer Calculations**
    // Wrong: Already floored due to int division
    int val = ceil(a / b);
    // Correct Integer-Based Ceil Calculation
    int val = (a + b - 1) / b;
======================================================================================
 **5. Avoid Division by Zero**
    // Always check before division
    if (b != 0) {
    int res = a / b;
    }
========================================================================================
 **6. Optimize Loops and Conditions to Prevent TLE**

// Use Binary Search Instead of Linear Search
// Use Prefix Sum, DP, or Greedy to Optimize Iterations
// Use Bit Manipulation for Efficiency
```



/************** 9. OTHER USEFUL TIPS **************/
// (A) Check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

// (B) Generate all subsets (Bitmasking)
void generateSubsets(vector<int>& nums) {
    int n = nums.size();
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++)
            if (mask & (1 << i)) cout << nums[i] << " ";
        cout << endl;
    }
}

// (C) Fast Power Calculation
ll power(ll a, ll b, ll mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

/************** END OF CHEATSHEET **************/
