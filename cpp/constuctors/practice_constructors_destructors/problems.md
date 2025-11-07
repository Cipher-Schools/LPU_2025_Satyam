# 🧩 Constructor & Destructor Practice Problems

## Problem 1 — Bank Account Management (Constructor Overloading)

### Problem Statement:
Create a class **BankAccount** with the following:

**Data members:**
- `string name`
- `int accountNumber`
- `double balance`

**Constructors:**
- **Default** → sets `balance = 0`
- **Parameterized** → initializes all data members
- **Copy Constructor** → creates a new account as a copy of another account
- **Destructor** → displays a message `"Account closed for <name>"` when the object is destroyed

**Tasks:**
1. Create 3 accounts using all constructors.
2. Copy one account using the copy constructor.
3. Observe destructor calls at program end.

---

## ⚙️ Problem 2 — Deep vs Shallow Copy (Critical Interview Problem)

### Problem Statement:
Design a class **Book** that dynamically allocates memory for its title (`string*`).

**Implement:**
- A constructor to allocate and copy the title.
- A **deep copy constructor** that creates an independent copy of the title.
- A **destructor** to free the memory.

**Demonstrate:**
What happens when you don’t define your own copy constructor (shallow copy).


---

## 💥 Problem 3 — Employee Data Tracker (Rule of Three)

### Problem Statement:
Create a class **Employee** that stores:
- `char* name`
- `int id`
- `double* salary`

**Implement:**
- Constructor (allocates and initializes data)
- Copy Constructor (deep copies data)
- Destructor (releases memory)

**Then:**
1. Create one employee, copy it into another.
2. Modify the salary of one — verify the other remains unchanged.

💡 **Teaches:** Memory ownership, deep copy, Rule of Three (Constructor, Copy Constructor, Destructor).
