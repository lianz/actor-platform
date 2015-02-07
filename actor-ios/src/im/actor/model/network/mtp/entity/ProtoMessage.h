//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/mtp/entity/ProtoMessage.java
//

#ifndef _MTProtoMessage_H_
#define _MTProtoMessage_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;

#include "J2ObjC_header.h"
#include "im/actor/model/network/mtp/entity/ProtoObject.h"

@interface MTProtoMessage : MTProtoObject {
}

- (instancetype)initWithLong:(jlong)messageId
               withByteArray:(IOSByteArray *)payload;

- (jlong)getMessageId;

- (IOSByteArray *)getPayload;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

- (void)writeObjectWithJavaIoOutputStream:(JavaIoOutputStream *)bs;

- (MTProtoObject *)readObjectWithJavaIoInputStream:(JavaIoInputStream *)bs;

- (jint)getLength;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(MTProtoMessage)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

typedef MTProtoMessage ImActorModelNetworkMtpEntityProtoMessage;

J2OBJC_TYPE_LITERAL_HEADER(MTProtoMessage)

#endif // _MTProtoMessage_H_
