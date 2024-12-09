#include "temp_file.h"
#include <fcntl.h>
#include <stdio.h>
void read_file()
{
	int fd=open("./temp.txt",O_RDONLY);
	char a[100];
	read(fd,a,sizeof(a));
	printf("%s\n",a);
}