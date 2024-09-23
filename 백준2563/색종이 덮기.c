#include <stdio.h>
int papper[100][100];//주어진 도화지는 100 * 100 정사각형
int x_coordinate = 0;//입력받는 x좌표
int y_coordinate = 0;//입력받는 y좌표
int pappers_count = 0;//도화지에 덮을 색종이 갯수
int real_total = 0;//실제 색종이가 도화지 내에서 덮고 있는 부분 크기

void input_pappers_count(void);//색종이 갯수 입력 함수
void input_xy_coordinates(void);//xy 좌표 입력 함수
void fill_area(void);//색종이 공간 채우는 함수
void count_areas(void);//채워지 공간 세는 함수
void output_areas(void);//도화지 내에서 덮고 있는 부분 크기 출력 함수


void input_pappers_count(void)
{scanf_s("%d", &pappers_count);}

void input_xy_coordinates(void)
{scanf_s("%d%d", &x_coordinate, &y_coordinate);
x_coordinate = x_coordinate-1;//좌표값으로 100을 넣었을때 발생하는 오버플로우 방지를 위하여 -1로 0~99로 범위를 제한 
y_coordinate = y_coordinate-1;
}

void fill_area(void)
{int max_x_coordinate = x_coordinate + 9;//+10이 아닌 9를 해야 전체길이가 가로,세로 10인 정사각형이 됨
int max_y_coordinate = y_coordinate + 9;
for (int x = x_coordinate; x <= max_x_coordinate; x++)
{for (int y = y_coordinate; y <= max_y_coordinate; y++)
{papper[x][y] = 1;}//색종이가 덮고 있는 좌표는 모두 1로 변경
}
}

void count_areas(void)
{
for (int x = 0; x < 100; x++){
for(int y=0;y<100;y++)
{if (papper[x][y] == 1) { real_total+=1; }}//100*100 영역에서 1인 부분들을 모두 찾기
}
}

void output_areas(void)
{printf("%d\n", real_total);}


int main(void)
{input_pappers_count();
for(int i=0;i< pappers_count;i++)
{input_xy_coordinates();
fill_area();}
count_areas();
output_areas();
return 0;
}
