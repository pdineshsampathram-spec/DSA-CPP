# 📚 C++ STL - Map & Unordered Map

<p align="center">
<img src="https://img.shields.io/badge/Container-map-blue">
<img src="https://img.shields.io/badge/Container-unordered_map-green">
<img src="https://img.shields.io/badge/STL-C++-orange">
</p>

---

# 📌 What is `map`?

`map` is an associative container that stores elements in **key-value pairs**.

* Each key is **unique**
* Elements are stored in **sorted order (by key)**

---

# 📌 What is `unordered_map`?

`unordered_map` also stores **key-value pairs**, but:

* No sorting
* Uses **hashing**
* Faster on average

---

# 🧠 Differences

| Feature         | map                | unordered_map |
| --------------- | ------------------ | ------------- |
| Order           | Sorted             | Unordered     |
| Implementation  | Red-Black Tree     | Hash Table    |
| Time Complexity | O(log n)           | O(1) average  |
| Use Case        | When order matters | Fast lookup   |

---

# 📥 Header Files

```cpp id="map01h"
#include <map>
#include <unordered_map>
```

---

# 📦 Declaration

```cpp id="map02"
map<int, int> mp;
unordered_map<int, int> ump;
```

---

# 🔧 Basic Operations

## Insert Elements

```cpp id="map03"
mp[1] = 10;
mp.insert({2, 20});
```

---

## Access Elements

```cpp id="map04"
cout << mp[1];
```

---

## Check if Key Exists

```cpp id="map05"
if(mp.find(1) != mp.end()){
    cout << "Found";
}
```

---

## Delete Element

```cpp id="map06"
mp.erase(1);
```

---

## Size & Empty

```cpp id="map07"
mp.size();
mp.empty();
```

---

# 🔁 Traversing Map

```cpp id="map08"
for(auto it : mp){
    cout << it.first << " " << it.second << endl;
}
```

---

# 📊 Frequency Count (Most Important Use)

```cpp id="map09"
vector<int> nums = {1,2,2,3,1};

unordered_map<int,int> freq;

for(int x : nums){
    freq[x]++;
}
```

---

# 📌 Common Use Cases

* Frequency counting
* Finding duplicates
* Two Sum problems
* Sliding window with hashing
* Counting characters in strings

---

# ⚡ Example Program

```cpp id="map10"
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map<int,int> freq;

    int arr[] = {1,2,2,3,1};

    for(int i=0;i<5;i++){
        freq[arr[i]]++;
    }

    for(auto x : freq){
        cout << x.first << " -> " << x.second << endl;
    }

}
```

---

# 📌 When to Use

Use `unordered_map` when:

* You need **fast lookup**
* Order does not matter

Use `map` when:

* You need **sorted data**

---

# 🚀 Important Problems Using Map

1️⃣ Two Sum
2️⃣ Valid Anagram
3️⃣ Ransom Note
4️⃣ Contains Duplicate II
5️⃣ Longest Substring Without Repeating Characters

---

# 🎯 Learning Outcome

Understanding `map` and `unordered_map` helps in solving:

* Hashing problems
* Sliding window problems
* Optimization problems

These are **very important for coding interviews**.
