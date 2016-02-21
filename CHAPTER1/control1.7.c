/*************************************************************************
    > File Name: control1.7.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年02月21日 星期日 20时38分36秒
 ************************************************************************/
#include "apue.h"
#include<sys/wait.h>

int main(void)
{
	char 	buf[MAXLINE];	/* form apue.h */
	pid_t	pid;
	int	status;

	printf("%%");	/* print prompt (printf requires %% to print %) */
	while(fgets(buf,MAXLINE,stdin) != NULL)
		if(buf[strlen(buf) -1] == '\n')
			buf[strlen(buf) -1] = 0;	/* replace newline with null */
	if((pid = fork()) < 0)
		err_sys("fork error");
	else if(pid == 0){	/* child */
		execlp(bf,bf,(char *)0);
		err_ret("couldn't execute:%s",buf);
		exit(127);
	}

	/* parent */
	if((pid = waitpid(pid,&status,0)) < 0)
		err_sys("waitpid error");
	printf("%% ");
	exit(0);
}

