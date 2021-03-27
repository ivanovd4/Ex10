// Copyright 2021 ivanovd4
#include "postfix.h"
#include "MyStack.h"

int main() {
    std::string s1("1 + 4 - 8 / (9 - 4 * 2)");
    std::string s2 = infix2prefix(s1);
    std::cout << s2 << std::endl;  // 1 4 + 8 9 4 2 * - / -

    std::string w1("1 + 2 - (3 / 4) + (5 * 6) / (7 - 8)");
    std::string w2 = infix2prefix(w1);
    std::cout << w2;  // 1 2 + 3 4 / - 5 6 * 7 8 - / +
    return 0;
}
