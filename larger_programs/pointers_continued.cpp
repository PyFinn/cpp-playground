#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void pointer_to_object() {
    vector<int> v1 {1,2,3};

    vector<int>* pointer_to_vector = &v1;

    //Dereference
    cout << (*pointer_to_vector)[0] << "\n";
}

void add_one(int* i) {
    (*i)++;

    /*
        When using pointers with functions, some care should be taken.
        If a pointer is passed to a function and then assigned to a variable in the function
        that goes out of scope after the function finishes executing, then the pointer
        will have undefined behavior at that point - the memory it is pointing to might be overwritten by other parts of the program.
    */
}

void Passing_Pointers_to_Function(){
    cout<< __func__ <<"\n";

    int i = 1;
    cout << "The value of i is: " << i << "\n";

    // Declare a pointer to i:
    int* pi = &i;
    add_one(pi);
    cout << "The value of i is now: " << i << "\n";
}

int* add_one(int& j) {
    j++;

    return &j;
}

void Returning_Pointer_From_Function() {
    cout<< __func__ <<"\n";

    int i = 1;
    cout << "The value of i is: " << i << "\n";

    // Declare a pointer and initialize to the value
    // returned by AddOne:

    int* my_pointer = add_one(i);
    cout << "The value of i is now: " << i << "\n";
    cout << "The value of the int pointed to by my_pointer is: " << *my_pointer << "\n";
    //check addr
    cout << "The address of i is: " << &i << "\n";
    cout << "The value of my_pointer is: " << my_pointer << "\n";
    // my_pointer has its own addr
    cout << "The addr of my_pointer is: " << &my_pointer << "\n";
}

int main() {
    pointer_to_object();
    int m = 0;
    add_one(&m);
    cout << m << "\n";
    Returning_Pointer_From_Function();
}