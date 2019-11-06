#include <stdio.h>
#include <linux/unistd.h>



int main() {
	printf("Free Mem: %d\n", syscall(314));
	printf("Claimed Mem: %d\n", syscall(313));

	return 0;
}
