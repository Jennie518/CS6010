//
//  main.cpp
//  NumberRepresentations
//
//  Created by 詹怡君 on 9/6/23.
//
#include <cassert>
#include <iostream>
#include <cstdint>
#include <cassert>
#include <fstream>
bool approxEquals(double a, double b, double tolerance){
    return std::abs(a - b) <= tolerance;
}
void countAndPrintCharacters(std::string filename){
    std::ifstream inf(filename);
    if(!inf){
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }
    char c;
    int asciiCount = 0;
    int unicodeCount = 0;
    while(inf >> c){
        if(c >= 0 && c <= 127){
            asciiCount++;
        }else{
            unicodeCount++;
        }
        std::cout<< c <<std::endl;
    }
    inf.close();
    std::cout << "Number of ASCII characters: " << asciiCount << std::endl;
    std::cout << "Number of Unicode characters: " << unicodeCount << std::endl;
}
int main(int argc, const char * argv[]) {
    //part1
    int a[] = { 7, 2, -56, 32, 1, 7, -2, 7 };
    std::cout << "size: " << sizeof(a) << "\n";
    //because there are 8 integers and each integer occupy 4 bytes so print out the size of array a 4*8= 32 bytes
    std::cout << "int: "<<sizeof(int)<<std::endl;
    std::cout << "char: "<<sizeof(char)<<std::endl;
    std::cout <<"float: "<< sizeof(float)<<std::endl;
    std::cout <<"double: "<< sizeof(double)<<std::endl;
    std::cout << "bool: "<<sizeof(bool)<<std::endl;
    std::cout <<"string: "<<sizeof(std::string)<<std::endl;
    std::cout << "uint8_t: "<<sizeof(uint8_t)<<std::endl;
    std::cout << "uint16_t: "<< sizeof(uint16_t)<<std::endl;
    std::cout << "uint64_t: "<< sizeof(uint64_t)<<std::endl;
    
    uint8_t minHex8 = 0x00;
    uint8_t maxHex8 = 0xFF;
    uint16_t minHex16 = 0x0000;
    uint16_t maxHex16 = 0xFFFF;
    uint64_t minHex64 = 0x0000000000000000;
    uint64_t maxHex64 = 0xFFFFFFFFFFFFFFFF;
    std::cout<< "minHex in Unit8: "<< +minHex8<<std::endl;
    std::cout<< "maxHex in Unit8: "<< +maxHex8<<std::endl;
    std::cout<< "minHex in Unit16: "<< +minHex16<<std::endl;
    std::cout<< "maxHex in Unit16: "<< +maxHex16<<std::endl;
    std::cout<< "minHex in Unit64: "<< +minHex64<<std::endl;
    std::cout<< "maxHex in Unit64: "<< +maxHex64<<std::endl;
    int8_t signedMinHex8 =0x80;
    int8_t signedMaxHex8 =0x7F;
    int16_t signedMinHex16 =0x8000;
    int16_t signedMaxHex16 =0x7FFF;
    int64_t signedMinHex64 =0x8000000000000000;
    int64_t signedMaxHex64 =0x7FFFFFFFFFFFFFFF;
    signedMinHex8--;
    signedMaxHex8++;
    signedMinHex16--;
    signedMaxHex16++;
    signedMinHex64--;
    signedMaxHex64++;
    std::cout<< "Min in signed int8: "<< +signedMinHex8<<std::endl;
    std::cout<< "Max in signed int8: "<< +signedMaxHex8 <<std::endl;
    std::cout<< "Min in signed int16: "<< +signedMinHex16 <<std::endl;
    std::cout<< "Max in signed int16: "<< signedMaxHex16 + 1<<std::endl;
    std::cout<< "Min in signed int64: "<< +signedMinHex64 - 1<<std::endl;
    std::cout<< "Max in signed int64: "<< signedMaxHex64 + 1<<std::endl;
    
    //part2
    double d1= .1;
    double d2 =.2;
    double res = d1 + d2;
    double d3 =.3;
    if(approxEquals(res,d3,1e-9)){
        std::cout << "Approximately equal" << std::endl;
    }else {
        std::cout << "Not equal" << std::endl;
    }
    //part3
    
    countAndPrintCharacters("/Users/zhanyijun/Desktop/MSD/CS6010/Day12/NumberRepresentations/NumberRepresentations/UTF-8-demo.txt");
    int8_t a2 = 0xFF;
    uint8_t b1 = a2;
    uint8_t b2 = 0xFF;
    std::cout<<"a: "<<+a2;
    std::cout<<"B1: "<<+b1;
    std::cout<<"b2: "<<+b2;
    return 0;
}


