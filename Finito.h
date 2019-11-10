//
// Created by djalma on 10/11/2019.
//

#ifndef AUTOMATO_FINITO_FINITO_H
#define AUTOMATO_FINITO_FINITO_H
#include <iostream>
using namespace std;

class Finito {
public:
    Finito(char* bola){
        int i = 0;
        for (i = 0; bola[i] != '\0' ; i++) {
            txt[i] = bola[i];
        }
        txt[i] = 0;
    }
    void e0(){
        if(txt[po] == 'a'){
            po++;
            e1();
        }
        else{
            rejeita();
        }
    }
private:
    void e1(){
        if(txt[po] == 'c'){
            po++;
            e2();
        }
        else if(txt[po] == 'b'){
            po++;
            e0();
        } else{
            rejeita();
        }
    }
    void e2(){
        if(txt[po] == 0){
            aceita();
        }
        else if(txt[po] == 'a'){
            po++;
            e1();
        }
        else{
            rejeita();
        }
    }
    void aceita(){
        cout<<"Aceita"<<endl;
    }
    void rejeita(){
        cout<<"Rejeita"<<endl;
    }
    char txt[100];
    int po = 0;
};


#endif //AUTOMATO_FINITO_FINITO_H
