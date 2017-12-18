#include "VRInterpreterRadio.h"

using namespace rapidjson;
using namespace std;

InterpreterRadio::~InterpreterRadio()
{

}

void InterpreterRadio::loadFunc()
{
    m_interpreterMap.clear();
    m_interpreterMap[VR_SERVICE] = &ResolutionIF::setService;
    m_interpreterMap[VR_TEXT] = &ResolutionIF::setText;
    m_interpreterMap[VR_OPERATION] = &ResolutionIF::setOperation;
    m_interpreterMap[VR_WAVEBAND] = &ResolutionIF::setWaveband;
    m_interpreterMap[VR_CODE] = &ResolutionIF::setCode;
}
