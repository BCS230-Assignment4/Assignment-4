
// Doug Hellberg || My Surgery class would take input from the patient to find out which surgery they had as well as to update the price

#ifndef Surgery_h
#define Surgery_h

class Surgery {
    int majorHand = 43643;
    int majorSpinal = 86055;
    int majorBrain = 153537;
    int majorCardiac = 48389;
    int majorKnee = 72834;
public:
    void Hand(double charges);
    void Spinal(double charges);
    void Brain(double charges);
    void Cardiac(double charges);
    void Knee(double charges);
};

#endif /* Surgery_h */
