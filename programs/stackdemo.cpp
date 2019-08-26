#include <iostream>
#include "stack.h"

int main(void) {
    Stack<char> st;

    for(unsigned int i = 65; i <= 75; ++i) {
        if(st.push(static_cast<char>(i)) == -1) {
            std::cout << "Stack overflow at i = " << i << ".\n";
            break;
        }
    }
    std::cout << std::endl;
    st.print(1);
    while(true) {
        if(st.pop() == -1) {
            std::cout << "Stack underflow.\n";
            break;
        }
    }
    std::cout << "Stack after popping:\n";
    st.print(1);
    return 0;
}