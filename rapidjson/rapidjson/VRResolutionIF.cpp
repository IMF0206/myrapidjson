#include "VRResolutionIF.h"
#include "VRInterpreterLoc.h"

ResolutionIF::ResolutionIF()
{
    service = "";
    text = "";
    operation = "";
    category = "";
    name = "";
    nameOrig = "";
    code = "";
    waveband = "";
    album = "";
    song = "";
    artist = "";
    playlist = "";
    type = "";
    ref = "";
    direct = "";
    offset = "";
    city = "";
    ori_loc = "";
    poi = "";
    street = "";
    houseNumber = "";
    nearBy = "";
    nearName = "";
    endLoc = NULL;
    startLoc = NULL;
    location = NULL;
}

ResolutionIF::~ResolutionIF()
{
    if (endLoc != NULL) {
        delete endLoc;
        endLoc = NULL;
    }
    if (startLoc != NULL) {
        delete startLoc;
        startLoc = NULL;
    }
    if (location != NULL) {
        delete location;
        location = NULL;
    }
}

void ResolutionIF::setService(const void* service)
{
    this->service = (const char*)service;
}

void ResolutionIF::setText(const void* text)
{
    this->text = (const char*)text;
}

void ResolutionIF::setOperation(const void* operation)
{
    this->operation = (const char*)operation;
}

void ResolutionIF::setCategory(const void* category)
{
    this->category = (const char*)category;
}

void ResolutionIF::setName(const void* name)
{
    this->name = (const char*)name;
}

void ResolutionIF::setNameOrig(const void* nameOrig)
{
    this->nameOrig = (const char*)nameOrig;
}

void ResolutionIF::setCode(const void* code)
{
    this->code = (const char*)code;
}

void ResolutionIF::setWaveband(const void* waveband)
{
    this->waveband = (const char*)waveband;
}

void ResolutionIF::setAlbum(const void* album)
{
    this->album = (const char*)album;
}

void ResolutionIF::setSong(const void* song)
{
    this->song = (const char*)song;
}

void ResolutionIF::setArtist(const void* artist)
{
    this->artist = (const char*)artist;
}

void ResolutionIF::setPlaylist(const void* playlist)
{
    this->playlist = (const char*)playlist;
}

void ResolutionIF::setType(const void* type)
{
    this->type = (const char*)type;
}

void ResolutionIF::setRef(const void* ref)
{
    this->ref = (const char*)ref;
}

void ResolutionIF::setDirect(const void* direct)
{
    this->direct = (const char*)direct;
}

void ResolutionIF::setOffset(const void* offset)
{
    this->offset = (const char*)offset;
}

void ResolutionIF::setEndLoc(const void* endLoc)
{
    this->endLoc = new ResolutionIF();
    InterpreterLoc interEndLoc(NULL, this->endLoc);
    interEndLoc.loadFunc();
    interEndLoc.interpreterloop(*(rapidjson::Value*)endLoc);
}

void ResolutionIF::setStartLoc(const void* startLoc)
{
    this->startLoc = new ResolutionIF();
    InterpreterLoc interStartLoc(NULL, this->startLoc);
    interStartLoc.loadFunc();
    interStartLoc.interpreterloop(*(rapidjson::Value*)startLoc);
}

void ResolutionIF::setLocation(const void* location)
{
    this->location = new ResolutionIF();
    InterpreterLoc interLoc(NULL, this->location);
    interLoc.loadFunc();
    interLoc.interpreterloop(*(rapidjson::Value*)location);
}

void ResolutionIF::setCity(const void* city)
{
    std::string str((const char*)city);
    this->city = str;
}

void ResolutionIF::setOriloc(const void* ori_loc)
{
    this->ori_loc = (const char*)ori_loc;
}

void ResolutionIF::setPoi(const void* poi)
{
    this->poi = (const char*)poi;
}

void ResolutionIF::setStreet(const void* street)
{
    this->street = (const char*)street;
}

void ResolutionIF::setHouseNumber(const void* houseNumber)
{
    this->houseNumber = (const char*)houseNumber;
}

void ResolutionIF::setNearBy(const void* nearBy)
{
    this->nearBy = (const char*)nearBy;
}

void ResolutionIF::setNearName(const void* nearName)
{
    this->nearBy = (const char*)nearName;
}

std::string ResolutionIF::getService()
{
    return this->service;
}

std::string ResolutionIF::getText()
{
    return this->text;
}

std::string ResolutionIF::getOperation()
{
    return this->operation;
}

std::string ResolutionIF::getCategory()
{
    return this->category;
}

std::string ResolutionIF::getName()
{
    return this->name;
}

std::string ResolutionIF::getNameOrig()
{
    return this->nameOrig;
}

std::string ResolutionIF::getType()
{
    return this->type;
}

std::string ResolutionIF::getRef()
{
    return this->ref;
}

std::string ResolutionIF::getDirect()
{
    return this->direct;
}

std::string ResolutionIF::getOffset()
{
    return this->offset;
}

std::string ResolutionIF::getCity()
{
    return this->city;
}

std::string ResolutionIF::getOriloc()
{
    return this->ori_loc;
}

std::string ResolutionIF::getPoi()
{
    return this->poi;
}

std::string ResolutionIF::getStreet()
{
    return this->street;
}

std::string ResolutionIF::getHouseNumber()
{
    return this->houseNumber;
}

std::string ResolutionIF::getNearBy()
{
    return this->nearBy;
}

std::string ResolutionIF::getNearName()
{
    return this->nearName;
}

ResolutionIF* ResolutionIF::getEndLoc()
{
    return this->endLoc;
}

ResolutionIF* ResolutionIF::getStartLoc()
{
    return this->startLoc;
}

ResolutionIF *ResolutionIF::getLocation()
{
    return this->location;
}

std::string ResolutionIF::getCode()
{
    return this->code;
}

std::string ResolutionIF::getWaveband()
{
    return this->waveband;
}

std::string ResolutionIF::getAlbum()
{
    return this->album;
}

std::string ResolutionIF::getSong()
{
    return this->song;
}

std::string ResolutionIF::getArtist()
{
    return this->artist;
}

std::string ResolutionIF::getPlaylist()
{
    return this->playlist;
}

