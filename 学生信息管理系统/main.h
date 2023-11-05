// main.h
#pragma once
#include <iostream>
#include <string>
#include<Windows.h>
#include<conio.h>
using namespace std;

#define STU_NUM 50
#define COURSE_NUM 10
#define NAME_LEN 10
#define STU_NUM 50//教学班上人数上限
#define COURSE_NUM 10//一学期课程门数上限
#define NAME_LEN 10//学生姓名长度上限
#define POS_X1 35//第一列
#define POS_X2 40
#define POS_X3 50//标题
#define POS_X4 60//第二列
#define POS_Y 3

struct STU {
    long num;
    char name[50];
    float score[10];  
    float sum;  
    float aver;  
};

typedef struct Node {
    struct STU student;
    struct Node* next;
}Node;

Node* head = NULL;

int Menu();

// 设置控制台光标位置
void SetPosition(int x, int y);

// 输入多个学生记录
void InputRecord(STU students[], int* totalStudents, int* courseCount);

// 追加学生记录
void AppendRecord(STU students[], int* totalStudents, int courseCount);

// 删除指定学生记录
void DeleteRecord(STU students[], int* totalStudents, int courseCount);

// 通过学号搜索学生记录
void SearchByNum(STU students[], int totalStudents, int courseCount);

// 通过姓名搜索学生记录
void SearchByName(STU students[], int totalStudents, int courseCount);

// 修改指定学生记录
void ModifyRecord(STU students[], int totalStudents, int courseCount);

// 计算单个学生的成绩（总分和平均分等）
void CalculateScoreOfStudent(STU students[], int totalStudents, int courseCount);

// 计算每门课程的成绩（如平均分）
void CalculateScoreOfCourse(STU students[], int totalStudents, int courseCount);

// 按学号排序学生记录
void SortByNum(STU students[], int totalStudents, int courseCount);

// 按姓名排序学生记录
void SortByName(STU students[], int totalStudents, int courseCount);

// 按成绩排序学生记录，可传入自定义的比较函数
void SortByScore(STU students[], int totalStudents, int courseCount, int (*compare)(float a, float b));

// 升序比较两个浮点数
int Ascending(float a, float b);

// 降序比较两个浮点数
int Descending(float a, float b);

// 统计分析（如平均分，最高分等）
void StatisticAnalysis(STU students[], int totalStudents, int courseCount);

// 打印所有学生记录
void PrintRecord(STU students[], int totalStudents, int courseCount);

// 将学生记录写入文件
void WriteToFile(STU students[], int totalStudents, int courseCount, const char* filePath);

// 从文件读取学生记录
int ReadFromFile(STU records[], int* totalStudents, int* courseCount, int* first);


// 创建节点
void Create() ;