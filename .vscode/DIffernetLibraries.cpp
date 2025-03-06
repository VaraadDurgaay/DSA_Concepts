/***************************************************
 *          C++ USEFUL LIBRARIES & FUNCTIONS       *
 ***************************************************/

 #include <bits/stdc++.h> // 🔥 Includes all standard libraries in one line
 using namespace std;
 
 /************** 1. <iostream> - Basic Input/Output **************/
 #include <iostream>
 cout << "Hello";  // Print to console
 cin >> x;         // Input from user
 getline(cin, str); // Read a full line
 
 /************** 2. <cmath> - Math Functions **************/
 #include <cmath>
 double root = sqrt(25); // Square root -> 5
 int power = pow(2, 3); // Power -> 8
 int absolute = abs(-5); // Absolute value -> 5
 double logarithm = log(10); // Natural log
 double exponent = exp(2); // e^2
 double sine = sin(M_PI/2); // sin(90) = 1
 
 /************** 3. <algorithm> - Sorting & Searching **************/
 #include <algorithm>
 vector<int> v = {4, 2, 7, 1, 5};
 sort(v.begin(), v.end()); // Sort ascending
 reverse(v.begin(), v.end()); // Reverse vector
 auto it = lower_bound(v.begin(), v.end(), 3); // First element >= 3
 auto up = upper_bound(v.begin(), v.end(), 3); // First element > 3
 v.erase(unique(v.begin(), v.end()), v.end()); // Remove duplicates
 
 /************** 4. <vector> - Dynamic Array **************/
 #include <vector>
 vector<int> v = {1, 2, 3};
 v.push_back(4); // Add element
 v.pop_back(); // Remove last element
 v.size(); // Get size
 v.clear(); // Remove all elements
 
 /************** 5. <set> - Ordered Set (Unique & Sorted Elements) **************/
 #include <set>
 set<int> s = {5, 1, 9, 2};
 s.insert(3);
 cout << *s.begin(); // Smallest element
 s.erase(5); // Remove element
 auto it = s.find(3); // Find element
 
 /************** 6. <unordered_set> - Hash Set (Unique & Unordered) **************/
 #include <unordered_set>
 unordered_set<int> us;
 us.insert(10);
 us.insert(5);
 if (us.find(5) != us.end()) cout << "Found";
 
 /************** 7. <map> - Ordered Map (Key-Value Pairs) **************/
 #include <map>
 map<int, string> mp;
 mp[1] = "One";
 mp[2] = "Two";
 cout << mp[1]; // Output: One
 
 /************** 8. <unordered_map> - Hash Map (O(1) Lookups) **************/
 #include <unordered_map>
 unordered_map<int, int> freq;
 freq[10]++; // Increment frequency
 
 /************** 9. <queue> - FIFO Queue **************/
 #include <queue>
 queue<int> q;
 q.push(1);
 q.push(2);
 cout << q.front(); // 1
 q.pop(); // Removes 1
 
 /************** 10. <priority_queue> - Max/Min Heap **************/
 #include <queue>
 // Max Heap
 priority_queue<int> maxHeap;
 maxHeap.push(5), maxHeap.push(10);
 cout << maxHeap.top(); // 10
 
 // Min Heap
 priority_queue<int, vector<int>, greater<int>> minHeap;
 minHeap.push(5), minHeap.push(10);
 cout << minHeap.top(); // 5
 
 /************** 11. <stack> - LIFO Stack **************/
 #include <stack>
 stack<int> st;
 st.push(5);
 st.push(10);
 cout << st.top(); // 10
 st.pop();
 
 /************** 12. <deque> - Double-Ended Queue **************/
 #include <deque>
 deque<int> dq;
 dq.push_front(10);
 dq.push_back(20);
 cout << dq.front(); // 10
 
 /************** 13. <list> - Doubly Linked List **************/
 #include <list>
 list<int> l = {1, 2, 3};
 l.push_back(4);
 l.push_front(0);
 cout << l.front(); // 0
 
 /************** 14. <bitset> - Bit Manipulation **************/
 #include <bitset>
 bitset<8> b("10101010");
 cout << b.count(); // Number of 1s -> 4
 cout << b[2]; // Access bit at index 2
 
 /************** 15. <cstring> - C-Style Strings **************/
 #include <cstring>
 char str1[] = "Hello", str2[] = "World";
 strcpy(str1, str2); // Copy str2 to str1
 strcat(str1, str2); // Concatenate str2 to str1
 cout << strcmp(str1, str2); // Compare strings
 
 /************** 16. <chrono> - Time Measurement **************/
 #include <chrono>
 auto start = chrono::high_resolution_clock::now();
 // Code to measure
 auto end = chrono::high_resolution_clock::now();
 cout << chrono::duration_cast<chrono::milliseconds>(end - start).count();
 
 /************** 17. <random> - Random Number Generator **************/
 #include <random>
 mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 uniform_int_distribution<int> uid(1, 100);
 cout << uid(rng); // Random number between 1 and 100
 
 /************** 18. <numeric> - Mathematical Accumulation **************/
 #include <numeric>
 vector<int> v = {1, 2, 3, 4};
 int sum = accumulate(v.begin(), v.end(), 0); // Sum -> 10
 int gcd = __gcd(12, 18); // GCD -> 6
 int lcm = (12 * 18) / __gcd(12, 18); // LCM -> 36
 
 /************** 19. <tuple> - Multiple Return Values **************/
 #include <tuple>
 tuple<int, char, string> t = make_tuple(1, 'a', "hello");
 cout << get<2>(t); // "hello"
 
 /************** 20. <ext/pb_ds/assoc_container.hpp> - Ordered Set/Map **************/
 #include <ext/pb_ds/assoc_container.hpp>
 #include <ext/pb_ds/tree_policy.hpp>
 using namespace __gnu_pbds;
 template <typename T>
 using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 // ordered_set<int> os;
 // os.insert(10), os.insert(20);
 // os.order_of_key(20) -> Index of element 20
 // *os.find_by_order(0) -> 1st element
 
 /************** 21. <filesystem> - File Management **************/
 #include <filesystem>
 namespace fs = filesystem;
 for (const auto &entry : fs::directory_iterator("./")) {
     cout << entry.path() << endl;
 }
 ===========================================================================================
 /***************************************************
 *          POWERFUL C++ LIBRARIES & FUNCTIONS     *
 ***************************************************/

#include <bits/stdc++.h>  // 🚀 Includes all standard libraries
using namespace std;

/************** 1. <ext/pb_ds/assoc_container.hpp> - Ordered Set & Ordered Map **************/
// Provides ordered set/map with **O(log N) insert, delete, find, order statistics**
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename K, typename V>
using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

// Usage:
ordered_set<int> os;
os.insert(10), os.insert(20), os.insert(30);
cout << os.order_of_key(20); // Index of element (0-based)
cout << *os.find_by_order(1); // 2nd smallest element (20)

/************** 2. <numeric> - Advanced Math Operations **************/
#include <numeric>
vector<int> v = {1, 2, 3, 4};
int sum = accumulate(v.begin(), v.end(), 0); // Compute sum
int gcd = __gcd(24, 18); // GCD (Greatest Common Divisor)
int lcm = (24 * 18) / __gcd(24, 18); // LCM (Least Common Multiple)
iota(v.begin(), v.end(), 1); // Fill vector with {1,2,3,...}

/************** 3. <tuple> - Return Multiple Values **************/
#include <tuple>
tuple<int, char, string> t = make_tuple(10, 'X', "Hello");
cout << get<1>(t); // 'X'

/************** 4. <complex> - Handling Complex Numbers **************/
#include <complex>
complex<double> c1(1.0, 2.0), c2(2.0, 3.0);
complex<double> c3 = c1 + c2; // Complex number addition
cout << abs(c3); // Magnitude of complex number

/************** 5. <regex> - Pattern Matching & String Searching **************/
#include <regex>
string s = "abc123xyz";
regex pattern("\\d+");
cout << regex_search(s, pattern); // Finds first number

/************** 6. <chrono> - Time Measurement **************/
#include <chrono>
auto start = chrono::high_resolution_clock::now();
// Code execution
auto end = chrono::high_resolution_clock::now();
cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms";

/************** 7. <random> - Random Number Generation **************/
#include <random>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
uniform_int_distribution<int> dist(1, 100);
cout << dist(rng); // Random number between 1-100

/************** 8. <valarray> - Fast Vector Math Operations **************/
#include <valarray>
valarray<int> v = {1, 2, 3, 4};
v = v * 2; // Multiplies all elements by 2
cout << v.sum(); // Sum of all elements

/************** 9. <bitset> - Bit Manipulation **************/
#include <bitset>
bitset<8> b("10101010");
cout << b.count(); // Count set bits (4)

/************** 10. <deque> - Double-Ended Queue (Optimized Sliding Window) **************/
#include <deque>
deque<int> dq;
dq.push_front(10);
dq.push_back(20);
dq.pop_front(); // Remove from front

/************** 11. <list> - Doubly Linked List (Faster Insert/Delete than Vector) **************/
#include <list>
list<int> l = {1, 2, 3, 4};
l.push_front(0);
l.push_back(5);

/************** 12. <filesystem> - File Handling **************/
#include <filesystem>
namespace fs = filesystem;
for (const auto& entry : fs::directory_iterator("./")) {
    cout << entry.path() << endl;
}

/************** 13. <unordered_map> - Hash Map for O(1) Lookup **************/
#include <unordered_map>
unordered_map<string, int> freq;
freq["apple"]++;
cout << freq["apple"]; // 1

/************** 14. <unordered_set> - Hash Set for Fast Membership Testing **************/
#include <unordered_set>
unordered_set<int> us = {10, 20, 30};
if (us.count(20)) cout << "Exists"; // O(1) lookup

/************** 15. <stack> - LIFO Stack (Useful in DFS) **************/
#include <stack>
stack<int> st;
st.push(10);
st.pop();

/************** 16. <queue> - FIFO Queue (Useful in BFS) **************/
#include <queue>
queue<int> q;
q.push(10);
q.pop();

/************** 17. <priority_queue> - Min/Max Heap **************/
#include <queue>
// Max Heap
priority_queue<int> maxHeap;
maxHeap.push(10), maxHeap.push(5);
cout << maxHeap.top(); // 10

// Min Heap
priority_queue<int, vector<int>, greater<int>> minHeap;
minHeap.push(10), minHeap.push(5);
cout << minHeap.top(); // 5

/************** 18. <string> - String Manipulation **************/
#include <string>
string s = "hello";
s.append(" world");
cout << s.substr(0, 5); // "hello"

/************** 19. <sstream> - String to Integer & Vice Versa **************/
#include <sstream>
string str = "123";
int x;
stringstream(str) >> x; // Convert string to int
cout << x + 1; // 124

/************** 20. <functional> - Custom Comparators & Hashing **************/
#include <functional>
struct CustomCompare {
    bool operator()(int a, int b) { return a > b; }
};
priority_queue<int, vector<int>, CustomCompare> pq;
pq.push(3), pq.push(1);
cout << pq.top(); // 1

/************** 21. <forward_list> - Single Linked List **************/
#include <forward_list>
forward_list<int> fl = {1, 2, 3};
fl.push_front(0);

/************** 22. <multiset> - Set with Duplicates Allowed **************/
#include <set>
multiset<int> ms = {10, 10, 20};
cout << ms.count(10); // 2

/************** 23. <multimap> - Map with Duplicate Keys **************/
#include <map>
multimap<int, string> mm;
mm.insert({1, "A"});
mm.insert({1, "B"});
cout << mm.count(1); // 2

