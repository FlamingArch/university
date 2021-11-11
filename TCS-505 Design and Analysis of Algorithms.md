# Lecture 1 What is an Algorithm

## What is an algorithm?

Finite set of steps to solve a problem is called an algorithm.  
Step => Instructions

Instructions are those which contains fundamental operators.

## What are the characteristics of instructions?

### Definitive

Every instruction must be defined without ambiguity.
**Example:**

i = i ∆ 1 is invalid, as it is unclear what ∆ means.
i = i + 1 is valid, as it is clear that i is incremented by 1.

### Finiteness

Every instruction must pe terminated within a finite amount of time.

**Example:**  
**Invalid Instruction:**  
Define an instruction i (+) 1

```js
i = 1;
while (1) {
  i = i + 1;
}
```

Has no terminating condition, and is, therefore infinite.

### Every instruction must accept at least 0 input and provide at most 1 output.

**Example:** The plus operator '+' takes 2 inputs and gives 1 output.

## Steps involved in solving a problem

### 1. Identify the problem

We have to identify the problem and what the problem wants us to do.

### 2. Identify the constraints

To solve the problem, we need to know what the constraints are.

### 3. Select the Design Logic

Depending on problem statement and constraints, following design strategies may be used:

1. Divide and Conquer
2. Greedy
3. Dynamic Programming
4. Branch and Bound
5. Backtracking

### 4. Validate

Validate whether our algorithm works on every test case.
This can be done using following methods:

Principle of Mathematical Induction
Proof by Contradiction

### Analysis

This is used to compare algorithms w.r.t. time and space complexity and decide which is more suitable.

## Types of Analysis

### Priory Analysis

- Analysis is done before executing any algorithm.
- x = x + 1
- **Principle:** Frequency count of fundamental instructions
  We can see the number of times the fundamental instructions are getting executed.
  Example:

```c
// # First Fundametal Instruction
int n, sum = 0;
scanf("%d", &n);
// Second Fundametal Instruction
for(int i = 0; i < n; i++) {
  sum += i;
}
```

- Provides the estimated value.
- Provides Uniform Value.
- Independent of System
- Can be used to compare two algorithms.

### Posterior Analysis

- Analysis is done after execution.

```

x = x + 1

- sys1 : 0.1ns
- sys2 :0.2ns
- sys3 : 0.16ns
- sys4 : 0.3ns

```

- Provides the exact value.
- Dependent on systems input. (Non-uniform value)
  Lets say there are 2 algorithms: algo1 and algo2.
  algo1 --1K Inputs--> 0.1ns on System 1
  algo2 --1M Inputs--> 1ns on System 2
  We cannot tell which is faster, as the input size of different.
- Cannot be used to compare two algorithms.

# Lecture 2 - Asymptotic Notation

Asymptotic means towards infinity.
When using asymptotic notation, there is an inherent assumption that our input size is towards infinity, aka very large.

## Complexities

There are two types of complexities:

1. Time Complexity
2. Space Complexity

### Time Complexity

Time complexity is the amount of time required to execute the algorithm for a given number of inputs.
Approximate number of instructions to execute a particular algorithm.

### Space Complexity

Extra space required by the algorithm except input.

## Notations Used

1. Big O Notation
2. Big Omega Notation
3. Theta Notation
4. Small O Notation
5. Small Omega Notation

## Big O Notation

f(n) = O(g(n))
g(n) is "tight" upper bound of f(n), i.e. f(n) can never go beyond g(n).
f(n) = O(g(n)) iff f(n) <= g(n) for all n >= n0, and for some constant c > 0.

f(n) will never perform worse than g(n).

Algo1 => $O(n^2 + 3n + 4)$  
Algo2 => $O(2n^2 + 4)$

-> Constants are ignored if it comes as addition, subtraction, multiplication, division.
Algo1 => $O(n^2 + n)$  
Algo2 => $O( n^2)$

-> Lower order terms are ignored in addition and subtraction.
Algo1 => $O(n^2)$  
Algo2 => $O( n^2)$

> Shortcut: Take the highest order term.

## Big Omega Notation 

f(n) = Ω(g(n))
g(n) is "tight" lower bound of f(n), i.e. f(n) can never go below g(n).
f(n) = Ω(g(n)) iff f(n) >= g(n) for all n >= n0, and for some constant c > 0.

f(n) will never perform better than g(n).

## Theta Notation

Theta gives both upper and lower bound.
f(n) = θ(g(n)) iff f(n) <= $C_1g(n) <= f(n) <= C_2g(n)$ for all n >= max(n1, n2).

f(n) = O(g(n)) and f(n) = Ω(g(n))

## Small O Notation

o gives us upper bound.
f(n) = o(g(n)) = f(n) < g(n) for all $n > n_0$ and for all $c > 0$

## Small Omega Notation

ω gives us lower bound.
f(n) = o(g(n)) = f(n) > g(n) for all $n > n_0$ and for all $c > 0$

## Important

1. $f(n) = O(g(n)) \longrightarrow g(n) = Ω(f(n))$
2. $f(n) = o(g(n)) \longrightarrow g(n) = ω(f(n))$
3. $f(n) = θ(g(n)) \longrightarrow f(n) = O(g(n)) \& f(n) = Ω(g(n))$

## Properties

| Notation | Reflexive | Symmetric | Transitive |
| -------- | --------- | --------- | ---------- |
| O        | Yes       | No        | Yes        |
| Ω        | Yes       | No        | Yes        |
| θ        | Yes       | Yes       | Yes        |
| o        | No        | No        | Yes        |
| ω        | No        | No        | Yes        |
| -------- | --------- | --------- | ---------- |

> **Reflexive:**  
> $ f(n) = O(f(n)) $

> **Symmteric:**  
> $ f(n) = O(g(n)) $  
> $ g(n) = O(g(n)) $  
> $ \_aR_b \longrightarrow \_bR_c $

> **Transitive:**  
> $ \_aR_b \& \_bR_c \longrightarrow \_aR_c $

## Lecture 3 - Calculating Time Complexity

An algorithm may have:

- Simple Loop
- Nested Loop
- if-else
- Recursive Function

# Simple Loop

To calculate the time complexity, we will count the frequency of fundamental instructions.

**Example:**

```c
int sum = 0;  // 1   // Only Ran 1st Time
     // 1     // n+1 // n
for(int i = 0; i < n; i++) {
  sum += i; // n
}
```

$1 + 1 + (n + 1) + n + n$  
$= (3n + 3)$  
$= O(n) $

**Example:**

```c
int sum = 0; // 1
     // 1     // n+2 // n+2
for(int i = 0; i < n; i+=2) {
  sum += i; // n
}
```

$ 1, 3, 5, 7, 9, ..., n $  
Arithmetic Progression:  
$ a + (k - 1)d $  
where $ d = t_2 - t_1 $  
$ = n = 1 + (k - 1) 2 $  
$ = (n - 1) = (k - 1) 2 $  
$ = (k - 1) = \frac{(n - 1)}{2} $  
$ = k = \frac{(n - 1)}{2} + 1$  
$ = k = \frac{(n - 1)}{2}$  
Time Complexity: $O(\frac{(n - 1)}{2})$

# Lecture 4 - Example 3 Complexity Simple Loop

**Example:**

```c
int sum = 0;
for(int i = 0; i < n; i*=2) {
  sum += i;
}
```

$ 1, 2, 4, 8, ... n$  
Geometric Progression:  
$ t_k = ar^{k-1}$  
$ = n = 1 \cdot 2^{k-1} $  
$ = n = \frac{2^k}{2} $  
$ 2^k = 2n $  
$ k = log_2(2n) = log_2(n) + log_2(2)$  
$ k = log_2(n) + 1$  
Time Complexity: $ log_2(n) + 1 = O(log n) $

# Lecture 5 - Example 4 Complexity Simple Loop

**Example:**

```c
int sum = 0;
for(int i = n; i >= 1; i/=2) {
  sum += i;
}
```

$ n, n/2, n/4, n/8, ... 1 $ ($k$ Steps)  
$ a = n, r = \frac{t_2}{t_1} = \frac{n /2}{n} = \frac{1}{2} $  
$ t_k = ar^{k-1}$
$ 1 = n(1/2)^{k-1} $
$ 2^{k-1} = n $
$ \frac{2^k}{2} = n $
$ 2^k = 2n $
$ k = log_2(n) + 1$

Time Complexity: $O(log n)$

# Lecture 6 - Complexity Nested Loop

```c
for(int i = 1; i <= n; i++) {
  for (int j = 1; j <= n; j++) {
    sum += j;
  }
}
```

| i   | j       | times   |
| --- | ------- | ------- |
| $1$ | $1-> n$ | $n$     |
| $2$ | $1-> n$ | $n$     |
| $3$ | $1-> n$ | $n$     |
| $4$ | $1-> n$ | $n$     |
| ... | ...     | ...     |
| $n$ | $1-> n$ | $n$     |
|     |         | $n * n$ |

Time Complexity: $O(n^2)$

# Lecture 7 - Example 2 Nested Loop

```c
for(int i = 1; i <= n; i++) {
  for (int j = 1; j <= n; j+=2) {
    sum += j;
  }
}
```

| i   | j       | times              |
| --- | ------- | ------------------ |
| $1$ | $1-> n$ | $\frac{n+1}{2}$    |
| $2$ | $1-> n$ | $\frac{n+1}{2}$    |
| $4$ | $1-> n$ | $\frac{n+1}{2}$    |
| $8$ | $1-> n$ | $\frac{n+1}{2}$    |
| ... | ...     | ...                |
| $n$ | $1-> n$ | $\frac{n+1}{2}$    |
|     |         | $n \frac{n+1}{2} $ |

Time Complexity: $O(n^2)$

# Lecture 8 - Example 3 Nested Loop

```c
for(int i = 1; i <= n; i*=2) {
  for (int j = 1; j <= n; j+=2) {
    sum += j;
  }
}
```

| i   | j       | times                          |
| --- | ------- | ------------------------------ |
| $1$ | $1-> n$ | $\frac{n+1}{2}$                |
| $2$ | $1-> n$ | $\frac{n+1}{2}$                |
| $4$ | $1-> n$ | $\frac{n+1}{2}$                |
| $8$ | $1-> n$ | $\frac{n+1}{2}$                |
| ... | ...     | ...                            |
| $n$ | $1-> n$ | $\frac{n+1}{2}$                |
|     |         | $\log{n} \cdot \frac{n+1}{2} $ |

Time Complexity: $O((\log n) \cdot \frac{n+1}{2})$  
$ = O($n \log{n}$)$

# Lecture 9 - Example 4 Nested Loop

```c
for(int i = 1; i <= n; i++) {
  for (int j = 1; j <= n; j+=2) {
    for(int k = 1; k <= n; k*=2) {
      sum += k;
    }
  }
}
```

| i   | j                           | k                                  |
| --- | --------------------------- | ---------------------------------- |
| $1$ | $\frac{(n+1)}{2}$ -> 1 or n | $(\log\_{2}{n})(\frac{n+1}{2}) $   |
| $2$ | $\frac{(n+1)}{2}$ -> 1 or n | $(\log\_{2}{n})(\frac{n+1}{2}) $   |
| ... | ...                         | ...                                |
| $n$ | $\frac{(n+1)}{2}$ -> 1 or n | $n (\log\_{2}{n})(\frac{n+1}{2}) $ |

Time Complexity: $ n^2 \log{n} $

# Lecture 10 - Types of Complexities

## 1. Constant (O(1))

Constant complexity means the complexity of an algorithm is independent of the input size.
For n = 1, 10, 100, 1000, ..., the complexity is always the same, as the steps to solve the problems remains same.

## 2. Linear (O(n))

Lineal complexity means the complexity of an algorithm grows in direct proportion to the size of the input.

## 3. Logarithmic (O(log n))

Complexity is in proportion to the logarithm of the input size.
Complexity of algorithm will grow linearly with exponential increase in input size.
n = x
2n = x+1

## 4. Polynomial (O($n^k$)) ($n_2$, $n_3$, $n_4$, ...)

The complexity grows in proportion to $k^{th}$ power of input size.
It takes a lot of operations on large dataset.

## 5. Exponential (O($k^n$)) ($2^n$, $3^n$, $4^n$, ...)

At each step the no. of operations become multiplied by k.

These types of algorithms are used for exhaustive searching of solution.

## Arranging from best to worse:

$ O(1) < O(\log{n}) < O(n) < O(n^k) < O(k^n) $
