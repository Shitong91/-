
// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// �������V1.0.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"


short com;

CString str5;
int Flag_Stop; //ֹͣ���б�־λ

double sum1=0.0;
double max1=0.0000;
double min1=370.0000;

double sum2=0.0;
double max2=0.0000;
double min2=370.0000;

double sum3=0.0;
double max3=0.0000;
double min3=370.0000;
int  mode_choice=1;
int  Motor_Resfinish_flg=0; // ������������ɱ�־λ

double Motor_locked_Vol=0.0;//�����ѹ
double Motor_locked_Cur=0.0;//�������
double Motor_locked_Res=0.0;//��ת�������

int jiaodu_flg=0;            //�Ƕȳ������б�־λ
//int seria_Stop=0;
int Selftest_choice=0;
int  Evaluate_Mode_Choice=0;
int jindu=0;
double Ang_Cacul[8][4];
double bia[8];