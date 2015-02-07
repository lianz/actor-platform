//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/mtp/entity/ProtoStruct.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "im/actor/model/network/mtp/entity/ProtoObject.h"
#include "im/actor/model/network/mtp/entity/ProtoStruct.h"
#include "im/actor/model/util/StreamingUtils.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"

@implementation MTProtoStruct

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream {
  return [super initWithJavaIoInputStream:stream];
}

- (instancetype)init {
  return [super init];
}

- (jbyte)getHeader {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

- (void)writeObjectWithJavaIoOutputStream:(JavaIoOutputStream *)bs {
  jbyte header = [self getHeader];
  if (header != 0) {
    AMStreamingUtils_writeByteWithByte_withJavaIoOutputStream_(header, bs);
  }
  [self writeBodyWithJavaIoOutputStream:bs];
}

- (MTProtoObject *)readObjectWithJavaIoInputStream:(JavaIoInputStream *)bs {
  [self readBodyWithJavaIoInputStream:bs];
  return self;
}

- (void)writeBodyWithJavaIoOutputStream:(JavaIoOutputStream *)bs {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
}

- (void)readBodyWithJavaIoInputStream:(JavaIoInputStream *)bs {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithJavaIoInputStream:", "ProtoStruct", NULL, 0x4, "Ljava.io.IOException;" },
    { "init", "ProtoStruct", NULL, 0x4, NULL },
    { "getHeader", NULL, "B", 0x404, NULL },
    { "writeObjectWithJavaIoOutputStream:", "writeObject", "V", 0x11, "Ljava.io.IOException;" },
    { "readObjectWithJavaIoInputStream:", "readObject", "Lim.actor.model.network.mtp.entity.ProtoObject;", 0x11, "Ljava.io.IOException;" },
    { "writeBodyWithJavaIoOutputStream:", "writeBody", "V", 0x404, "Ljava.io.IOException;" },
    { "readBodyWithJavaIoInputStream:", "readBody", "V", 0x404, "Ljava.io.IOException;" },
  };
  static const J2ObjcClassInfo _MTProtoStruct = { 1, "ProtoStruct", "im.actor.model.network.mtp.entity", NULL, 0x401, 7, methods, 0, NULL, 0, NULL};
  return &_MTProtoStruct;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(MTProtoStruct)
