
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JTabbedPane$ModelListener__
#define __javax_swing_JTabbedPane$ModelListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class JTabbedPane;
        class JTabbedPane$ModelListener;
      namespace event
      {
          class ChangeEvent;
      }
    }
  }
}

class javax::swing::JTabbedPane$ModelListener : public ::java::lang::Object
{

public: // actually protected
  JTabbedPane$ModelListener(::javax::swing::JTabbedPane *);
public:
  virtual void stateChanged(::javax::swing::event::ChangeEvent *);
private:
  static const jlong serialVersionUID = 497359819958114132LL;
public: // actually package-private
  ::javax::swing::JTabbedPane * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JTabbedPane$ModelListener__
