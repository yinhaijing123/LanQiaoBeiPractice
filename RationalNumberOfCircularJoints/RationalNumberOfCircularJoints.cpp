/***********************************************************************************
                              **算法思路如下：**
************************************************************************************
    主要需要寻找循环体的开始点？
      (当余数相同时，则开始循环)
	1.首先，定义两个数组分别存储小数点之后的，商与余数；
	2.每次求得余数后，对其判断是否在余数的数组内。
	    若不存在，则插入存放余数的数组，且将此次的商也存放于商的数组；
	    若存在，则返回该余数所对应的下标，进而实现打印：直接打印该下标之前的商后，
     打印一个'[',即象征着循环体开始；直到打印了商的数组的所有元素后，再打印']',打印结束。
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

    //1.输出整数部分
    cout << a / b;

    //2.将余数部分保存起来，用做循环查找的条件
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
            //找到循环起点
            for (i; i < remainder.size(); i++)
            {
                if (remainder[i] == a)
                {

                    break;
                }

            }
            int j = 0;
            //打印小数点后的商
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