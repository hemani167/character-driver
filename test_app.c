#include<stdio.h>
#include<fcntl.h>
#include<assert.h>
#include<string.h>

int main(){
	char buf[100] = "hemani bharadwaj";
	char rbuf[7];
	int fd = open("/dev/mydev",O_RDWR);
	write(fd,buf,strlen(buf));
	printf("writing into device \n");
	read(fd,rbuf,6);
	printf("%s",rbuf); 
}
