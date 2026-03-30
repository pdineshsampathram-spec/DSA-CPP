# 📚 C++ STL - Map, Unordered Map & Multimap

<p align="center">
<img src="https://img.shields.io/badge/Container-map-blue">
<img src="https://img.shields.io/badge/Container-unordered_map-green">
<img src="https://img.shields.io/badge/Container-multimap-purple">
<img src="https://img.shields.io/badge/STL-C++-orange">
</p>

---

# 📌 What is `map`?

`map` is an associative container that stores elements in **key-value pairs**.

* Keys are **unique**
* Elements are stored in **sorted order**

---

# 📌 What is `unordered_map`?

* Stores key-value pairs
* Uses **hashing**
* No order
* Faster on average

---

# 📌 What is `multimap`?

`multimap` is similar to `map`, but:

* **Allows duplicate keys**
* Stored in **sorted order**

---

# 🧠 Differences

| Feature         | map      | unordered_map | multimap |
| --------------- | -------- | ------------- | -------- |
| Order           | Sorted   | Unordered     | Sorted   |
| Duplicate Keys  | ❌ No     | ❌ No          | ✅ Yes    |
| Time Complexity | O(log n) | O(1) avg      | O(log n) |

---

# 📥 Header Files

```cpp id="m1"
#include <map>
#include <unordered_map>
```

---

# 📦 Declaration

```cpp id="m2"
map<int,int> mp;
unordered_map<int,int> ump;
multimap<int,int> mmp;
```

---

# 🔧 Basic Operations (map / unordered_map)

## Insert

```cpp id="m3"
mp[1] = 10;
mp.insert({2, 20});
```

---

## Access

```cpp id="m4"
cout << mp[1];
```

---

## Check Key

```cpp id="m5"
if(mp.find(1) != mp.end()){
    cout << "Found";
}
```

---

## Delete

```cpp id="m6"
mp.erase(1);
```

---

# 🔁 Traversal

```cpp id="m7"
for(auto x : mp){
    cout << x.first << " " << x.second << endl;
}
```

---

# 📊 Frequency Count (Most Important)

```cpp id="m8"
unordered_map<int,int> freq;

for(int x : nums){
    freq[x]++;
}
```

---

# 🔧 Multimap Operations

## Insert (IMPORTANT)

```cpp id="m9"
multimap<int,int> mmp;

mmp.insert({1,10});
mmp.insert({1,20});
mmp.insert({1,30});
```

✔ Duplicate keys allowed

---

## Traverse Multimap

```cpp id="m10"
for(auto x : mmp){
    cout << x.first << " " << x.second << endl;
}
```

---

## Find All Values of a Key

```cpp id="m11"
auto range = mmp.equal_range(1);

for(auto it = range.first; it != range.second; it++){
    cout << it->second << " ";
}
```

---

# 📌 When to Use

### Use `unordered_map` (MOST COMMON)

* Frequency counting
* Fast lookup
* Interview problems

---

### Use `map`

* When sorted order is needed

---

### Use `multimap`

* When **duplicate keys are required**
* Rare in interviews

---

# 🚀 Important Problems Using Map

1️⃣ Two Sum
2️⃣ Valid Anagram
3️⃣ Ransom Note
4️⃣ Contains Duplicate II
5️⃣ Longest Substring Without Repeating Characters

---

# 🎯 Learning Outcome

Understanding these containers helps in:

* Hashing
* Optimization
* Efficient lookups

These are **core concepts for coding interviews**.
