#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#define length 5//�ı��ֵ�Ըı���������
#define width 5//�ı��ֵ�Ըı���������
#define num 5//�ı��ֵ�Ըı��������� ��ը������С��������������
void print_boom_map_A(char array_player[width][length]);//�������ģ��
char print_boom_map_A_new(char array_player[width][length], char array_boom[width][length], int w, int l);//���µ�ͼ ��ʾѡ��������Χը����
main()
{
	if (num > length * width)
	{
		printf("ը��̫����");
	}
	int i,j;
	char array_boom[width][length];//ʵ�ʵĸ���
	char array_player[width][length];//չ�ֵĸ���
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_boom[j][i] = '0';
		}
	}
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_player[j][i] = 'X';
		}
	}

	int random_length, random_width,i=num;
	int guess_width, guess_length;
	char temp='0';
	int safe=0;
	//�������ը��
	do
	{
		srand((unsigned)time(NULL));
		random_length = rand() % length;
		random_width = rand() % width;
		if (array_boom[random_width][random_length] == '9')
		{
			continue;
		}
		array_boom[random_width][random_length] = '9';
		i--;
	} while (i > 0);//'9'����ը�� '0'���������ش�
	//�������ը��
	print_boom_map_A(array_boom);
	print_boom_map_A(array_player);
	do
	{
		printf("������Ҫ�ȵ�������(��ʽ:��,��):");
		scanf_s("%d,%d",&guess_width,&guess_length);
		//�������
		if (guess_width > width || guess_length > length || guess_length < 0 || guess_width < 0)
		{
			printf("С�����㲻�Ծ���,�������!\n");
			continue;
		}
		if (array_player[guess_width-1][guess_length-1] != 'X')
		{
			printf("С�����㲻�Ծ���,��������Ѿ������һ����!\n");
			continue;
		}
		//�������
		temp=print_boom_map_A_new(array_player, array_boom, guess_width, guess_length);
		array_player[guess_width-1][guess_length-1] = temp;
		print_boom_map_A(array_player);
		safe++;
	} while (temp != '9'&& safe < length * width - num);
	if (array_boom[guess_width-1][guess_length-1] == '9')
	{
		printf("ը����ը,������.");
	}
	if(safe==length*width-num)
	{
		printf("NB,��ȫ����ɨ����");
	}
}

void print_boom_map_A(char array_player[width][length])
{
	for (int w = 0; w < width; w++)
	{
		for (int l = 0; l < length; l++)
		{
			printf("%c ", array_player[w][l]);
		}
		printf("\n");
	}
}
char print_boom_map_A_new(char array_player[width][length],char array_boom[width][length],int w, int l)
{
	char around='0';
	if (array_boom[w - 1][l - 1] == '9')
	{
		return '9';
	}
	//�ȵ�ը����
	for (int i = w-2; i <= w; i++)
	{
		for (int j = l-2; j <= l; j++)
		{
			if (i<0 || j<0 || i>=width || j>=length)
			{
				continue;
			}
			if (array_boom[i][j] == '9')
			{
				around +=1;
			}
		}
	}
	return around;
}