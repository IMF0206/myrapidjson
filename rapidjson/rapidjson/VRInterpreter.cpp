#include "VRInterpreter.h"
#include <cstdio>

using namespace rapidjson;

using namespace std;

interpreter::interpreter(Document* doc, ResolutionIF* resolution)
{
    m_doc = doc;
    m_resolution = resolution;
}

interpreter::~interpreter()
{

}

void interpreter::interpreterloop(const Value& object)
{
    for (Value::ConstMemberIterator it = object.MemberBegin(); it != object.MemberEnd(); ++it) {

        if(!checkName(it->name.GetString()) && !it->value.IsObject()) {
            continue;
        }
        if(!checkName(it->name.GetString())) {
            interpreterloop(it->value);
        } else if (it->value.IsString()){
            addStrValue(it->name.GetString(), it->value.GetString());
        } else if (it->value.IsObject()){
            addObjValue(it->name.GetString(), it->value);
        } else {
            continue;
        }
    }
}

bool interpreter::checkName(string name)
{
    return m_interpreterMap.find(name) != m_interpreterMap.end();
}

void interpreter::addStrValue(std::string name, const char* value)
{
    (m_resolution->*(m_interpreterMap[name]))(value);
}

void interpreter::addObjValue(std::string name, const Value& value)
{
    (m_resolution->*(m_interpreterMap[name]))(&value);
}
