#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int items[1001] = {0};
	int max_count = 0;
	
	for (int i = 0; i < N; i++) {
		int item;
		scanf("%d", &item);
		
		items[item]++;
		
		if (items[item] > max_count) {
			max_count = items[item];
		}
	}
	
	printf("%d\n", max_count);
	
	return 0;
}
