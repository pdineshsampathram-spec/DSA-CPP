# C++ STL Pair Practice 🚀

This repository contains beginner-friendly practice problems to understand how **C++ STL `pair`** works.

The goal of this practice set is to build a strong foundation in:

* `pair`
* `vector<pair<int,int>>`
* accessing `.first` and `.second`
* sorting pairs
* iterating through pair containers

These concepts are frequently used in **Data Structures & Algorithms (DSA)** and **competitive programming**.

---

## 📌 Problems Implemented

### 1️⃣ Store and Print Pairs

**Goal:** Learn how to store pairs inside a vector.

**Problem**

Take `n` pairs as input and print them.

Example Input

```
3
1 2
3 4
5 6
```

Example Output

```
1 2
3 4
5 6
```

Concepts Used:

* `pair`
* `vector`
* `.first`
* `.second`

---

### 2️⃣ Swap Pair Values

**Problem**

Given a pair `(a, b)`, swap the values.

Example

Input

```
3 7
```

Output

```
7 3
```

Concepts Used:

* `pair`
* `swap()`
* accessing `.first` and `.second`

Example snippet:

```cpp
swap(p.first, p.second);
```

---

### 3️⃣ Find Pair With Largest Sum

**Problem**

Given `n` pairs, find the pair whose sum `(first + second)` is maximum.

Example Input

```
3
1 5
3 4
2 9
```

Output

```
2 9
```

Explanation

```
1 + 5 = 6
3 + 4 = 7
2 + 9 = 11  ← maximum
```

Concepts Used:

* `vector<pair<int,int>>`
* iteration
* comparisons

---

### 4️⃣ Sort Pairs

**Problem**

Sort pairs based on the **first value**.

Example Input

```
4
5 2
1 7
3 4
2 9
```

Output

```
1 7
2 9
3 4
5 2
```

Concepts Used:

* STL `sort()`
* sorting vectors of pairs

Example snippet:

```cpp
sort(v.begin(), v.end());
```

---

### 5️⃣ Find Pair With Maximum Second Value

**Problem**

Find the pair with the **largest second value**.

Example Input

```
4
1 10
2 5
3 20
4 15
```

Output

```
3 20
```

Concepts Used:

* accessing `.second`
* comparisons

---

## ⭐ Bonus Concept

Pairs are often used in this format:

```
(value, index)
```

Example

```
(10, 0)
(25, 1)
(7, 2)
```

This pattern is used in many problems like:

* Two Sum
* Sorting with index
* Greedy algorithms
* Competitive programming problems

---

## 🎯 Learning Outcome

After completing these problems, you should understand:

* `pair`
* `vector<pair<int,int>>`
* sorting pairs
* accessing `.first` and `.second`
* storing structured data in STL containers

---

## 🧑‍💻 Author

Learning **C++ STL and Data Structures** as part of a Full Stack + DSA journey.

More problems and practice coming soon 🚀
