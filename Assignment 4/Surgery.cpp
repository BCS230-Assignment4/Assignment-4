
#include "Surgery.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Surgery::Hand(PatientAccount patient)
{
    cout << "You've selected Hand Surgery!" << endl << "$43,643 has been added to your cost!" << endl;
    patient.updateSurgery(majorHand);
    
}
void Surgery::Spinal(PatientAccount patient)
{
    cout << "You've selected Spinal Surgery!" << endl << "$86,055 has been added to your cost!" << endl;
    patient.updateSurgery(majorSpinal);
}
void Surgery::Brain(PatientAccount patient)
{
    cout << "You've selected Brain Surgery!" << endl << "$153,537 has been added to your cost!" << endl;
    patient.updateSurgery(majorBrain);

}
void Surgery::Cardiac(PatientAccount patient)
{
    cout << "You've selected Cardiac Surgery!" << endl << "$72,834 has been added to your cost!" << endl;
    patient.updateSurgery(majorCardiac);

}
void Surgery::Knee(PatientAccount patient)
{
    cout << "You've selected Knee Surgery!" << endl << "$43,643 has been added to your cost!" << endl;
    patient.updateSurgery(majorKnee);

}
