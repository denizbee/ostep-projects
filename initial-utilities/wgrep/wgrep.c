#include <stdio.h>
#define LINE_LEN 100

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++) {
		FILE *fp = fopen(argv[i], "r");
		if (fp == NULL) {
			printf("wgrep: cannot open file\n");
			return 1;
		}
		char buf[LINE_LEN];
		while (fgets(buf, sizeof(buf), fp)) {
			printf("%s", buf);
		}
	}
	return 0;
}
