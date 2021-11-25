#include "super_calculator_zh.h"

string csum(string num1, string num2){
    string newstr = "";
    if(itc_len(num1) > itc_len(num2)){
        while(itc_len(num1) < itc_len(num2)) num1 *= 10;
    }
    else if(itc_len(num2) > itc_len(num1)){
        while(itc_len(num2) < itc_len(num1)) num2 *= 10;
    }
    for()
}
