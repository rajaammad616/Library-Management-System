This is a simple **Library Management System** implemented in C++ using **Object-Oriented Programming (OOP)** concepts. The project demonstrates the use of:

- **Abstract Classes**
- **Inheritance**
- **Constructors**
- **Virtual Functions and Destructors**
- **Polymorphism through base class pointers**

---

## 🚀 Features

- Two types of library members:
  - studentMember: gets a discount on the base fee.
  - facultyMember: pays an additional faculty fee.
- Calculates and displays individual membership fees.
- Demonstrates proper use of **virtual destructors** for safe memory cleanup.


**Classes Overview**
- **libraryMember (Abstract Class)**
- Attributes: memberId, memberName, memberFee
- Pure virtual functions:
- calculateMemberFee()
- displayDetails()
- Virtual destructor to ensure proper cleanup

**studentMember (Derived Class)**
- Additional attributes: baseFee, discount
- Calculates fee after applying student discount

**facultyMember (Derived Class)**
- Additional attributes: baseFee, facultyFee
- Calculates fee by adding additional faculty charges
  
