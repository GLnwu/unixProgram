/*************************************************************************
    > File Name: copy2.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月21日 星期日 19时23分46秒
 ************************************************************************/
#include "apue.h"

int main(void)
{
	int 	c;

	while((c = getc(stdin)) != EOF)
		if(putc(c,stdout) == EOF)
			err_sys("output error");

	if(ferror(stdin))
		err_sys("input error");

	exit(0);
}
