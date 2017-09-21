/**
使用静态链接的方式将其编译成可执行文件：
$gcc -static SectionMapping.c -o SectionMapping.elf
**/
#include <stdlib.h>

int main()
{
	while(1)
	{
		sleep(1000);
	}
	return 0;
}