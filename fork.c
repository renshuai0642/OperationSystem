# include <stdio.h>
// stdio 标准输入输出

# include <stdlib.h>
// 提供有用的函数
//      程序流程控制 exit abort atexit
//      换算
//      内存管理 malloc free calloc realloc
//      生成随机数
//      排序 搜索
//      绝对值
//      获取环境变量

# include <unistd.h>
// 进程控制、I/O控制、文件操作、环境

int main() {
    printf("Hello World!\n");

    int pid = fork();

    printf("Hi World!\n");

    if(pid < 0) {
        printf("Fork Failed\n");
        exit(1);
    } else if(pid == 0) {
        // child process
        printf("I am in the child process with PID %d\n", getpid());
    } else {
        // parent process
        printf("I am in the parent process with PID %d, my child's PID is %d\n", getpid(), pid);
    }

    return 0;
}

// 通过fork，精确复制调用进程，创建新进程
// 新进程是子进程
// 执行fork后，父进程和子进程都继续执行
// 执行顺序无法确定