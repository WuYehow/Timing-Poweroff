#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

int gj(void);
int qx(void);
int gy(void);

void error(void)
{
    fflush(stdin);//��ջ�������
    printf("��������ݲ���ȷ,���������롣\n");
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
    printf("1.Ԥ���ػ�\n");
    printf("2.ȡ��Ԥ���Ĺػ�\n");
    printf("3.����\n");
    printf("������ѡ�\n");
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
    printf("�������������windows���ڴ˷�������ػ�����Χ��0��1200����:\n");
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
            sprintf(gjml,"shutdown -s -t %d",mins*60);//�����������Ϊ�ַ�����
            system(gjml);//ʹ��system����cmd����ʱ�������������ַ�����
            printf("���ļ��������%d���Ӻ�ر�\n",mins);
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
    printf("Ԥ���Ĺػ��ƻ���ȡ��\n");
    system("pause");
    return(0);
}

int gy(void)
{
    system("cls");
    printf("����������windowsϵͳ�Ķ�ʱ�ػ�\n"
           "�汾�ţ�0.1(r0161012)\n"
           "������־��\n"
           "2016.5  r0160510 ��ʼ�汾��\n"
           "2016.7  r0160718 ʹ��c�����ع����롣\n"
           "2016.8  r0160830 ����������������������б�\n"
           "2016.9  r0160903 ������롣\n"
           "2016.10 r0161012 ���ػ�ʱ���޶���0��1200�������ڡ�\n");
    //system("pause");//ʹ��pause�жϳ���
    printf("\n��������ص����˵���");
    getch();//ʹ��getch�жϳ���
    main();
    return(0);
}
//wrote by Yehow
