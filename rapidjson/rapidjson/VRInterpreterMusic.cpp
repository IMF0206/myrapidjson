#include "VRInterpreterMusic.h"

using namespace rapidjson;
using namespace std;

InterpreterMusic::~InterpreterMusic()
{

}

void InterpreterMusic::loadFunc()
{
    m_interpreterMap.clear();
    m_interpreterMap[VR_SERVICE] = &ResolutionIF::setService;
    m_interpreterMap[VR_TEXT] = &ResolutionIF::setText;
    m_interpreterMap[VR_OPERATION] = &ResolutionIF::setOperation;
    m_interpreterMap[VR_CATEGORY] = &ResolutionIF::setCategory;
    m_interpreterMap[VR_ALBUM] = &ResolutionIF::setAlbum;
    m_interpreterMap[VR_ARTIST] = &ResolutionIF::setArtist;
    m_interpreterMap[VR_SONG] = &ResolutionIF::setSong;
    m_interpreterMap[VR_PLAYLIST] = &ResolutionIF::setPlaylist;
}
