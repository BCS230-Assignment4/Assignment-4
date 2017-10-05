
#include "Pharmacy.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Pharmacy::levothyroxine(PatientAccount& patient)
{
    cout << "Patient underwent hand surgery!" << endl << "$43,643 has been added to their cost!" << endl;
    patient.updateSurgery(levothyroxineCost);
    
}
void Pharmacy::rosuvastatin(PatientAccount& patient)
{
    cout << "Patient underwent spinal surgery!" << endl << "$86,055 has been added to their cost!" << endl;
    patient.updateSurgery(rosuvastatinCost);
}
void Pharmacy::albuterol(PatientAccount& patient)
{
    cout << "Patient underwent brain surgery!" << endl << "$153,537 has been added to their cost!" << endl;
    patient.updateSurgery(albuterolCost);
    
}
void Pharmacy::esomeprazole(PatientAccount& patient)
{
    cout << "Patient underwent cardiac surgery!" << endl << "$72,834 has been added to their cost!" << endl;
    patient.updateSurgery(esomeprazoleCost);
    
}
void Pharmacy::fluticasone(PatientAccount& patient)
{
    cout << "Patient underwent knee surgery!" << endl << "$43,643 has been added to their cost!" << endl;
    patient.updateSurgery(fluticasoneCost);
    
}

