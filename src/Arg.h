#ifndef Arg_h
#define Arg_h

#include "cli_helper.h"

class Arg {
  public:
    Arg* next = NULL;
    
    virtual ~Arg() = default;

    virtual void setValue(String value) = 0;
    virtual bool equals(String name) = 0;
    virtual bool equals(const char* name) = 0;
    virtual bool isRequired() = 0;
    
    virtual void reset(){
      set = false;
    }
    
    virtual String getName(){
      return String();
    }

    virtual String getValue(){
      return String();
    }

    bool isSet(){
      return set;
    }
  protected:
    bool set = false;
};

#endif

