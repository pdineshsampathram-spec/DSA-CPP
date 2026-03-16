# 📚 C++ STL - List

<p align="center">
<img src="https://img.shields.io/badge/Container-list-blue">
<img src="https://img.shields.io/badge/STL-C++-orange">
</p>

---

# 📌 What is `list`?

`list` in C++ STL is a **doubly linked list container**.

Each element stores:

* data
* pointer to next element
* pointer to previous element

This allows **efficient insertion and deletion from any position**.

---

# 🧠 Characteristics

✔ Doubly Linked List
✔ Dynamic size
✔ Fast insertion & deletion
✔ No random access

Time Complexity:

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(1)       |
| Delete    | O(1)       |
| Access    | O(n)       |

---

# 📥 Header File

```cpp
#include <list>
```

---

# 📦 Declaration

```cpp
list<int> l;
```

With values:

```cpp
list<int> l = {1,2,3,4};
```

---

# 🔧 Basic Functions

## push_back()

Adds element at the end.

```cpp
l.push_back(10);
```

---

## push_front()

Adds element at the beginning.

```cpp
l.push_front(5);
```

---

## pop_back()

Removes last element.

```cpp
l.pop_back();
```

---

## pop_front()

Removes first element.

```cpp
l.pop_front();
```

---

# 📍 Access Functions

```cpp
l.front();  
l.back();
```

Example:

```cpp
cout << l.front();
cout << l.back();
```

---

# 📊 Capacity Functions

```cpp
l.size();
l.empty();
```

---

# ✏️ Insert Function

Insert element at a specific position.

```cpp
auto it = l.begin();
advance(it,2);

l.insert(it,100);
```

---

# ❌ Erase Function

```cpp
auto it = l.begin();
l.erase(it);
```

---

# 🔄 Other Useful Functions

### reverse()

```cpp
l.reverse();
```

---

### sort()

```cpp
l.sort();
```

---

### clear()

```cpp
l.clear();
```

Removes all elements.

---

# 🔁 Traversing a List

Using iterator:

```cpp
for(auto it = l.begin(); it != l.end(); it++){
    cout << *it << " ";
}
```

Using range loop:

```cpp
for(auto x : l){
    cout << x << " ";
}
```

---

# 📌 When to Use `list`

Use `list` when:

* frequent insertions
* frequent deletions
* working with linked list structures

---

# 🚫 When NOT to Use

Avoid when you need:

* random access
* fast indexing

Use **vector** instead.

---

# 🎯 Example Program

```cpp
#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l;

    l.push_back(10);
    l.push_front(5);
    l.push_back(20);

    for(int x : l){
        cout << x << " ";
    }

}
```

Output

```
5 10 20
```

---

# 🚀 Learning Goal

Understanding `list` helps in implementing:

* Linked Lists
* Browser Navigation
* LRU Cache
