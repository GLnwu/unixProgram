/*************************************************************************
    > File Name: processID.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月21日 星期日 20时17分12秒
 ************************************************************************/
#include "apue.h"

int main(void)
{
	printf("hello world from process ID %ld\n",(long)getpid());
	exit(0);
}
