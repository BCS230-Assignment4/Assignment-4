
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
