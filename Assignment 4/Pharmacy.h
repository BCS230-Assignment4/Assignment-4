
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//  Pharmacy Class                                                                    //
//  Header File                                                                       //
//  Author: Doug Hellberg                                                             //
//  Date: October 4, 2017                                                             //
//  Purpose: To keep track of the available mediactions and pass data back to the     //
//              PatientAccount to update the cost                                     //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

#ifndef Pharmacy_h
#define Pharmacy_h

#include "PatientAccount.h"

class Pharmacy {
    int levothyroxineCost = 89;
    int rosuvastatinCost = 243;
    int albuterolCost = 543;
    int esomeprazoleCost = 133;
    int fluticasoneCost = 745;
public:
    void levothyroxine(PatientAccount&);
    void rosuvastatin(PatientAccount&);
    void albuterol(PatientAccount&);
    void esomeprazole(PatientAccount&);
    void fluticasone(PatientAccount&);
};


#endif /* Pharmacy_h */
