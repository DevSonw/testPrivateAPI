/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFData : NSData <NSCopying, NSMutableCopying> {
    NSData * _internal;
    NSData * _parent;
    NSString * _path;
    BOOL  _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned int)arg1;

- (id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2;
- (id)_initWithFile:(id)arg1;
- (id)_initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 from:(id)arg2 retainingParent:(BOOL)arg3;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithImmutableData:(id)arg1;
- (unsigned int)length;
- (BOOL)mf_immutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
