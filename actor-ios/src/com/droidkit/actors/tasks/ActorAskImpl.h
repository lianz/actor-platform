//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/com/droidkit/actors/tasks/ActorAskImpl.java
//

#ifndef _ComDroidkitActorsTasksActorAskImpl_H_
#define _ComDroidkitActorsTasksActorAskImpl_H_

@class ComDroidkitActorsMessagesDeadLetter;
@class ComDroidkitActorsTasksAskFuture;
@class ComDroidkitActorsTasksMessagesTaskError;
@class ComDroidkitActorsTasksMessagesTaskProgress;
@class ComDroidkitActorsTasksMessagesTaskResult;
@class ComDroidkitActorsTasksMessagesTaskTimeout;
@class DAActorRef;
@class IOSBooleanArray;
@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilHashMap;

#include "J2ObjC_header.h"
#include "com/droidkit/actors/extensions/ActorExtension.h"
#include "com/droidkit/actors/tasks/AskCallback.h"

@interface ComDroidkitActorsTasksActorAskImpl : NSObject < ComDroidkitActorsExtensionsActorExtension > {
}

- (instancetype)initWithDAActorRef:(DAActorRef *)self_;

- (ComDroidkitActorsTasksAskFuture *)combineWithComDroidkitActorsTasksAskFutureArray:(IOSObjectArray *)futures;

- (ComDroidkitActorsTasksAskFuture *)askWithDAActorRef:(DAActorRef *)ref
                                              withLong:(jlong)timeout
                 withComDroidkitActorsTasksAskCallback:(id<ComDroidkitActorsTasksAskCallback>)callback;

- (void)preStart;

- (jboolean)onReceiveWithId:(id)message;

- (void)postStop;

- (jboolean)onTaskCancelledWithInt:(jint)reqId;

@end

J2OBJC_EMPTY_STATIC_INIT(ComDroidkitActorsTasksActorAskImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComDroidkitActorsTasksActorAskImpl)

@interface ComDroidkitActorsTasksActorAskImpl_AskContainer : NSObject {
 @public
  ComDroidkitActorsTasksAskFuture *future_;
  DAActorRef *ref_;
  jint requestId_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComDroidkitActorsTasksActorAskImpl_AskContainer)

J2OBJC_FIELD_SETTER(ComDroidkitActorsTasksActorAskImpl_AskContainer, future_, ComDroidkitActorsTasksAskFuture *)
J2OBJC_FIELD_SETTER(ComDroidkitActorsTasksActorAskImpl_AskContainer, ref_, DAActorRef *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComDroidkitActorsTasksActorAskImpl_AskContainer)

@interface ComDroidkitActorsTasksActorAskImpl_CombineContainer : NSObject {
 @public
  jboolean isCompleted_;
  IOSObjectArray *results_;
  IOSBooleanArray *completed_;
  IOSObjectArray *futures_;
  IOSObjectArray *callbacks_;
}

- (instancetype)initWithComDroidkitActorsTasksActorAskImpl:(ComDroidkitActorsTasksActorAskImpl *)outer$
                                                   withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(ComDroidkitActorsTasksActorAskImpl_CombineContainer)

J2OBJC_FIELD_SETTER(ComDroidkitActorsTasksActorAskImpl_CombineContainer, results_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComDroidkitActorsTasksActorAskImpl_CombineContainer, completed_, IOSBooleanArray *)
J2OBJC_FIELD_SETTER(ComDroidkitActorsTasksActorAskImpl_CombineContainer, futures_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(ComDroidkitActorsTasksActorAskImpl_CombineContainer, callbacks_, IOSObjectArray *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComDroidkitActorsTasksActorAskImpl_CombineContainer)

@interface ComDroidkitActorsTasksActorAskImpl_$1 : NSObject < ComDroidkitActorsTasksAskCallback > {
}

- (void)onResultWithId:(id)result;

- (void)onErrorWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)initWithComDroidkitActorsTasksActorAskImpl_CombineContainer:(ComDroidkitActorsTasksActorAskImpl_CombineContainer *)capture$0
                                                                    withInt:(jint)capture$1
                                        withComDroidkitActorsTasksAskFuture:(ComDroidkitActorsTasksAskFuture *)capture$2;

@end

J2OBJC_EMPTY_STATIC_INIT(ComDroidkitActorsTasksActorAskImpl_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComDroidkitActorsTasksActorAskImpl_$1)

#endif // _ComDroidkitActorsTasksActorAskImpl_H_
