
#include "Pharmacy.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Pharmacy::levothyroxine(PatientAccount& patient)
{
    cout << "\tPatient purchased levothyroxine!" << endl << "  $89 has been added to their cost!" << endl;
    patient.updatePharmacy(levothyroxineCost);
    
}
void Pharmacy::rosuvastatin(PatientAccount& patient)
{
    cout << "\tPatient purchased rosuvastatin!" << endl << "  $243 has been added to their cost!" << endl;
    patient.updatePharmacy(rosuvastatinCost);
}
void Pharmacy::albuterol(PatientAccount& patient)
{
    cout << "\tPatient purchased albuterol!" << endl << "  $543 has been added to their cost!" << endl;
    patient.updatePharmacy(albuterolCost);
    
}
void Pharmacy::esomeprazole(PatientAccount& patient)
{
    cout << "\tPatient purchased esomeprazole!" << endl << "  $133 has been added to their cost!" << endl;
    patient.updatePharmacy(esomeprazoleCost);
    
}
void Pharmacy::fluticasone(PatientAccount& patient)
{
    cout << "\tPatient purchased fluticasone!" << endl << "  $745 has been added to their cost!" << endl;
    patient.updatePharmacy(fluticasoneCost);
    
}

