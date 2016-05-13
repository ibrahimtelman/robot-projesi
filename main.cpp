#include <cstdlib>
#include <iostream>
#include <bitset>
#include "main.h"

using namespace std;

//float Kp=20, Kd=6, Ki=0.0000001;
float Kp=20, Kd=203, Ki=0.0000001;
float ideal = 8;
float maxHiz = 103;
float lastError = 0;

float konum(unsigned short S){

	    std::string binary = std::bitset<15>(S).to_string();
	    float tp = 0;
        int sen = 0;
        float hata;

        for(int i=0;i<15;i++){
            if(binary[i] == '1'){ sen++; }
            int bit = (int)binary[i] - 48;
            tp = tp + (i+1)*bit;
        }

        if(sen == 0){
            hata = lastError;
        }else{
            hata = ideal - (tp/sen);
        }

    return hata;
}

bool Algo1(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	   * VL = 50;
	   * VR = 50;
}

bool Algo2(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	    * VL = 50;
	   * VR = 50;
}

bool Algo3(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	    * VL = 50;
	   * VR = 50;
}


bool Algo4(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	    * VL = 50;
	   * VR = 50;
}


bool Algo5(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	    //float local = konum(S);

        float hata = konum(S);

	    float P = hata;

	    float I = I + P;

	    float D = P - lastError;

	    lastError = P;

	    float power = Kp*P + Ki*I +Kd*D;

	    if(power>maxHiz) power = maxHiz;

	    if(power<-maxHiz) power = -maxHiz;

	    if(power < 0){
            *VR = maxHiz + power;
            *VL = maxHiz;
	    }
	    else{
            *VL = maxHiz - power;
            *VR = maxHiz;
	    }
    return true;
}


bool Algo6(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	    * VL = 50;
	   * VR = 50;
}

bool Algo7(unsigned short S, unsigned short L, unsigned short R, int Init, int * VL, int * VR)
{
	    * VL = 50;
	   * VR = 50;
}

