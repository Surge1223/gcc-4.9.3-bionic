
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_stream_events_StartDocument__
#define __javax_xml_stream_events_StartDocument__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
      namespace stream
      {
          class Location;
        namespace events
        {
            class Characters;
            class EndElement;
            class StartDocument;
            class StartElement;
        }
      }
    }
  }
}

class javax::xml::stream::events::StartDocument : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * getSystemId() = 0;
  virtual ::java::lang::String * getCharacterEncodingScheme() = 0;
  virtual jboolean encodingSet() = 0;
  virtual jboolean isStandalone() = 0;
  virtual jboolean standaloneSet() = 0;
  virtual ::java::lang::String * getVersion() = 0;
  virtual jint getEventType() = 0;
  virtual ::javax::xml::stream::Location * getLocation() = 0;
  virtual jboolean isStartElement() = 0;
  virtual jboolean isAttribute() = 0;
  virtual jboolean isNamespace() = 0;
  virtual jboolean isEndElement() = 0;
  virtual jboolean isEntityReference() = 0;
  virtual jboolean isProcessingInstruction() = 0;
  virtual jboolean isCharacters() = 0;
  virtual jboolean isStartDocument() = 0;
  virtual jboolean isEndDocument() = 0;
  virtual ::javax::xml::stream::events::StartElement * asStartElement() = 0;
  virtual ::javax::xml::stream::events::EndElement * asEndElement() = 0;
  virtual ::javax::xml::stream::events::Characters * asCharacters() = 0;
  virtual ::javax::xml::namespace$::QName * getSchemaType() = 0;
  virtual void writeAsEncodedUnicode(::java::io::Writer *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_stream_events_StartDocument__
