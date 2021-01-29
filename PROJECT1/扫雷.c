#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#define length 5//雷区长度
#define width 5//雷区宽度
#define num 5//雷数量
void print_boom_map_A(char array_player[width][length]);//输出雷区
char print_boom_map_A_new(char array_player[width][length], char array_boom[width][length], int w, int l);//更新雷区
int main()
{
	if (num > length * width)
	{
		printf("error,雷数过多");
	}
	int i,j;
	char array_boom[width][length];//实际上的雷区
	char array_player[width][length];//玩家看到的雷区
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

	int random_length, random_width;
	int guess_width, guess_length;
	char temp='0';
	int safe=0;
	i=num;
	srand((unsigned)time(NULL));
	do
	{
		random_length = rand() % length;
		random_width = rand() % width;//随机生成雷
		if (array_boom[random_width][random_length] == '9')
		{
			continue;
		}
		array_boom[random_width][random_length] = '9';
		i--;
	} while (i > 0);
	print_boom_map_A(array_boom);
	print_boom_map_A(array_player);
	do
	{
		printf("输入雷区坐标(x,y):");
		scanf("%d,%d",&guess_width,&guess_length);
		//输入坐标
		if (guess_width > width || guess_length > length || guess_length < 0 || guess_width < 0)
		{
			printf("输入错误\n");
			continue;
		}
		if (array_player[guess_width-1][guess_length-1] != 'X')
		{
			printf("输入错误\n");
			continue;
		}
		temp=print_boom_map_A_new(array_player, array_boom, guess_width, guess_length);
		array_player[guess_width-1][guess_length-1] = temp;
		print_boom_map_A(array_player);
		safe++;
	} while (temp != '9'&& safe < length * width - num);
	if (array_boom[guess_width-1][guess_length-1] == '9')
	{
		printf("雷炸.");
	}
	if(safe==length*width-num)
	{
		printf("NB,你过了");
	}
	return 0;
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