//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/com/droidkit/actors/messages/PoisonPill.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "com/droidkit/actors/messages/PoisonPill.h"

@interface ComDroidkitActorsMessagesPoisonPill ()
- (instancetype)init;
@end

BOOL ComDroidkitActorsMessagesPoisonPill_initialized = NO;

@implementation ComDroidkitActorsMessagesPoisonPill

ComDroidkitActorsMessagesPoisonPill * ComDroidkitActorsMessagesPoisonPill_INSTANCE_;

- (instancetype)init {
  return [super init];
}

- (NSString *)description {
  return @"PoisonPill";
}

+ (void)initialize {
  if (self == [ComDroidkitActorsMessagesPoisonPill class]) {
    JreStrongAssignAndConsume(&ComDroidkitActorsMessagesPoisonPill_INSTANCE_, nil, [[ComDroidkitActorsMessagesPoisonPill alloc] init]);
    J2OBJC_SET_INITIALIZED(ComDroidkitActorsMessagesPoisonPill)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "PoisonPill", NULL, 0x2, NULL },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "INSTANCE_", NULL, 0x19, "Lcom.droidkit.actors.messages.PoisonPill;", &ComDroidkitActorsMessagesPoisonPill_INSTANCE_,  },
  };
  static const J2ObjcClassInfo _ComDroidkitActorsMessagesPoisonPill = { 1, "PoisonPill", "com.droidkit.actors.messages", NULL, 0x11, 2, methods, 1, fields, 0, NULL};
  return &_ComDroidkitActorsMessagesPoisonPill;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComDroidkitActorsMessagesPoisonPill)
