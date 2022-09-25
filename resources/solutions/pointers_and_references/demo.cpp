#include <iostream>
#include <string>

#define COLS 9
int main() {
    int a = 5, b = 5, c = a;
    int &a_ref = a, &b_ref = b, &c_ref = c;
    int *a_ptr = &a, *b_ptr = &b, *c_ptr = &c;
    int a_ptr_deref = *a_ptr, b_ptr_deref = *b_ptr, c_ptr_deref = *c_ptr;

    std::cout << "\t\ta\t\tb\t\tc\t\ta_ref\t\tb_ref\t\tc_ref\t\ta_ptr\t\tb_"
                 "ptr\t\tc_ptr\ta_ptr_deref\tb_ptr_deref\tc_ptr_deref";
    std::cout << "\n";

    std::cout << "Value"
              << "\t\t";
    std::cout << a << "\t\t" << b << "\t\t" << c << "\t\t" << a_ref << "\t\t"
              << b_ref << "\t\t" << c_ref << "\t" << a_ptr << "\t" << b_ptr
              << "\t" << c_ptr << "\t\t" << a_ptr_deref << "\t\t" << b_ptr_deref
              << "\t\t" << c_ptr_deref;
    std::cout << "\n";

    std::cout << "Address"
              << "\t";
    std::cout << &a << "\t" << &b << "\t" << &c << "\t" << &a_ref << "\t"
              << &b_ref << "\t" << &c_ref << "\t" << &a_ptr << "\t" << &b_ptr
              << "\t" << &c_ptr << "\t" << &a_ptr_deref << "\t" << &b_ptr_deref
              << "\t" << &c_ptr_deref;
    std::cout << "\n";
    return 0;
}
