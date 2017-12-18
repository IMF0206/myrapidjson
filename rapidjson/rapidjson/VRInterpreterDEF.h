#ifndef VR_INTERPRETERDEF
#define VR_INTERPRETERDEF

#include <string>
#include <map>
#include <VRResolutionIF.h>


typedef void (*pFun)(std::string value);

const std::string VR_SERVICE = "service";
const std::string VR_TEXT = "text";
const std::string VR_OPERATION = "operation";
const std::string VR_CATEGORY = "category";
const std::string VR_NAME = "name";
const std::string VR_NAMEORIG = "nameOrig";
const std::string VR_CODE = "code";
const std::string VR_WAVEBAND = "waveband";
const std::string VR_ALBUM = "album";
const std::string VR_SONG = "song";
const std::string VR_ARTIST = "artist";
const std::string VR_PLAYLIST = "playlist";
const std::string VR_REF = "ref";
const std::string VR_DIRECT = "direct";
const std::string VR_OFFSET = "offset";
const std::string VR_ENDLOC = "endLoc";
const std::string VR_STARTLOC = "startLoc";
const std::string VR_LOCATION = "location";
const std::string VR_TYPE = "type";
const std::string VR_CITY = "city";
const std::string VR_ORILOC = "ori_loc";
const std::string VR_POI = "poi";
const std::string VR_STREET = "street";
const std::string VR_HOUSENUMBER = "houseNumber";
const std::string VR_NEARBY = "nearBy";
const std::string VR_NEARNAME = "nearName";

#endif // VR_INTERPRETERDEF

