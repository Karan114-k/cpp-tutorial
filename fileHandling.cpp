#include <iostream>
using namespace std;
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
