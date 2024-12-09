#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "temp_file.h"

int write_file()
{
	int fd=open("./temp.txt",O_CREAT|O_WRONLY,0666);
	write(fd,"202210089194",sizeof(char)*13);
	close(fd);
	return 1;
}

int main()
{
	write_file();
	read_file();
}