# 📚 C++ STL - Stack

<p align="center">
<img src="https://img.shields.io/badge/Container-stack-blue">
<img src="https://img.shields.io/badge/STL-C++-orange">
</p>

---

# 📌 What is `stack`?

`stack` is a container adapter that follows **LIFO (Last In First Out)** principle.

Example:

```
Stack of Plates
```

The last plate placed is the **first one removed**.

---

# 🧠 Characteristics

✔ LIFO structure
✔ Insert/Delete from top only
✔ No random access

---

# 📥 Header

```cpp
#include <stack>
```

---

# 📦 Declaration

```cpp
stack<int> st;
```

---

# 🔧 Basic Functions

### push()

Adds element to stack.

```cpp
st.push(10);
```

---

### pop()

Removes the top element.

```cpp
st.pop();
```

---

### top()

Returns top element.

```cpp
st.top();
```

---

# 📊 Capacity Functions

```cpp
st.size();
st.empty();
```

---

# 🔁 Example Program

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top();

}
```

Output

```
30
20
```

---

# 📌 Applications of Stack

Stacks are widely used in:

* Expression evaluation
* Undo/Redo operations
* Parentheses checking
* Recursion
* Backtracking

---

# 🚀 Important Problems Using Stack

1️⃣ Valid Parentheses
2️⃣ Next Greater Element
3️⃣ Baseball Game
4️⃣ Backspace String Compare

---

# 🎯 Learning Outcome

Understanding stack helps in solving many **interview problems and algorithmic challenges**.
