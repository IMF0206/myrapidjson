#include "VRInterpreterMap.h"

InterpreterMap::~InterpreterMap()
{

}

void InterpreterMap::loadFunc()
{
    m_interpreterMap.clear();
    m_interpreterMap[VR_SERVICE] = &ResolutionIF::setService;
    m_interpreterMap[VR_TEXT] = &ResolutionIF::setText;
    m_interpreterMap[VR_OPERATION] = &ResolutionIF::setOperation;
    m_interpreterMap[VR_STARTLOC] = &ResolutionIF::setStartLoc;
    m_interpreterMap[VR_ENDLOC] = &ResolutionIF::setEndLoc;
}
