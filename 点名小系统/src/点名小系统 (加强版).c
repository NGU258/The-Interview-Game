#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "conio.h"
#include "windows.h"//����Sleep() 
#define change rand()%100
#define C sizeof(class)/sizeof(class[0])//�����鳤�� 
int DJS=3;
struct LYQ_258
{
	char name[10];
	int sign;
}class[]=
{{"���缪",0},{"��ͮ",0},{"̷����",0},{"���",0},
{"�Ƴ���",0},{"��ά��",0},{"�ſ�",0},{"л�Ľ�",0},
{"л����",0},{"������",0},{"����",0},{"����",0},
{"����",0},{"����",0},{"������",0},{"�����",0},
{"��ӱ��",0},{"���",0},{"�ֽ�ӱ",0},{"����",0},
{"��ӯӯ",0},{"����",0},{"����ά",0},{"������",0},
{"���ѿ�",0},{"�޼���",0},{"Ф��",0},{"�򿡽�",0},
{"Фѩ��",0},{"������",0},{"���",0},{"��Ȼ",0},
{"������",0},{"��ٻ",0},{"������",0},{"������",0},
{"������",0},{"�����",0},{"л��ݸ",0},{"�ż���",0},
{"���ַ�",0},{"л����",0},{"������",0},{"������",0},
{"���Ѿ�",0},{"Ф�",0},{"л��ϼ",0},{"���",0},
{"Ӧΰ��",0},{"�����",0},{"����",0},{"�ϼш�",0},
{"������",0},{"����ͮ",0},{"���վ�",0},{"����־",0},
{"��ǿ",0},{"��־��",0},{"���˷�",0},{"����",0}},*p=class;
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
    			if(shu>=0&&shu<C)//���±� 
				{	
					if(test(p))
					{
						
						while(aa)
						{
							system("cls");
							printf("���ϵ�����ȫ������������ͳ����%d",aa);
							aa--;
							Sleep(1000);
						}
						return 0;	
					}
					
					if(class[shu].sign) continue;//Ҫ�����ظ������ֳ��֣���66��67��ע�ͻ�ɾ������ 
					class[shu].sign=1;
					break;
				}
				else shu=change;
			}
			save[k++]=shu;
			ps[i++]=shu;//��¼�±� 
		}
		djs=DJS;
		while(djs)
    	{
    		system("cls");
    		printf("��������˶���˭�أ�%c",14);
    		printf("(%d) \a",djs);
    		djs--;
    		Sleep(1000);
		}
		a:b:c:d:e:f:
		system("cls");
	    printf("��������( %c",2);
	    printf(" )");
	    if(word==1)
	    	printf(":  %s  !",class[save[0]].name);
		else
		{
			printf("\n\n");
			for(j=0;j<k;)
	    		printf("%d:%s\n",j,class[save[j++]].name);
		}
	    printf("\n\n�����ٴε����밴�ո� %c\n\n",16);
	    printf("��ܰС��ʾ��\n1.��������ּ�(��0~5֮��)�����޸ĵ���ʱŶ%c\n",2);
	    printf("2.��������������������ĸ�������˳�Ŷ%c��",2);
    	ch=getch();
    	switch(ch)
	    {
	    	case '0':DJS=0;printf("\n\nע������ʱ���޸�Ϊ%d�롣",DJS);Sleep(1000);goto a;
	    	case '1':DJS=1;printf("\n\nע������ʱ���޸�Ϊ%d�롣",DJS);Sleep(1000);goto b;
	    	case '2':DJS=2;printf("\n\nע������ʱ���޸�Ϊ%d�롣",DJS);Sleep(1000);goto c;
	    	case '3':DJS=3;printf("\n\nע������ʱ���޸�Ϊ%d�롣",DJS);Sleep(1000);goto d;
	    	case '4':DJS=4;printf("\n\nע������ʱ���޸�Ϊ%d�롣",DJS);Sleep(1000);goto e;
	    	case '5':DJS=5;printf("\n\nע������ʱ���޸�Ϊ%d�롣",DJS);Sleep(1000);goto f;
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
	system("title ����Сϵͳ");
    system("color 0a");
    printf("��ӭʹ�õ���Сϵͳ %c\n\n",15);
    printf("�������ڣ�  "); 
    system("date /t");
    printf("��ǰʱ�䣺  ");
    system("time /t");
    
    printf("\n��������ɿ�ʼŶ��%c ",2);
    getch();
    system("color 0d");
    later:
    	
    system("cls");
    printf("�����������Ӧ��������ʵ����Ӧ�Ĺ��ܣ�\n\n");
    printf("���ּ�1����̬��������ϵͳ�������һ���˵����֣�\n\n");
    printf("���ּ�2����̬��������:����3����������˵����֣�\n");
    
    ch=getch();
    if(ch=='1')	Name(1);
    else if(ch=='2')
	{
		l:
		system("cls");
		printf("��������Ҫ��ȡ�����ָ���(��ΧΪ1~%d): ",C);
		scanf("%d",&s);
		if(s<=0||s>C)
		{
			printf("\n\n���������С��1�����%d�ˣ����������룡\n\n",C);
			system("pause");
			goto l;
		} 
		Name(s);
	} 
    else 
	{
		printf("\n�������,��ȷ����������1��2��������Ӧ�ĵ���ģʽ\n");
		Sleep(1500);
		goto later;
	}
}
void word2()
{
	int js=0,kz=0,l=2,u=1;
	system("color 0C");
    system("cls");
    printf("���ձ����е����˶�������\n\n");
    printf("��1�֣�\n");
    while(ps[js]!=C&&js<C)
	{
		kz++;
		if(s!=1)	printf("%d:",u++);
		printf("%s\n",class[ps[js++]].name);
		if(kz%s==0&&ps[js]!=C&&js<C)	
		{
			printf("\n��%d��\n",l++); 
			u=1;
		}
	 } 
    printf("\n�������˽���,��ӭ�´�����%c",2);
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
