#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "conio.h"
#include "windows.h"//导入Sleep() 
#define change rand()%100
#define C sizeof(class)/sizeof(class[0])//测数组长度 
int DJS=3;
struct LYQ_258
{
	char name[10];
	int sign;
}class[]=
{{"方淑吉",0},{"邓彤",0},{"谭杨洋",0},{"李贵",0},
{"黄晨阳",0},{"曾维国",0},{"张可",0},{"谢文杰",0},
{"谢晴瑶",0},{"罗永庆",0},{"曾利",0},{"杨政",0},
{"李培",0},{"刘健",0},{"曾飞扬",0},{"蒋润杰",0},
{"李颖浩",0},{"杨浩",0},{"林江颖",0},{"黄莉",0},
{"杨盈盈",0},{"梁治",0},{"尹大维",0},{"曾星宇",0},
{"刘佳俊",0},{"罗佳姨",0},{"肖湘",0},{"向俊杰",0},
{"肖雪艳",0},{"梁湘琦",0},{"李聪",0},{"周然",0},
{"尹剑华",0},{"周倩",0},{"尹仁乐",0},{"向鹏飞",0},
{"刘佳容",0},{"刘雨虹",0},{"谢正莞",0},{"张甲祯",0},
{"曾林峰",0},{"谢培麒",0},{"王明娟",0},{"唐攀林",0},
{"李昭君",0},{"肖宇芳",0},{"谢坤霞",0},{"杨大川",0},
{"应伟宏",0},{"邹向彬",0},{"刘青",0},{"严佳垚",0},
{"阳慧清",0},{"刘丹彤",0},{"杨琳娟",0},{"曾庆志",0},
{"杨强",0},{"卿志凌",0},{"林仕芳",0},{"王悦",0}},*p=class;
int ps[C],i=0;
int test(struct LYQ_258 *p)
{
	struct LYQ_258 *n;
	for(n=p;n<p+C;n++)
		if(n->sign==0) break;
	if(n==p+C) return 1;
	else return 0;
}
int Name(int word)
{
	int shu,djs=DJS,j,save[C],k=0,aa=3;
	char ch;
	while(1)
    {
    	k=0;
    	for(j=0;j<word;j++)
    	{
    		
    		while(1)
    		{
    			shu=change;
    			if(shu>=0&&shu<C)//找下标 
				{	
					if(test(p))
					{
						
						while(aa)
						{
							system("cls");
							printf("班上的人已全部点名，正在统计中%d",aa);
							aa--;
							Sleep(1000);
						}
						return 0;	
					}
					
					if(class[shu].sign) continue;//要想有重复的名字出现，把66与67行注释或删除即可 
					class[shu].sign=1;
					break;
				}
				else shu=change;
			}
			save[k++]=shu;
			ps[i++]=shu;//记录下标 
		}
		djs=DJS;
		while(djs)
    	{
    		system("cls");
    		printf("今天的幸运儿是谁呢？%c",14);
    		printf("(%d) \a",djs);
    		djs--;
    		Sleep(1000);
		}
		a:b:c:d:e:f:
		system("cls");
	    printf("本场主角( %c",2);
	    printf(" )");
	    if(word==1)
	    	printf(":  %s  !",class[save[0]].name);
		else
		{
			printf("\n\n");
			for(j=0;j<k;)
	    		printf("%d:%s\n",j,class[save[j++]].name);
		}
	    printf("\n\n如需再次点名请按空格 %c\n\n",16);
	    printf("温馨小提示：\n1.如果按数字键(在0~5之间)可以修改倒计时哦%c\n",2);
	    printf("2.如果不想点名，则按任意字母键即可退出哦%c。",2);
    	ch=getch();
    	switch(ch)
	    {
	    	case '0':DJS=0;printf("\n\n注：倒计时已修改为%d秒。",DJS);Sleep(1000);goto a;
	    	case '1':DJS=1;printf("\n\n注：倒计时已修改为%d秒。",DJS);Sleep(1000);goto b;
	    	case '2':DJS=2;printf("\n\n注：倒计时已修改为%d秒。",DJS);Sleep(1000);goto c;
	    	case '3':DJS=3;printf("\n\n注：倒计时已修改为%d秒。",DJS);Sleep(1000);goto d;
	    	case '4':DJS=4;printf("\n\n注：倒计时已修改为%d秒。",DJS);Sleep(1000);goto e;
	    	case '5':DJS=5;printf("\n\n注：倒计时已修改为%d秒。",DJS);Sleep(1000);goto f;
	    	case ' ':continue;
	    	default :return 1;
		}
	}
}

int s=1;
void word1()
{
	int a;
	char ch;
	for(a=0;a<C;a++)
		ps[a]=C;
	system("color 04");
	system("title 点名小系统");
    system("color 0a");
    printf("欢迎使用点名小系统 %c\n\n",15);
    printf("今日日期：  "); 
    system("date /t");
    printf("当前时间：  ");
    system("time /t");
    
    printf("\n按任意键可开始哦！%c ",2);
    getch();
    system("color 0d");
    later:
    	
    system("cls");
    printf("请输入下面对应的数字来实现相应的功能：\n\n");
    printf("数字键1：静态点名（本系统会随机点一个人的名字）\n\n");
    printf("数字键2：动态点名（例:输入3则输出三个人的名字）\n");
    
    ch=getch();
    if(ch=='1')	Name(1);
    else if(ch=='2')
	{
		l:
		system("cls");
		printf("请输入你要抽取的名字个数(范围为1~%d): ",C);
		scanf("%d",&s);
		if(s<=0||s>C)
		{
			printf("\n\n你输入的数小于1或大于%d了，请重新输入！\n\n",C);
			system("pause");
			goto l;
		} 
		Name(s);
	} 
    else 
	{
		printf("\n输入错误,请确保你输入了1或2来进入相应的点名模式\n");
		Sleep(1500);
		goto later;
	}
}
void word2()
{
	int js=0,kz=0,l=2,u=1;
	system("color 0C");
    system("cls");
    printf("今日被抽中的幸运儿名单：\n\n");
    printf("第1轮：\n");
    while(ps[js]!=C&&js<C)
	{
		kz++;
		if(s!=1)	printf("%d:",u++);
		printf("%s\n",class[ps[js++]].name);
		if(kz%s==0&&ps[js]!=C&&js<C)	
		{
			printf("\n第%d轮\n",l++); 
			u=1;
		}
	 } 
    printf("\n点名到此结束,欢迎下次再来%c",2);
    printf("\n\n");
    system("pause");
}
int main()
{
    srand(time(NULL));
    word1();
    word2();
    return 0;
}
