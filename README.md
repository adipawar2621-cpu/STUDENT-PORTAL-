# STUDENT-PORTAL-

# Student Portal Management System

## 📌 Project Overview

The Student Portal Management System is a console-based application developed using C++. It helps manage student records efficiently by allowing users to add, search, display, save, and load student information.

The project uses Object-Oriented Programming (OOP), STL vectors, file handling, and exception handling.

## 🚀 Features

- **Add Student:** Add a new student with ID, name, course, and marks.
- **Search Student:** Search for a student using their unique ID.
- **Display All Students:** View details of all registered students.
- **Save Records:** Save student information into a text file (`students.txt`).
- **Load Records:** Retrieve previously saved student records.
- **Grade Calculation:** Automatically calculate grades based on marks.
- **Input Validation:** Prevent duplicate or invalid student IDs and invalid marks.
- **Exception Handling:** Handle errors using C++ exception handling.

## 🛠️ Technologies Used

- Programming Language: C++
- OOP Concepts: Classes, Objects, Encapsulation
- STL: Vector and Algorithm
- File Handling: `ifstream` and `ofstream`
- Exception Handling: `try`, `catch`, and `throw`
- Header Files:
  - `iostream`
  - `vector`
  - `fstream`
  - `algorithm`
  - `stdexcept`

## 📊 Grading System

| Marks | Grade |
|-------|-------|
| 90–100 | A+ |
| 75–89 | A |
| 60–74 | B |
| 40–59 | C |
| 0–39 | Fail |

## 📂 Project Structure

```text
Student-Portal/
│
├── main.cpp
├── students.txt
└── README.md
```

**Note:** The `students.txt` file is created when records are saved.

## ⚙️ How to Run the Project

### Step 1: Clone the Repository

```bash
https://github.com/adipawar2621-cpu/STUDENT-PORTAL-.git
```

### Step 2: Open the Project Folder

```bash
cd Student-Portal
```

### Step 3: Compile the Program

Using GCC compiler:

```bash
g++ main.cpp -o student_portal
```

### Step 4: Run the Program

For Windows:

```bash
student_portal.exe
```

For Linux/macOS:

```bash
./student_portal
```

## 🖥️ Application Menu

```text
===== STUDENT PORTAL =====
1. Add Student
2. Search Student
3. Display All Students
4. Save Records
5. Load Records
6. Exit

Enter Choice:
```

## 💾 File Handling

The application uses a text file named `students.txt` to store student records permanently.

Each student record contains:

- Student ID
- Student Name
- Course Name
- Marks

The records can be saved and loaded whenever required.

## 🧠 Concepts Implemented

1. **Classes and Objects:** Used to represent students and manage the portal.
2. **Encapsulation:** Student data and portal operations are organized into classes.
3. **Constructors:** Initialize student details.
4. **Vectors:** Store multiple student records dynamically.
5. **Lambda Functions:** Used with `find_if()` to search student IDs.
6. **File Handling:** Read and write student records.
7. **Exception Handling:** Handle invalid input and file-related errors.
8. **Conditional Statements:** Calculate grades based on student marks.

## 🔮 Future Enhancements

- Update student information.
- Delete student records.
- Sort students by marks or ID.
- Generate student performance reports.
- Add a graphical user interface (GUI).
- Improve input validation.
- Prevent duplicate IDs while loading records.

## 👨‍💻 Author

**ADITYA PAWAR**

## 📄 License

This project is created for educational purposes and can be used for learning and academic projects.
