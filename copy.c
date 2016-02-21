/*************************************************************************
    > File Name: copy.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月21日 星期日 19时06分49秒
 ************************************************************************/
/* 从标准输入读，冰箱标准输出写。 */
#include "apue.h"

#define BUFFSIZE 4096

int main(void)
{
	int 	n;
	char 	buf[BUFFSIZE];

	while((n = read(STDIN_FILENO,buf,BUFFSIZE)) > 0)	//STDIN——FILENO和STDOUT_FILENO是标准输入和标准输出的文件描述符，在POSIX标准汇总，它们的值是0和1
		if(write(STDOUT_FILENO,buf,n) != n)
			err_sys("write error");

	if(n < 0)
		err_sys("read error");

	exit(0);
}
