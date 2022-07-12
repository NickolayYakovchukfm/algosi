#include <iostream>

int main() {
    int n = 0,
        v = 0,
        s = 0;

    std::cin >> n;

    int number = 0,
         max_v = 0;

    bool flag = 0;

    for (int i = 1; i <= n; i++){
        std::cin >> v >> s;

        if (0 == s)
        {
            continue;
        }

        if ((1 == s) && (v > max_v))
        {
            flag = 1;
            max_v = v;
            number = i;
        }
    }

    if (!flag)
    {
        std::cout << -1 << std::endl;

        return 0;
    }

    std::cout << number << std::endl;

    return 0;
}
