//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/network/mtp/AuthIdRetriever.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "im/actor/model/config/ConnectionFactory.h"
#include "im/actor/model/log/Log.h"
#include "im/actor/model/network/Connection.h"
#include "im/actor/model/network/ConnectionEndpoint.h"
#include "im/actor/model/network/Endpoints.h"
#include "im/actor/model/network/mtp/AuthIdRetriever.h"
#include "im/actor/model/util/StreamingUtils.h"
#include "java/io/ByteArrayInputStream.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/lang/Exception.h"
#include "java/lang/RuntimeException.h"

@interface MTAuthIdRetriever () {
}
@end

@interface MTAuthIdRetriever_$1 () {
 @public
  IOSBooleanArray *val$isFinished_;
  id<MTAuthIdRetriever_AuthIdCallback> val$callback_;
}
@end

J2OBJC_FIELD_SETTER(MTAuthIdRetriever_$1, val$isFinished_, IOSBooleanArray *)
J2OBJC_FIELD_SETTER(MTAuthIdRetriever_$1, val$callback_, id<MTAuthIdRetriever_AuthIdCallback>)

@interface MTAuthIdRetriever_$2 () {
 @public
  IOSBooleanArray *val$isFinished_;
  id<MTAuthIdRetriever_AuthIdCallback> val$callback_;
}
@end

J2OBJC_FIELD_SETTER(MTAuthIdRetriever_$2, val$isFinished_, IOSBooleanArray *)
J2OBJC_FIELD_SETTER(MTAuthIdRetriever_$2, val$callback_, id<MTAuthIdRetriever_AuthIdCallback>)

@implementation MTAuthIdRetriever

NSString * MTAuthIdRetriever_TAG_ = @"AuthId";

+ (void)requestAuthIdWithAMEndpoints:(AMEndpoints *)endpoints
withMTAuthIdRetriever_AuthIdCallback:(id<MTAuthIdRetriever_AuthIdCallback>)callback {
  MTAuthIdRetriever_requestAuthIdWithAMEndpoints_withMTAuthIdRetriever_AuthIdCallback_(endpoints, callback);
}

- (instancetype)init {
  return [super init];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "requestAuthIdWithAMEndpoints:withMTAuthIdRetriever_AuthIdCallback:", "requestAuthId", "V", 0x9, NULL },
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "TAG_", NULL, 0x1a, "Ljava.lang.String;", &MTAuthIdRetriever_TAG_,  },
  };
  static const J2ObjcClassInfo _MTAuthIdRetriever = { 1, "AuthIdRetriever", "im.actor.model.network.mtp", NULL, 0x1, 2, methods, 1, fields, 0, NULL};
  return &_MTAuthIdRetriever;
}

@end

void MTAuthIdRetriever_requestAuthIdWithAMEndpoints_withMTAuthIdRetriever_AuthIdCallback_(AMEndpoints *endpoints, id<MTAuthIdRetriever_AuthIdCallback> callback) {
  MTAuthIdRetriever_init();
  AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_TAG_, @"Requesting AuthId");
  IOSBooleanArray *isFinished = [IOSBooleanArray arrayWithLength:1];
  *IOSBooleanArray_GetRef(isFinished, 0) = NO;
  AMConnectionFactory_createConnectionWithInt_withAMConnectionEndpoint_withAMConnectionCallback_withAMConnectionFactory_CreateConnectionCallback_(0, [((AMEndpoints *) nil_chk(endpoints)) fetchEndpoint], [[[MTAuthIdRetriever_$1 alloc] initWithBooleanArray:isFinished withMTAuthIdRetriever_AuthIdCallback:callback] autorelease], [[[MTAuthIdRetriever_$2 alloc] initWithBooleanArray:isFinished withMTAuthIdRetriever_AuthIdCallback:callback] autorelease]);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(MTAuthIdRetriever)

@interface MTAuthIdRetriever_AuthIdCallback : NSObject
@end

@implementation MTAuthIdRetriever_AuthIdCallback

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onSuccessWithLong:", "onSuccess", "V", 0x401, NULL },
    { "onFailure", NULL, "V", 0x401, NULL },
  };
  static const J2ObjcClassInfo _MTAuthIdRetriever_AuthIdCallback = { 1, "AuthIdCallback", "im.actor.model.network.mtp", "AuthIdRetriever", 0x209, 2, methods, 0, NULL, 0, NULL};
  return &_MTAuthIdRetriever_AuthIdCallback;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(MTAuthIdRetriever_AuthIdCallback)

@implementation MTAuthIdRetriever_$1

- (void)onMessageWithByteArray:(IOSByteArray *)data
                       withInt:(jint)offset
                       withInt:(jint)len {
  if (IOSBooleanArray_Get(nil_chk(val$isFinished_), 0)) {
    return;
  }
  @try {
    JavaIoByteArrayInputStream *bis = [[[JavaIoByteArrayInputStream alloc] initWithByteArray:data withInt:offset withInt:len] autorelease];
    jlong reqAuthId = AMStreamingUtils_readLongWithJavaIoInputStream_(bis);
    jlong sessionId = AMStreamingUtils_readLongWithJavaIoInputStream_(bis);
    jlong messageId = AMStreamingUtils_readLongWithJavaIoInputStream_(bis);
    IOSByteArray *content = AMStreamingUtils_readProtoBytesWithJavaIoInputStream_(bis);
    jint header = IOSByteArray_Get(nil_chk(content), 0) & (jint) 0xFF;
    jlong authId = AMStreamingUtils_readLongWithByteArray_withInt_(content, 1);
    if (!IOSBooleanArray_Get(val$isFinished_, 0)) {
      *IOSBooleanArray_GetRef(val$isFinished_, 0) = YES;
      [((id<MTAuthIdRetriever_AuthIdCallback>) nil_chk(val$callback_)) onSuccessWithLong:authId];
      AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_get_TAG_(), JreStrcat("$J", @"Auth Id loaded: ", authId));
      return;
    }
  }
  @catch (JavaLangException *e) {
    AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_get_TAG_(), @"Error during parsing auth id response");
    [((JavaLangException *) nil_chk(e)) printStackTrace];
  }
  @throw [[[JavaLangRuntimeException alloc] init] autorelease];
}

- (void)onConnectionDie {
  if (!IOSBooleanArray_Get(nil_chk(val$isFinished_), 0)) {
    *IOSBooleanArray_GetRef(val$isFinished_, 0) = YES;
    [((id<MTAuthIdRetriever_AuthIdCallback>) nil_chk(val$callback_)) onFailure];
    AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_get_TAG_(), @"Connection dies");
  }
}

- (instancetype)initWithBooleanArray:(IOSBooleanArray *)capture$0
withMTAuthIdRetriever_AuthIdCallback:(id<MTAuthIdRetriever_AuthIdCallback>)capture$1 {
  MTAuthIdRetriever_$1_set_val$isFinished_(self, capture$0);
  MTAuthIdRetriever_$1_set_val$callback_(self, capture$1);
  return [super init];
}

- (void)dealloc {
  RELEASE_(val$isFinished_);
  RELEASE_(val$callback_);
  [super dealloc];
}

- (void)copyAllFieldsTo:(MTAuthIdRetriever_$1 *)other {
  [super copyAllFieldsTo:other];
  MTAuthIdRetriever_$1_set_val$isFinished_(other, val$isFinished_);
  MTAuthIdRetriever_$1_set_val$callback_(other, val$callback_);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onMessageWithByteArray:withInt:withInt:", "onMessage", "V", 0x1, NULL },
    { "onConnectionDie", NULL, "V", 0x1, NULL },
    { "initWithBooleanArray:withMTAuthIdRetriever_AuthIdCallback:", "init", NULL, 0x0, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "val$isFinished_", NULL, 0x1012, "[Z", NULL,  },
    { "val$callback_", NULL, 0x1012, "Lim.actor.model.network.mtp.AuthIdRetriever$AuthIdCallback;", NULL,  },
  };
  static const J2ObjcClassInfo _MTAuthIdRetriever_$1 = { 1, "$1", "im.actor.model.network.mtp", "AuthIdRetriever", 0x8000, 3, methods, 2, fields, 0, NULL};
  return &_MTAuthIdRetriever_$1;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(MTAuthIdRetriever_$1)

@implementation MTAuthIdRetriever_$2

- (void)onConnectionCreatedWithAMConnection:(id<AMConnection>)connection {
  if (IOSBooleanArray_Get(nil_chk(val$isFinished_), 0)) {
    return;
  }
  AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_get_TAG_(), @"Connection created");
  @try {
    JavaIoByteArrayOutputStream *baos = [[[JavaIoByteArrayOutputStream alloc] init] autorelease];
    AMStreamingUtils_writeLongWithLong_withJavaIoOutputStream_(0, baos);
    AMStreamingUtils_writeLongWithLong_withJavaIoOutputStream_(0, baos);
    AMStreamingUtils_writeLongWithLong_withJavaIoOutputStream_(0, baos);
    AMStreamingUtils_writeVarIntWithLong_withJavaIoOutputStream_(1, baos);
    AMStreamingUtils_writeByteWithInt_withJavaIoOutputStream_((jint) 0xF0, baos);
    IOSByteArray *data = [baos toByteArray];
    [((id<AMConnection>) nil_chk(connection)) postWithByteArray:data withInt:0 withInt:((IOSByteArray *) nil_chk(data))->size_];
  }
  @catch (JavaLangException *e) {
    AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_get_TAG_(), @"Error during requesting auth id");
    [((JavaLangException *) nil_chk(e)) printStackTrace];
    if (!IOSBooleanArray_Get(val$isFinished_, 0)) {
      *IOSBooleanArray_GetRef(val$isFinished_, 0) = YES;
      [((id<MTAuthIdRetriever_AuthIdCallback>) nil_chk(val$callback_)) onFailure];
    }
  }
}

- (void)onConnectionCreateError {
  if (!IOSBooleanArray_Get(nil_chk(val$isFinished_), 0)) {
    *IOSBooleanArray_GetRef(val$isFinished_, 0) = YES;
    [((id<MTAuthIdRetriever_AuthIdCallback>) nil_chk(val$callback_)) onFailure];
    AMLog_dWithNSString_withNSString_(MTAuthIdRetriever_get_TAG_(), @"Unable to create connection");
  }
}

- (instancetype)initWithBooleanArray:(IOSBooleanArray *)capture$0
withMTAuthIdRetriever_AuthIdCallback:(id<MTAuthIdRetriever_AuthIdCallback>)capture$1 {
  MTAuthIdRetriever_$2_set_val$isFinished_(self, capture$0);
  MTAuthIdRetriever_$2_set_val$callback_(self, capture$1);
  return [super init];
}

- (void)dealloc {
  RELEASE_(val$isFinished_);
  RELEASE_(val$callback_);
  [super dealloc];
}

- (void)copyAllFieldsTo:(MTAuthIdRetriever_$2 *)other {
  [super copyAllFieldsTo:other];
  MTAuthIdRetriever_$2_set_val$isFinished_(other, val$isFinished_);
  MTAuthIdRetriever_$2_set_val$callback_(other, val$callback_);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onConnectionCreatedWithAMConnection:", "onConnectionCreated", "V", 0x1, NULL },
    { "onConnectionCreateError", NULL, "V", 0x1, NULL },
    { "initWithBooleanArray:withMTAuthIdRetriever_AuthIdCallback:", "init", NULL, 0x0, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "val$isFinished_", NULL, 0x1012, "[Z", NULL,  },
    { "val$callback_", NULL, 0x1012, "Lim.actor.model.network.mtp.AuthIdRetriever$AuthIdCallback;", NULL,  },
  };
  static const J2ObjcClassInfo _MTAuthIdRetriever_$2 = { 1, "$2", "im.actor.model.network.mtp", "AuthIdRetriever", 0x8000, 3, methods, 2, fields, 0, NULL};
  return &_MTAuthIdRetriever_$2;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(MTAuthIdRetriever_$2)
