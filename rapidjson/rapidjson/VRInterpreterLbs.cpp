#include "VRInterpreterLbs.h"

InterpreterLbs::~InterpreterLbs()
{

}

void InterpreterLbs::loadFunc()
{
    m_interpreterMap.clear();
    m_interpreterMap[VR_SERVICE] = &ResolutionIF::setService;
    m_interpreterMap[VR_TEXT] = &ResolutionIF::setText;
    m_interpreterMap[VR_OPERATION] = &ResolutionIF::setOperation;
    m_interpreterMap[VR_LOCATION] = &ResolutionIF::setLocation;
    m_interpreterMap[VR_NAME] = &ResolutionIF::setName;
}
