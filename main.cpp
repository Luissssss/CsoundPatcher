#include <iostream>
#include "csengine.h"
#include "sinosc.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
//    Signal s;
//    Signal s2;
//    Signal s3 = s2;
//    s2 = s;
//    s3.setError(4);
    SinOsc s(Value(1000)); // asig poscil 1, 1000
    SinOsc s2(Value(500)); // asig2 poscil 1, 500
    // Out out(s + s2); // out asig + asig2
    //SinOsc s(SinOsc(Value(50))+100); // asig poscil 1, 50 --- asig2 poscil 1, asig + 100
    CsEngine e;
    e.publishSynth(s);
    return 0;
}

