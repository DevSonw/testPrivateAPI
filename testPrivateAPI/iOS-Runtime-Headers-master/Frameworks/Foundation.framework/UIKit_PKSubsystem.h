/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface UIKit_PKSubsystem : NSObject <PKModularService> {
    NSDictionary * _infoDictionary;
    BOOL  _initialized;
    BOOL  _plugInKitProcess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSDictionary *infoDictionary;
@property (getter=isPlugInKitProcess, nonatomic) BOOL plugInKitProcess;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedInstance;

- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)endUsing:(id)arg1;
- (id)infoDictionary;
- (BOOL)isPlugInKitProcess;
- (void)setInfoDictionary:(id)arg1;
- (void)setPlugInKitProcess:(BOOL)arg1;

@end
