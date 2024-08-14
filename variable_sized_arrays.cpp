#include <iostream>
#include <vector>


int main()
{
	int n, q;
	std::cin >> n >> q;
	std::vector<std::vector<int>>arr(n);

	for (int i = 0; i < n; i++) {

		int size;
		std::cin >> size;
		arr[i].resize(size);

		for (int j = 0; j < size; j++) {
			std::cin >> arr[i][j];
		};
	};

	for (int k = 0; k < q; k++) {
		int outer, inner;
		std::cin >> outer >> inner;
		std::cout << arr[outer][inner] << std::endl;
	}
	return 0;
}
