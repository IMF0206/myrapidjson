#ifndef RESOLUTIONIF_H
#define RESOLUTIONIF_H

#include <string>
#include "document.h"

class ResolutionIF
{
public:
    ResolutionIF();

    virtual ~ResolutionIF();
    // set function

    /**
     * @brief common
     */
    virtual void setService(const void* service);
    virtual void setText(const void* text);
    virtual void setOperation(const void *operation);

    /**
     * @brief service is telephone, cmd, music
     */
    virtual void setCategory(const void* category);

    /**
     * @brief setName in telephone, app, cmd
     */
    virtual void setName(const void* name);

    /**
     * @brief service is telephone
     */
    virtual void setNameOrig(const void* nameOrig);

    /**
     * @brief setCode, in telephone, radio
     */
    virtual void setCode(const void* code);

    /**
     * @brief service is radio
     */
    virtual void setWaveband(const void* waveband);

    /**
     * @brief service is music
     */
    virtual void setAlbum(const void* album);
    virtual void setSong(const void* song);
    virtual void setArtist(const void* artist);
    virtual void setPlaylist(const void* playlist);

    /**
     * @brief setType, in intemSelect, map
     */
    virtual void setType(const void* type);
    /**
     * @brief setType, in itemSelect(serial)
     */
    virtual void setRef(const void* ref);
    virtual void setDirect(const void* direct);
    virtual void setOffset(const void* offset);

    /**
     * @brief service map and lbs
     */
    virtual void setEndLoc(const void* endLoc);
    virtual void setStartLoc(const void* startLoc);
    virtual void setLocation(const void* location);
    virtual void setCity(const void* city);
    virtual void setOriloc(const void* ori_loc);
    virtual void setPoi(const void* poi);
    virtual void setStreet(const void* street);
    virtual void setHouseNumber(const void* houseNumber);
    virtual void setNearBy(const void* nearBy);
    virtual void setNearName(const void* nearName);

    // get function
    virtual std::string getService();
    virtual std::string getText();
    virtual std::string getOperation();
    virtual std::string getCategory();
    virtual std::string getName();
    virtual std::string getNameOrig();
    virtual std::string getCode();
    virtual std::string getWaveband();
    virtual std::string getAlbum();
    virtual std::string getSong();
    virtual std::string getArtist();
    virtual std::string getPlaylist();
    virtual std::string getType();
    virtual std::string getRef();
    virtual std::string getDirect();
    virtual std::string getOffset();
    virtual std::string getCity();
    virtual std::string getOriloc();
    virtual std::string getPoi();
    virtual std::string getStreet();
    virtual std::string getHouseNumber();
    virtual std::string getNearBy();
    virtual std::string getNearName();

    virtual ResolutionIF* getEndLoc();
    virtual ResolutionIF* getStartLoc();
    virtual ResolutionIF* getLocation();

protected:
    std::string service;
    std::string text;
    std::string operation;
    std::string category;
    std::string name;
    std::string nameOrig;
    std::string code;
    std::string waveband;
    std::string album;
    std::string song;
    std::string artist;
    std::string playlist;
    std::string type;
    std::string ref;
    std::string direct;
    std::string offset;
    std::string city;
    std::string ori_loc;
    std::string poi;
    std::string street;
    std::string houseNumber;
    std::string nearBy;
    std::string nearName;
    ResolutionIF* endLoc;
    ResolutionIF* startLoc;
    ResolutionIF* location;
};

#endif // RESOLUTIONIF_H
