//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/util/StreamingUtils.java
//

#ifndef _AMStreamingUtils_H_
#define _AMStreamingUtils_H_

@class IOSByteArray;
@class IOSLongArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoRandomAccessFile;

#include "J2ObjC_header.h"

@interface AMStreamingUtils : NSObject {
}

+ (IOSByteArray *)intToBytesWithInt:(jint)v;

+ (void)writeByteWithInt:(jint)v
  withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeByteWithByte:(jbyte)v
   withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeIntWithInt:(jint)v
 withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeLongWithLong:(jlong)v
   withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeDoubleWithDouble:(jdouble)v
       withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeBytesWithByteArray:(IOSByteArray *)data
         withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeBytesWithByteArray:(IOSByteArray *)data
                        withInt:(jint)offset
                        withInt:(jint)len
         withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (jint)readIntWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (jlong)readUIntWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (jlong)readLongWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (jdouble)readDoubleWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (IOSByteArray *)readBytesWithInt:(jint)count
             withJavaIoInputStream:(JavaIoInputStream *)stream;

+ (IOSByteArray *)readBytesWithInt:(jint)count
        withJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)file;

+ (void)skipBytesWithInt:(jint)count
   withJavaIoInputStream:(JavaIoInputStream *)stream;

+ (void)readBytesWithByteArray:(IOSByteArray *)buffer
                       withInt:(jint)offset
                       withInt:(jint)count
         withJavaIoInputStream:(JavaIoInputStream *)stream;

+ (jbyte)readByteWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (jint)readIntWithByteArray:(IOSByteArray *)src;

+ (jint)readIntWithByteArray:(IOSByteArray *)src
                     withInt:(jint)offset;

+ (jlong)readUIntWithByteArray:(IOSByteArray *)src;

+ (jlong)readUIntWithByteArray:(IOSByteArray *)src
                       withInt:(jint)offset;

+ (jlong)readLongWithByteArray:(IOSByteArray *)src
                       withInt:(jint)offset;

+ (jlong)readVarIntWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (void)writeVarIntWithLong:(jlong)i
     withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (jint)varintSizeWithLong:(jlong)value;

+ (jint)stringSizeWithNSString:(NSString *)s;

+ (IOSByteArray *)readProtoBytesWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (void)writeProtoBytesWithByteArray:(IOSByteArray *)data
              withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (void)writeProtoBytesWithByteArray:(IOSByteArray *)data
                             withInt:(jint)offset
                             withInt:(jint)len
              withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (IOSLongArray *)readProtoLongsWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (void)writeProtoLongsWithLongArray:(IOSLongArray *)values
              withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (NSString *)readProtoStringWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (void)writeProtoStringWithNSString:(NSString *)value
              withJavaIoOutputStream:(JavaIoOutputStream *)stream;

+ (jboolean)readProtoBoolWithJavaIoInputStream:(JavaIoInputStream *)stream;

+ (void)writeProtoBoolWithBoolean:(jboolean)v
           withJavaIoOutputStream:(JavaIoOutputStream *)stream;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AMStreamingUtils)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT IOSByteArray *AMStreamingUtils_intToBytesWithInt_(jint v);

FOUNDATION_EXPORT void AMStreamingUtils_writeByteWithInt_withJavaIoOutputStream_(jint v, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeByteWithByte_withJavaIoOutputStream_(jbyte v, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeIntWithInt_withJavaIoOutputStream_(jint v, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeLongWithLong_withJavaIoOutputStream_(jlong v, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeDoubleWithDouble_withJavaIoOutputStream_(jdouble v, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeBytesWithByteArray_withJavaIoOutputStream_(IOSByteArray *data, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeBytesWithByteArray_withInt_withInt_withJavaIoOutputStream_(IOSByteArray *data, jint offset, jint len, JavaIoOutputStream *stream);

FOUNDATION_EXPORT jint AMStreamingUtils_readIntWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT jlong AMStreamingUtils_readUIntWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT jlong AMStreamingUtils_readLongWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT jdouble AMStreamingUtils_readDoubleWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT IOSByteArray *AMStreamingUtils_readBytesWithInt_withJavaIoInputStream_(jint count, JavaIoInputStream *stream);

FOUNDATION_EXPORT IOSByteArray *AMStreamingUtils_readBytesWithInt_withJavaIoRandomAccessFile_(jint count, JavaIoRandomAccessFile *file);

FOUNDATION_EXPORT void AMStreamingUtils_skipBytesWithInt_withJavaIoInputStream_(jint count, JavaIoInputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_readBytesWithByteArray_withInt_withInt_withJavaIoInputStream_(IOSByteArray *buffer, jint offset, jint count, JavaIoInputStream *stream);

FOUNDATION_EXPORT jbyte AMStreamingUtils_readByteWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT jint AMStreamingUtils_readIntWithByteArray_(IOSByteArray *src);

FOUNDATION_EXPORT jint AMStreamingUtils_readIntWithByteArray_withInt_(IOSByteArray *src, jint offset);

FOUNDATION_EXPORT jlong AMStreamingUtils_readUIntWithByteArray_(IOSByteArray *src);

FOUNDATION_EXPORT jlong AMStreamingUtils_readUIntWithByteArray_withInt_(IOSByteArray *src, jint offset);

FOUNDATION_EXPORT jlong AMStreamingUtils_readLongWithByteArray_withInt_(IOSByteArray *src, jint offset);

FOUNDATION_EXPORT jlong AMStreamingUtils_readVarIntWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeVarIntWithLong_withJavaIoOutputStream_(jlong i, JavaIoOutputStream *stream);

FOUNDATION_EXPORT jint AMStreamingUtils_varintSizeWithLong_(jlong value);

FOUNDATION_EXPORT jint AMStreamingUtils_stringSizeWithNSString_(NSString *s);

FOUNDATION_EXPORT IOSByteArray *AMStreamingUtils_readProtoBytesWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeProtoBytesWithByteArray_withJavaIoOutputStream_(IOSByteArray *data, JavaIoOutputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeProtoBytesWithByteArray_withInt_withInt_withJavaIoOutputStream_(IOSByteArray *data, jint offset, jint len, JavaIoOutputStream *stream);

FOUNDATION_EXPORT IOSLongArray *AMStreamingUtils_readProtoLongsWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeProtoLongsWithLongArray_withJavaIoOutputStream_(IOSLongArray *values, JavaIoOutputStream *stream);

FOUNDATION_EXPORT NSString *AMStreamingUtils_readProtoStringWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeProtoStringWithNSString_withJavaIoOutputStream_(NSString *value, JavaIoOutputStream *stream);

FOUNDATION_EXPORT jboolean AMStreamingUtils_readProtoBoolWithJavaIoInputStream_(JavaIoInputStream *stream);

FOUNDATION_EXPORT void AMStreamingUtils_writeProtoBoolWithBoolean_withJavaIoOutputStream_(jboolean v, JavaIoOutputStream *stream);
CF_EXTERN_C_END

typedef AMStreamingUtils ImActorModelUtilStreamingUtils;

J2OBJC_TYPE_LITERAL_HEADER(AMStreamingUtils)

#endif // _AMStreamingUtils_H_
