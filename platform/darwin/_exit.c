#include <unistd.h>
#include "syscall.h"

void _exit(int status)
{
	syscall_1(SYS_exit, status);
	while (1) {};
}
