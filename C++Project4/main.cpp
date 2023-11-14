//
//  main.cpp
//  C++Project4
//
//  Created by Kaan Şengün on 19.10.2023.
//

#include <iostream>
#include "nokta.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    nokta A(8,0),B(6,3),C,D;
    C=C.topla(A,B);
    C.yaz();
    int x= C.tumtopla();
    cout<<"Tüm toplam= "<<x<<endl;
    return 0;
} 
