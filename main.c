#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

int gj(void);
int qx(void);
int gy(void);

void error(void)
{
    fflush(stdin);//清空缓冲区。
    printf("输入的数据不正确,请重新输入。\n");
    getchar();
    //system("pause");
}

/*
int get_frist(void)
{
    int xx;
    if(scanf("%d",&xx)==1);
    {
        for(;getchar()!=EOF;);
    }
    else
    {
        error();
        get_frist();
    }
    return(xx);
}
*/

int main(void)
{
    system("cls");
    int a;
    printf("1.预定关机\n");
    printf("2.取消预定的关机\n");
    printf("3.关于\n");
    printf("请输入选项：\n");
    if(scanf("%d",&a)!=0)
    {
        switch (a)
        {
            case 1:gj();break;
            case 2:qx();break;
            case 3:gy();break;
            default:error();
                    main();
                    break;
        }
    }
    else
    {
        error();
        main();
    }
return(0);
}

int gj(void)
{
    system("cls");
    //char mins[5];
    int mins;
    //int seconds;
    char gjml[50];
    printf("请输入分钟数（windows将在此分钟数后关机）范围在0至1200分钟:\n");
    /*
    gets(mins);
    int nums,strlong;
    for(strlong=0;mins[strlong];strlong++);
    for(nums=0;mins[nums]>='0'&&mins[nums]<='9';nums++);
    if(nums==strlong)
    */
    if(scanf("%d",&mins))
    {
        if(mins<1200&&mins>0)
        {
            //seconds=mins*60;
            sprintf(gjml,"shutdown -s -t %d",mins*60);//处理相关命令为字符串。
            system(gjml);//使用system调用cmd命令时，其内容需是字符串。
            printf("您的计算机将在%d分钟后关闭\n",mins);
            system("pause");
        }
        else
        {
            error();
            gj();
        }
    }
    else
    {
        error();
        gj();
    }
    return(0);
}

int qx(void)
{
    system("cls");
    char qxml[]="shutdown -a";
    system(qxml);
    printf("预定的关机计划已取消\n");
    system("pause");
    return(0);
}

int gy(void)
{
    system("cls");
    printf("本程序用于windows系统的定时关机\n"
           "版本号：0.1(r0161012)\n"
           "更新日志：\n"
           "2016.5  r0160510 初始版本。\n"
           "2016.7  r0160718 使用c语言重构代码。\n"
           "2016.8  r0160830 增加了数个对输入的条件判别。\n"
           "2016.9  r0160903 精简代码。\n"
           "2016.10 r0161012 将关机时间限定于0到1200分钟以内。\n");
    //system("pause");//使用pause中断程序。
    printf("\n按任意键回到主菜单。");
    getch();//使用getch中断程序。
    main();
    return(0);
}
//wrote by Yehow
