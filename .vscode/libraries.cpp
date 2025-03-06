/********************************************
 *       C++ POWERFUL LIBRARIES CHEATSHEET  *
 *  For Competitive Programming & DSA       *
 ********************************************/

 #include <bits/stdc++.h> // Includes all standard libraries (useful for CP)
 using namespace std;
 
 /************** 1. VECTOR, ALGORITHM (STL) **************/
 // Sorting, Searching, Reversing, Unique, etc.
 vector<int> v = {4, 2, 7, 1, 5};
 sort(v.begin(), v.end());  // Sort ascending
 sort(v.rbegin(), v.rend());  // Sort descending
 reverse(v.begin(), v.end()); // Reverse vector
 auto it = lower_bound(v.begin(), v.end(), 3); // First element >= 3
 auto up = upper_bound(v.begin(), v.end(), 3); // First element > 3
 v.erase(unique(v.begin(), v.end()), v.end()); // Remove duplicates
 
 /************** 2. STRING MANIPULATION (STRING) **************/
 string s = "hello";
 reverse(s.begin(), s.end()); // Reverse string
 transform(s.begin(), s.end(), s.begin(), ::toupper); // Convert to uppercase
 transform(s.begin(), s.end(), s.begin(), ::tolower); // Convert to lowercase
 string a = "abc", b = "xyz";
 cout << a + b; // String concatenation -> "abcxyz"
 
 /************** 3. HASHING (UNORDERED_MAP, UNORDERED_SET) **************/
 // O(1) average time complexity for insert, find
 unordered_map<int, int> freq; 
 freq[10]++; // Frequency counter
 
 unordered_set<int> s;
 s.insert(5); s.insert(10);
 if (s.find(10) != s.end()) cout << "Found"; // Search in O(1)
 
 /************** 4. PRIORITY QUEUE (HEAP) **************/
 // Max Heap
 priority_queue<int> maxHeap;
 maxHeap.push(5), maxHeap.push(10);
 cout << maxHeap.top(); // 10
 
 // Min Heap
 priority_queue<int, vector<int>, greater<int>> minHeap;
 minHeap.push(5), minHeap.push(10);
 cout << minHeap.top(); // 5
 
 /************** 5. DEQUE (DOUBLE-ENDED QUEUE) **************/
 deque<int> dq;
 dq.push_front(10), dq.push_back(20);
 cout << dq.front(); // 10
 dq.pop_front(); // Removes front element
 
 /************** 6. SET (ORDERED SET) **************/
 // Stores sorted unique values
 set<int> st = {5, 1, 9, 2};
 st.insert(3);
 cout << *st.begin(); // Smallest element
 
 /************** 7. SEGMENT TREE (TREE DATA STRUCTURE) **************/
 #include <ext/pb_ds/assoc_container.hpp>
 #include <ext/pb_ds/tree_policy.hpp>
 using namespace __gnu_pbds;
 template <typename T>
 using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 // ordered_set<int> os;
 // os.insert(10), os.insert(20);
 // os.order_of_key(20) -> Index of element 20
 // *os.find_by_order(0) -> 1st element
 
 /************** 8. FAST MATRIX EXPONENTIATION (OPTIMIZED DP) **************/
 vector<vector<long long>> matrixMul(vector<vector<long long>>& A, vector<vector<long long>>& B, int mod) {
     int n = A.size();
     vector<vector<long long>> C(n, vector<long long>(n, 0));
     for (int i = 0; i < n; i++)
         for (int j = 0; j < n; j++)
             for (int k = 0; k < n; k++)
                 C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % mod;
     return C;
 }
 
 /************** 9. MODULAR ARITHMETIC (AVOID OVERFLOW) **************/
 const int MOD = 1e9 + 7;
 long long mod_add(long long a, long long b) { return (a % MOD + b % MOD) % MOD; }
 long long mod_mul(long long a, long long b) { return (a % MOD * b % MOD) % MOD; }
 
 /************** 10. RANDOM NUMBER GENERATION **************/
 mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 int randomNumber(int l, int r) {
     uniform_int_distribution<int> uid(l, r);
     return uid(rng);
 }
 
 /************** 11. FAST EXPONENTIATION (BINARY EXPONENTIATION) **************/
 long long fastExpo(long long base, long long exp, long long mod) {
     long long res = 1;
     while (exp > 0) {
         if (exp % 2) res = (res * base) % mod;
         base = (base * base) % mod;
         exp /= 2;
     }
     return res;
 }
 
 /************** 12. TRIE (STRING SEARCHING, AUTOCOMPLETE) **************/
 struct TrieNode {
     TrieNode* children[26] = {};
     bool isEnd = false;
 };
 
 class Trie {
 public:
     TrieNode* root;
     Trie() { root = new TrieNode(); }
 
     void insert(string word) {
         TrieNode* node = root;
         for (char c : word) {
             if (!node->children[c - 'a']) node->children[c - 'a'] = new TrieNode();
             node = node->children[c - 'a'];
         }
         node->isEnd = true;
     }
 
     bool search(string word) {
         TrieNode* node = root;
         for (char c : word) {
             if (!node->children[c - 'a']) return false;
             node = node->children[c - 'a'];
         }
         return node->isEnd;
     }
 };
 
 /************** 13. DISJOINT SET UNION (DSU / UNION FIND) **************/
 class DSU {
     vector<int> parent, rank;
 public:
     DSU(int n) {
         parent.resize(n);
         rank.resize(n, 1);
         for (int i = 0; i < n; i++) parent[i] = i;
     }
     
     int find(int x) {
         if (parent[x] != x) parent[x] = find(parent[x]); // Path compression
         return parent[x];
     }
 
     void unite(int x, int y) {
         int px = find(x), py = find(y);
         if (px != py) {
             if (rank[px] < rank[py]) swap(px, py);
             parent[py] = px;
             if (rank[px] == rank[py]) rank[px]++;
         }
     }
 };
 
 /************** 14. KMP (STRING PATTERN SEARCH) **************/
 vector<int> computeLPS(string pattern) {
     int n = pattern.size(), len = 0;
     vector<int> lps(n, 0);
     for (int i = 1; i < n; i++) {
         while (len && pattern[i] != pattern[len]) len = lps[len - 1];
         if (pattern[i] == pattern[len]) lps[i] = ++len;
     }
     return lps;
 }
 
 /************** 15. SHORTEST PATH (DIJKSTRA) **************/
 void dijkstra(int src, vector<vector<pair<int, int>>>& adj, vector<int>& dist) {
     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
     pq.push({0, src});
     dist[src] = 0;
     while (!pq.empty()) {
         int d = pq.top().first, node = pq.top().second;
         pq.pop();
         if (d > dist[node]) continue;
         for (auto& edge : adj[node]) {
             int next = edge.first, weight = edge.second;
             if (dist[node] + weight < dist[next]) {
                 dist[next] = dist[node] + weight;
                 pq.push({dist[next], next});
             }
         }
     }
 }
 