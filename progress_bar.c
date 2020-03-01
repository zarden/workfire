#include<stdio.h>
#include<unistd.h>

int main()
{
    char tmp[11]={0};
    //向tmp中添加-，每次打印tmp实现外部打印的进度条
    for(int i=0;i<=10;++i)
    {
        tmp[i]='-';
        printf("\r%s",tmp);
        fflush(stdout);//刷新标准输出缓冲区
        usleep(1000000);
    }
    return 0;
}
