//
//  nokta.h
//  C++Project4
//
//  Created by Kaan Şengün on 19.10.2023.
//

#ifndef nokta_h
#define nokta_h
#include <iostream>
using namespace std;


class nokta{
public:
    void yaz(){
      cout<<"("<<x<<""<<","<<""<<y<<")"<<endl;
    }
    int tumtopla(){
        int toplam=x+y;
        return toplam;
    }
    nokta(): x(0),y(0) {};
    nokta(int a,int b): x(a),y(b) {};
    
    int x,y;
    nokta topla(nokta,nokta);
};
nokta nokta::topla(nokta bir, nokta iki){
nokta ydk;
ydk.x=bir.x+iki.x;
ydk.y=bir.y+iki.y;
return ydk;
};


#endif /* nokta_h */
