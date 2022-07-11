#include <iostream>

int main() {
	int N = 0,
		V = 0,
		S = 0,
   number = 0,
    max_V = 0,
    flag  = 0;

	std::cin >> N;

	for (int i = 1; i <= N; i++) {

		std::cin >> V >> S;

		if ((1 == S) && (V > max_V))
		{
			flag = 1;
			max_V = V;
			number = i;
		}

	}

	if (flag == 0)
	{

		std::cout << -1 << std::endl;

		return 0;
	}

	std::cout << number << std::endl;

	return 0;
}
