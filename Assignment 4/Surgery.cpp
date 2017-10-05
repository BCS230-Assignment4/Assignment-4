
#include "Surgery.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Surgery::Hand(PatientAccount& patient)
{
    cout << "\tPatient underwent hand surgery!" << endl << "  $43,643 has been added to their cost!" << endl;
    patient.updateSurgery(handCost);
    
}
void Surgery::Spinal(PatientAccount& patient)
{
    cout << "\tPatient underwent spinal surgery!" << endl << "  $86,055 has been added to their cost!" << endl;
    patient.updateSurgery(spinalCost);
}
void Surgery::Brain(PatientAccount& patient)
{
    cout << "\tPatient underwent brain surgery!" << endl << "  $153,537 has been added to their cost!" << endl;
    patient.updateSurgery(brainCost);

}
void Surgery::Cardiac(PatientAccount& patient)
{
    cout << "\tPatient underwent cardiac surgery!" << endl << "  $72,834 has been added to their cost!" << endl;
    patient.updateSurgery(cardiacCost);

}
void Surgery::Knee(PatientAccount& patient)
{
    cout << "\tPatient underwent knee surgery!" << endl << "  $43,643 has been added to their cost!" << endl;
    patient.updateSurgery(kneeCost);

}
