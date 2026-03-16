# 📚 C++ STL - Deque

<p align="center">
<img src="https://img.shields.io/badge/Container-deque-blue">
<img src="https://img.shields.io/badge/STL-C++-orange">
</p>

---

# 📌 What is `deque`?

`deque` stands for **Double Ended Queue**.

It allows insertion and deletion from **both front and back**.

It combines features of **vector and queue**.

---

# 🧠 Characteristics

✔ Dynamic size
✔ Fast insertion at both ends
✔ Random access supported

Time Complexity:

| Operation         | Complexity |
| ----------------- | ---------- |
| Insert front/back | O(1)       |
| Delete front/back | O(1)       |
| Access            | O(1)       |

---

# 📥 Header

```cpp
#include <deque>
```

---

# 📦 Declaration

```cpp
deque<int> dq;
```

---

# 🔧 Insertion Functions

### push_back()

```cpp
dq.push_back(10);
```

---

### push_front()

```cpp
dq.push_front(5);
```

---

# ❌ Deletion Functions

### pop_back()

```cpp
dq.pop_back();
```

---

### pop_front()

```cpp
dq.pop_front();
```

---

# 📍 Access Functions

```cpp
dq.front();
dq.back();
```

Example:

```cpp
cout << dq.front();
cout << dq.back();
```

---

# 🔢 Random Access

Unlike list, deque supports indexing.

```cpp
dq[2];
```

---

# 📊 Capacity Functions

```cpp
dq.size();
dq.empty();
```

---

# 🔄 Traversing a Deque

```cpp
for(auto x : dq){
    cout << x << " ";
}
```

---

# 🔧 Other Functions

### clear()

```cpp
dq.clear();
```

---

# 🎯 Example Program

```cpp
#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);

    for(int x : dq){
        cout << x << " ";
    }

}
```

Output

```
5 10 20
```

---

# 📌 When to Use `deque`

Use deque for:

* Sliding Window problems
* Double ended operations
* Queue implementations

---

# 🚀 Important Problem Using Deque

LeetCode **239 - Sliding Window Maximum**
