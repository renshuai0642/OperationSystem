# OperationSystem

# fork
通过 `fork` 创建子进程。  
相同:  
子进程是父进程的<font color="red">精确副本</font>。  
区别:  
<font color="red">子进程从 `fork()` 这一行开始执行</font>，不是从 `main` 开始执行。  
所以:  
执行./fork文件 `Hello World!` 执行一次， `Hi World!`，执行两次。  
如何判断当前处于子进程还是父进程？  
* 如果 `pid` 为负数，说明创建子进程失败。  
* 如果 `pid` 为0，说明，当前处于子进程，通过 `getpid()` 获取当前进程（子进程）的pid  
* 如果 `pid` 为正数，说明当前处于父进程，通过 `getpid()` 获取当前进程（父进程）的pid，之前获取并存储的 `pid` 是子进程的 `pid`  