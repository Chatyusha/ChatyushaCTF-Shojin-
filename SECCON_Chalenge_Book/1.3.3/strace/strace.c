#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main () {
	pid_t pid;
	char buf[16];
	int user_input;

	pid = fork(); // プロセス生成
	if(pid == 0)
	{
		puts("Segmentation Faault");
		exit(0); // 正常終了
	}else
	{
		puts("Enter the pid of the child process.");
		fgets(buf,sizeof(buf),stdin); 
		user_input = atoi(buf);
		if (pid == user_input)
		{
			puts("Congratulations!Your FLAG is ctf4b{7h15_15_s1mp13_ltrace}");
		}
	}
	return 0;
}
