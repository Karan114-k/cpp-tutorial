#include <iostream>
using namespace std;
// 📘 fileHandling.cpp
// This program demonstrates File Handling in C++.
// File handling allows programs to create, read, write, and update files.
// C++ provides classes like `ifstream`, `ofstream`, and `fstream`
// from the <fstream> library to work with files.
// Benefits:
//   - Enables permanent storage of data beyond program execution.
//   - Allows reading/writing structured or unstructured data.
//   - Useful for applications like logging, saving user data, or
//     processing large datasets.
// Example: Writing text to a file using `ofstream`,
//          then reading it back using `ifstream`.
// Purpose: To show how to open, close, and manipulate files in C++,
//          making programs more practical and persistent.
int main()
{
    ofstream fout("demo.txt");
    fout << "Hello, World!" << endl;
    fout.close();

    ifstream fin("demo.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
