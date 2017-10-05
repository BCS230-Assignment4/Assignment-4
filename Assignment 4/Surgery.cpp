
#include "Surgery.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Surgery::Hand(double charges)
{
    cout << "You've selected Hand Surgery! << endl << "$43,643 has been added to your cost! << endl;
    charges = majorHand + charges;
    
}
void Surgery::Spinal(double charges)
{
    cout << "You've selected Spinal Surgery! << endl << "$86,055 has been added to your cost! << endl;
    charges = majorSpinal + charges;
    
}
void Surgery::Brain(double charges)
{
    cout << "You've selected Brain Surgery! << endl << "$153,537 has been added to your cost! << endl;
    charges = majorBrain + charges;
    
}
void Surgery::Cardiac(double charges)
{
    cout << "You've selected Cardiac Surgery! << endl << "$72,834 has been added to your cost! << endl;
    charges = majorCardiac + charges;
    
}
void Surgery::Knee(double charges)
{
    cout << "You've selected Knee Surgery! << endl << "$43,643 has been added to your cost! << endl;
    charges = majorKnee + charges;
    
}
