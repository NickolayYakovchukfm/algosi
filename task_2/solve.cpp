#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int X_1 = 0,
        Y_1 = 0,
        X_2 = 0,
        Y_2 = 0,
        X = 0,
        Y = 0;

    std::cin >> X_1 >> Y_1 >> X_2 >> Y_2;

    X = X_2 - X_1;
    Y = Y_2 - Y_1;

    double ans = 0;
    ans = std::sqrt(std::pow(X, 2) + std::pow(Y, 2));

    std::cout << std::setprecision(5) << std::fixed;
    std::cout << ans << std::endl;
    return 0;
}