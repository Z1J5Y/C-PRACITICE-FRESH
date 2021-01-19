#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#define length 5//改变此值以改变雷区列数
#define width 5//改变此值以改变雷区行数
#define num 5//改变此值以改变雷区雷数 且炸弹数量小于雷区格子总数
void print_boom_map_A(char array_player[width][length]);//输出雷区模型
char print_boom_map_A_new(char array_player[width][length], char array_boom[width][length], int w, int l);//更新地图 显示选中坐标周围炸弹数
main()
{
	if (num > length * width)
	{
		printf("炸弹太多赖");
	}
	int i,j;
	char array_boom[width][length];//实际的格子
	char array_player[width][length];//展现的格子
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
	//随机产生炸弹
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
	} while (i > 0);//'9'代表炸弹 '0'代表正常地带
	//随机产生炸弹
	print_boom_map_A(array_boom);
	print_boom_map_A(array_player);
	do
	{
		printf("输入想要踩的行与列(格式:行,列):");
		scanf_s("%d,%d",&guess_width,&guess_length);
		//错误情况
		if (guess_width > width || guess_length > length || guess_length < 0 || guess_width < 0)
		{
			printf("小伙子你不对劲嘛,输入出错!\n");
			continue;
		}
		if (array_player[guess_width-1][guess_length-1] != 'X')
		{
			printf("小伙子你不对劲嘛,这个坐标已经输入过一次了!\n");
			continue;
		}
		//错误情况
		temp=print_boom_map_A_new(array_player, array_boom, guess_width, guess_length);
		array_player[guess_width-1][guess_length-1] = temp;
		print_boom_map_A(array_player);
		safe++;
	} while (temp != '9'&& safe < length * width - num);
	if (array_boom[guess_width-1][guess_length-1] == '9')
	{
		printf("炸弹爆炸,你死了.");
	}
	if(safe==length*width-num)
	{
		printf("NB,雷全被你扫掉了");
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
	//踩到炸弹了
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