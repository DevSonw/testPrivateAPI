/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTServerBag : NSObject {
    int  _type;
}

@property (readonly) BOOL allowSelfSignedCertificates;
@property (readonly) BOOL allowUnsignedBags;
@property (readonly, retain) NSString *apsEnvironmentName;
@property (readonly, retain) NSURL *bagURL;
@property (readonly) BOOL isInDebilitatedMode;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;
@property (readonly) BOOL isServerAvailable;

+ (id)_sharedInstance;
+ (id)_sharedInstanceForType:(int)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(int)arg1;

- (id)_bag;
- (id)_cachedBag;
- (BOOL)allowSelfSignedCertificates;
- (BOOL)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (void)dealloc;
- (void)forceBagLoad;
- (id)initWithBagType:(int)arg1;
- (BOOL)isInDebilitatedMode;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (BOOL)isServerAvailable;
- (id)objectForKey:(id)arg1;
- (void)startBagLoad;
- (id)urlWithKey:(id)arg1;

@end