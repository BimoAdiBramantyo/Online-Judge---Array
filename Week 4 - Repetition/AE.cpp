#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	double result[N];
	for (int i = 0; i < N; i++) {
		int R, H;
		scanf("%d %d", &R, &H);
		
		result[i] = 2 * 3.14 * R * (R + H);
	}
	
	for (int i = 0; i < N; i++) {
		printf("Case #%d: %.2f\n", i + 1, result[i]);
	}
	
	return 0;
}
