//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/mtp/entity/ProtoObject.java
//

#ifndef _MTProtoObject_H_
#define _MTProtoObject_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;

#include "J2ObjC_header.h"

@interface MTProtoObject : NSObject {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

- (instancetype)init;

- (void)writeObjectWithJavaIoOutputStream:(JavaIoOutputStream *)bs;

- (MTProtoObject *)readObjectWithJavaIoInputStream:(JavaIoInputStream *)bs;

- (IOSByteArray *)toByteArray;

- (jint)getLength;

@end

J2OBJC_EMPTY_STATIC_INIT(MTProtoObject)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

typedef MTProtoObject ImActorModelNetworkMtpEntityProtoObject;

J2OBJC_TYPE_LITERAL_HEADER(MTProtoObject)

#endif // _MTProtoObject_H_
