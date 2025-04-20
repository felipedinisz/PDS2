#include <iostream>
#include "MyTAD.hpp"

int main () {
    MyTAD tad_stack;
    tad_stack.who_am_i();
    std::cout << &tad_stack << std::endl;
    tad_stack.set_x(55);

    MyTAD* tad_heap = new MyTAD();
    std::cout << tad_heap << std::endl;
    tad_heap->who_am_i();
    delete tad_heap;

    MyTAD outra_var_stack;
    outra_var_stack = tad_stack;
    /*
    MyTAD* outra_var_heap;
    outra_var_heap = &tad_stack;
    */
    return 0;
}
