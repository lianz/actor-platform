//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/Connection.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "im/actor/model/network/Connection.h"

@interface AMConnection : NSObject
@end

@implementation AMConnection

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "postWithByteArray:withInt:withInt:", "post", "V", 0x401, NULL },
    { "isClosed", NULL, "Z", 0x401, NULL },
    { "close", NULL, "V", 0x401, NULL },
  };
  static const J2ObjcClassInfo _AMConnection = { 1, "Connection", "im.actor.model.network", NULL, 0x201, 3, methods, 0, NULL, 0, NULL};
  return &_AMConnection;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(AMConnection)
