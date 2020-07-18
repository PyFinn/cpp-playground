#include <iostream>
#include <string>

//For reading filge
#include <fstream>
using std::string;
using std::ifstream;
using std::cout;

/*
Four steps to reading a file:
1.#include <fstream>
2.Create a std::fstream object using the path to your file.
3.Evaluate the std::ifstream object as a bool to ensure that the stream
    creation did not fail.
4.Use a while loop with getline to write file lines to a string.
*/
void read_file() {
    ifstream file1("file_to_read/1.board");
    if (file1)
    {
        cout << "File here" << "\n";
        string line;
        while (getline(file1, line))
        {
            cout << line << "\n";
        }
        
    }
    
}

int main() {
    read_file();
}