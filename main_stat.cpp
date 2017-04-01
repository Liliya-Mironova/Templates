#include "statistic.hpp"

#define N 8 // number of objects
#define K 3

using namespace std;
using namespace Statistic;

int main() {
	Box arr[N] = {{1, 2}, {2, 5}, {1, 3}, {1, 0}, {1, 1}, {0, 4}, {2, 3}, {2, 0}};
	Box* p = arr;
	
	printf("before sort:\n");
	for (int i = 0; i < N; i++)
		printf("%d, %d\n", p[i].a, p[i].b);
	printf("\n");

	Box element = statistic(p, N, K);

	printf("after sort:\n");
	for (int i = 0; i < N; i++)
		printf("%d, %d\n", p[i].a, p[i].b);

	printf("\nBox[%d] = %d, %d\n", K, element.a, element.b);

	return 0;
}