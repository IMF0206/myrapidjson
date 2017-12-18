// JSON simple example
// This example does not handle errors.

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include <stdio.h>

#include "VRInterpreterContext.h"
//#include "interpreterContext.h"

using namespace rapidjson;
using namespace std;


int main() {
    // 1. Parse a JSON string into DOM.
    char* json = "{"
                       "\"bislocalresult\":\"1\","
                       "\"language\":\"zh_cn_mandarin\","
                       "\"nlocalconfidencescore\":0,"
                       "\"operation\":\"ROUTE\","
                       "\"pk_score\":1,"
                       "\"rc\":0,"
                       "\"semantic\":"
                       "{\"slots\":"
                           "{"
                           "\"endLoc\":"
                           "{"
                           "\"city\":\"CURRENT_CITY\","
                           "\"ori_loc\":\"科大讯飞\","
                           "\"poi\":\"科大讯飞\","
                           "\"type\":\"LOC_POI\""
                           "},"
                           "\"startLoc\":"
                           "{"
                               "\"city\":\"CURRENT_CITY\","
                               "\"poi\":\"CURRENT_POI\","
                               "\"type\":\"LOC_POI\""
                           "}"
                           "}"
                       "},"
                       "\"service\":\"map\","
                       "\"text\":\"导航到科大讯飞。\","
                       "\"version\":\"3.0.0.1220\""
                   "}";

    char* jsoncontext = "{"
                        "\"service\": \"telephone\","
                        "\"name\": \"james\","
                        "\"rc\": 0,"
                        "\"operation\": \"DIAL\","
                        "\"semantic\": {}"
                        "}";

//    Document* doc = new Document();
//    doc->Parse(json);
//    ResolutionIF* resolution = new ResolutionIF();
//    InterpreterMap* inter = new InterpreterMap(doc, resolution);
//    inter->loadFunc();
//    inter->interpreterloop(doc->GetObject());
//    ResolutionIF* res = inter->getResult();
//    ResolutionIF* endLoc = res->getEndLoc();
//    std::cout << endLoc->getCity() << std::endl;


    interpreterContext* intercontext = new interpreterContext(json);
    intercontext->interStart();
    ResolutionIF* res = intercontext->getResolution();
    ResolutionIF* endLoc = res->getEndLoc();
    std::cout << "main : the city is " << endLoc->getCity() << endl;


//    cout << "city========>" << endLoc->getCity() << endl;
//    endLoc->setCity(&city);
//    cout << endLoc->getCity() << endl;
//    cout << "name is : " << res->getEndLoc()->getCity() << endl;


//    interpreterContext* context = new interpreterContext(jsoncontext);


//    Interpreter_phone* intphone = new Interpreter_phone(json);
//    string str = intphone->getOperation();
//    printf("==============>%s \n", str.c_str());


//    Value::MemberIterator typeObj = d->FindMember("language");
//    while (typeObj != d->MemberEnd()) {
//        Value &object = typeObj->value;
//        printf("type is %s \n", typeObj->value.GetString());
//        typeObj++;
//    }

//    // 3. Stringify the DOM
//    StringBuffer buffer;
//    Writer<StringBuffer> writer(buffer);
//    d->Accept(writer);

//    // Output {"project":"rapidjson","stars":11}
//    std::cout << buffer.GetString() << std::endl;
    return 0;
}

