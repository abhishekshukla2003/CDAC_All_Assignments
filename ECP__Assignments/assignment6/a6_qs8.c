#include<stdio.h>
#include <string.h>

void num_to_words(int n) {
	char *words[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int rem, arr[20], i = 0;

	// extract digits
	while(n != 0) {
		arr[i++] = n % 10;
		n /= 10;
	}

	// print in reverse
	for(int j = i-1; j >= 0; j--) {
		printf("%s ", words[arr[j]]);
	}
	printf("\n");
}

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	num_to_words(n);
	return 0;
}
