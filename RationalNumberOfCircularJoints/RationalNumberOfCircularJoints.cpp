/***********************************************************************************
                              **�㷨˼·���£�**
************************************************************************************
    ��Ҫ��ҪѰ��ѭ����Ŀ�ʼ�㣿
      (��������ͬʱ����ʼѭ��)
	1.���ȣ�������������ֱ�洢С����֮��ģ�����������
	2.ÿ����������󣬶����ж��Ƿ��������������ڡ�
	    �������ڣ�����������������飬�ҽ��˴ε���Ҳ������̵����飻
	    �����ڣ��򷵻ظ���������Ӧ���±꣬����ʵ�ִ�ӡ��ֱ�Ӵ�ӡ���±�֮ǰ���̺�
     ��ӡһ��'[',��������ѭ���忪ʼ��ֱ����ӡ���̵����������Ԫ�غ��ٴ�ӡ']',��ӡ������
***********************************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool IsContained(vector<int> a, int b)
{
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b)
            {
                return true;
            }
        } 
    return false;
}

void function(int a, int b)
{

    vector<int> remainder;
    vector<int> multiple;

    //1.�����������
    cout << a / b;

    //2.���������ֱ�������������ѭ�����ҵ�����
    a = a % b;
    if (a != 0)
    {
        cout << ".";        
    }
    while (a != 0)
    {
        if (IsContained(remainder, a))
        {
            int i = 0;
            //�ҵ�ѭ�����
            for (i; i < remainder.size(); i++)
            {
                if (remainder[i] == a)
                {

                    break;
                }

            }
            int j = 0;
            //��ӡС��������
            for (j; j < i; j++)
            {
                cout << multiple[j];
            }

            if (j < remainder.size())
            {
                cout << "[";
            }
			
            for (j = i; j < remainder.size(); j++)
            {
                cout << multiple[j];
            }
            if (j == remainder.size())
            {
                cout << "]";
            }
            return;
        }

        else
        {
            multiple.push_back(a * 10 / b);
            remainder.push_back(a);
        }
        a = (a * 10) % b;
    }
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    function(a, b);

    system("pause");
    return 0;
}