/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface _Locationd : NSObject <CLIntersiloServiceProtocol> {
    BOOL  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (BOOL)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (void)setValid:(BOOL)arg1;
- (BOOL)valid;

@end
