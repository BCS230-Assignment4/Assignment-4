
#include "Surgery.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Surgery::Hand(PatientAccount& patient)
{
    cout << "Patient underwent hand surgery!" << endl << "$43,643 has been added to their cost!" << endl;
    patient.updateSurgery(majorHand);
    
}
void Surgery::Spinal(PatientAccount& patient)
{
    cout << "Patient underwent spinal surgery!" << endl << "$86,055 has been added to their cost!" << endl;
    patient.updateSurgery(majorSpinal);
}
void Surgery::Brain(PatientAccount& patient)
{
    cout << "Patient underwent brain surgery!" << endl << "$153,537 has been added to their cost!" << endl;
    patient.updateSurgery(majorBrain);

}
void Surgery::Cardiac(PatientAccount& patient)
{
    cout << "Patient underwent cardiac surgery!" << endl << "$72,834 has been added to their cost!" << endl;
    patient.updateSurgery(majorCardiac);

}
void Surgery::Knee(PatientAccount& patient)
{
    cout << "Patient underwent knee surgery!" << endl << "$43,643 has been added to their cost!" << endl;
    patient.updateSurgery(majorKnee);

}
