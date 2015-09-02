
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_hash_HashFactory__
#define __gnu_java_security_hash_HashFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace hash
        {
            class HashFactory;
            class IMessageDigest;
        }
      }
    }
  }
}

class gnu::java::security::hash::HashFactory : public ::java::lang::Object
{

  HashFactory();
public:
  static ::gnu::java::security::hash::IMessageDigest * getInstance(::java::lang::String *);
  static ::java::util::Set * getNames();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_security_hash_HashFactory__
