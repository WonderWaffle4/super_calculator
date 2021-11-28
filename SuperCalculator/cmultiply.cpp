#include "super_calculator_zh.h"

string cmultiply(string num1, string num2, string endzeros){
    long long promezhutok; // ������������ ���� ����
    string zeros = "";
    string newstr = "0";//���������
    string sumpart = "";//������������� ������������
    long long buffer = 0;//����������� �������
    for(long long i = itc_len(num2) - 1; i >= 0; i--){
        for(long long j = itc_len(num1) - 1; j >= 0; j--){
            promezhutok = (num1[j] - '0') * (num2[i] - '0');
            sumpart = itc_toString((promezhutok + buffer) % 10) + sumpart;
            if(promezhutok + buffer > 9)
                buffer = (promezhutok + buffer) / 10;
            if(j == 0 && (promezhutok + buffer) > 9)
                sumpart = itc_toString(buffer) + sumpart;
        }
        sumpart += zeros;
        newstr = csum(newstr, sumpart);
        zeros += "0";
        sumpart = "";
        buffer = 0;
    }
    if(endzeros != "")
        return newstr + endzeros;
    return newstr;
}
