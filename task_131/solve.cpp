#include <iostream>

int main() {
    int n = 0,
        v = 0,
        s = 0;

    std::cin >> n;

    int number = 0,
        max_v  = 0;

    bool flag = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> v >> s;

        if (0 == s)
            continue;

        if (v > max_v) {
            flag = 1;
            max_v = v;
            number = i + 1;
        }
    }

    if (!flag)
        std::cout << -1 << std::endl;
    else
        std::cout << number << std::endl;

    return 0;
}
