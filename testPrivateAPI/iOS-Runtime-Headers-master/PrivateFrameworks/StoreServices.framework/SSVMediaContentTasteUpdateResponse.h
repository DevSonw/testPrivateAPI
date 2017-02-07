/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteUpdateResponse : NSObject <NSSecureCoding, SSXPCCoding> {
    BOOL  _cachedResponse;
    NSArray * _contentTasteItems;
    NSDate * _expirationDate;
    unsigned long long  _responseRevisionID;
}

@property (getter=isCachedResponse, nonatomic) BOOL cachedResponse;
@property (nonatomic, copy) NSArray *contentTasteItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long long responseRevisionID;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentTasteItems;
- (id)copyXPCEncoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isCachedResponse;
- (unsigned long long)responseRevisionID;
- (void)setCachedResponse:(BOOL)arg1;
- (void)setContentTasteItems:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setResponseRevisionID:(unsigned long long)arg1;

@end
