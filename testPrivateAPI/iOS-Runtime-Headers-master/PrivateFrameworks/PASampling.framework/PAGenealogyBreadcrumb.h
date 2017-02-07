/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAGenealogyBreadcrumb : PAGenealogyTimestampedMessage <PASerializable> {
    NSString * _message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)initWithMessage:(id)arg1 atMachTime:(double)arg2 withActivityId:(unsigned long long)arg3;
- (id)initWithSerializedGenealogyBreadcrumb:(const struct { unsigned long long x1; double x2; unsigned long long x3; long long x4; }*)arg1;
- (id)message;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long)sizeInBytesForSerializedVersion;

@end
