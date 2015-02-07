//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/mtp/entity/rpc/RpcOk.java
//

#ifndef _MTRpcOk_H_
#define _MTRpcOk_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;

#include "J2ObjC_header.h"
#include "im/actor/model/network/mtp/entity/ProtoStruct.h"

#define MTRpcOk_HEADER 1

@interface MTRpcOk : MTProtoStruct {
 @public
  jint responseType_;
  IOSByteArray *payload_;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

- (instancetype)initWithInt:(jint)responseType
              withByteArray:(IOSByteArray *)payload;

- (jint)getResponseType;

- (IOSByteArray *)getPayload;

- (jint)getLength;

- (jbyte)getHeader;

- (void)writeBodyWithJavaIoOutputStream:(JavaIoOutputStream *)bs;

- (void)readBodyWithJavaIoInputStream:(JavaIoInputStream *)bs;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(MTRpcOk)

J2OBJC_FIELD_SETTER(MTRpcOk, payload_, IOSByteArray *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(MTRpcOk, HEADER, jbyte)
CF_EXTERN_C_END

typedef MTRpcOk ImActorModelNetworkMtpEntityRpcRpcOk;

J2OBJC_TYPE_LITERAL_HEADER(MTRpcOk)

#endif // _MTRpcOk_H_
