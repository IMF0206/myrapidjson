#ifndef INTERPRETERRADIO_H
#define INTERPRETERRADIO_H

#include "VRInterpreter.h"

class InterpreterRadio : public interpreter
{
public:
    InterpreterRadio(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }

    virtual ~InterpreterRadio();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        static InterpreterRadio m_interpreter(doc, resolution);
        return &m_interpreter;
    }

    void loadFunc();
};

#endif // INTERPRETERRADIO_H
