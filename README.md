# 🏗️ Experiment 12 – Constructors and Destructors in C++

## 🎯 Aim
To study and implement **Constructors and Destructors** in C++ using different types of constructors:  
- Default Constructor  
- Parameterized Constructor  
- Copy Constructor  

---

## 📚 Theory

### 🔹 Constructor
- A **constructor** is a special member function of a class that is automatically invoked when an object is created.  
- It has the **same name as the class** and **does not have a return type** (not even `void`).  
- Purpose: To **initialize objects**.  

### Types of Constructors
1. **Default Constructor** – takes no arguments and initializes members with default values.  
2. **Parameterized Constructor** – takes arguments to initialize objects with custom values.  
3. **Copy Constructor** – creates a new object as a **copy of an existing object**.  

### 🔹 Destructor
- A **destructor** is a special member function used to **destroy objects** when they go out of scope.  
- It has the same name as the class but is preceded by a **tilde (~)**.  
- Purpose: To free resources (like memory, files, etc.).  
- Unlike constructors, a destructor **cannot be overloaded**.  

---

## 📝 Algorithm

1. Start the program  
2. Define a class with data members (e.g., `a`, `b`)  
3. Define the following inside the class:  
   - A **default constructor** to initialize values with fixed defaults  
   - A **parameterized constructor** to initialize values with user-defined arguments  
   - A **copy constructor** to copy data from another object  
   - A **destructor** to display a message when an object is destroyed  
4. In `main()`, create objects using different constructors  
5. Display object values using a member function  
6. Observe destructor execution when program ends  
7. End the program  

---

## 💻 Programs Covered
✔️ Default Constructor  
✔️ Parameterized Constructor  
✔️ Copy Constructor  
✔️ Destructor  

---

## 🚀 Learning Outcomes
✅ Understood the purpose and working of **constructors** in C++  
✅ Learned how to implement **default, parameterized, and copy constructors**  
✅ Observed how destructors are automatically called when objects are destroyed  
✅ Gained deeper understanding of **object lifecycle** in C++  

---
