#ifndef INTERPRETERMUSIC_H
#define INTERPRETERMUSIC_H

#include "VRInterpreter.h"

class InterpreterMusic : public interpreter
{
public:
    InterpreterMusic(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }

    virtual ~InterpreterMusic();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        static InterpreterMusic m_interpreter(doc, resolution);
        return &m_interpreter;
    }

    void loadFunc();
};

#endif // INTERPRETERMUSIC_H
