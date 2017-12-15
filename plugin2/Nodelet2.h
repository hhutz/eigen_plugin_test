#ifndef Nodelet2_h
#define Nodelet2_h

#include <nodelet/nodelet.h>

class Nodelet2 : public nodelet::Nodelet
{
public:
    //! Resource initialization
    virtual void onInit();
    
protected:
};
#endif // Nodelet2_h
