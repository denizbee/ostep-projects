#include <stdio.h>
#define LINE_SIZE 100

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++) {
		FILE *file = fopen(argv[i], "r");
		if (file == NULL) {
			printf("wcat: cannot open file\n");
			return 1;
		}
		char buf[LINE_SIZE];
		while (fgets(buf, sizeof(buf), file)) {
			printf("%s", buf);
		}
	}

	return 0;
}
