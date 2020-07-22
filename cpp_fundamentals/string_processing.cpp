/* Streaming ints from a string with istringstream
In C++ strings can be streamed into temporary variables,
similarly to how files can be streamed into strings. 
Streaming a string allows us to work with each character individually.
One way to stream a string is to use an input string stream object
istringstream from the <sstream> header.
Once an istringstream object has been created, parts of the string
can be streamed and stored using the "extraction operator": >>.
The extraction operator will read until whitespace is reached or until the stream fails.
Execute the following code to see how this works:
*/


/////////////////////////
// Read int from file string
// 1. #include<sstream>
// 2. using std::istringstream
// can read string and stop only hit space or error(end)
/////////////////////////

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::string;
using std::istringstream;

void istringstream_test() {
    //Print function name
    cout << __func__ << "\n";
    //Define a string
    string s1 = "1 2 3";
    //Use istringstream
    istringstream stream1(s1);
    int n;
    stream1 >> n;
    cout << n << "\n";
}

void use_istringstream_as_boolean_to_read_all_characters() {
    cout << __func__ << "\n";
    string s2("1 2 3");

    istringstream stream2(s2);
    int n;
    while (stream2)
    {
        stream2 >> n;
        if (stream2)
        {
            cout << n << "\n";
        } else
        {
            cout << "Stream was not successful!" << "\n";
        }
        
        
    }
    
}

void common_usage() {
    cout << __func__ << "\n";

    istringstream stream3("1 2 3");
    int n;

    while (stream3 >> n)
    {
        cout << n << "\n";
    }
    cout << "Ended" << "\n";
}

void stream_mixed_types() {
    cout << __func__ << "\n";
    istringstream stream4("1,2,3,4,6q7p8o9a");

    int n;
    char c;

    while (stream4 >> n >> c)
    {
        cout << n << "\n" << c << "\n";
    }
    cout << "Ended" << "\n";
    
}

int main() {
    istringstream_test();
    use_istringstream_as_boolean_to_read_all_characters();
    common_usage();
    stream_mixed_types();
}