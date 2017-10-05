
#include "Pharmacy.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Pharmacy::levothyroxine(PatientAccount& patient)
{
    cout << "Patient purchased levothyroxine!" << endl << "$89 has been added to their cost!" << endl;
    patient.updateSurgery(levothyroxineCost);
    
}
void Pharmacy::rosuvastatin(PatientAccount& patient)
{
    cout << "Patient purchased rosuvastatin!" << endl << "$243 has been added to their cost!" << endl;
    patient.updateSurgery(rosuvastatinCost);
}
void Pharmacy::albuterol(PatientAccount& patient)
{
    cout << "Patient purchased albuterol!" << endl << "$543 has been added to their cost!" << endl;
    patient.updateSurgery(albuterolCost);
    
}
void Pharmacy::esomeprazole(PatientAccount& patient)
{
    cout << "Patient purchased esomeprazole!" << endl << "$133 has been added to their cost!" << endl;
    patient.updateSurgery(esomeprazoleCost);
    
}
void Pharmacy::fluticasone(PatientAccount& patient)
{
    cout << "Patient purchased fluticasone!" << endl << "$745 has been added to their cost!" << endl;
    patient.updateSurgery(fluticasoneCost);
    
}

