/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHandlePushNotificationResult : NSObject <NSCopying> {
    BOOL  _handled;
    NSSet * _recordZones;
}

@property (getter=wasHandled, nonatomic) BOOL handled;
@property (nonatomic, retain) NSSet *recordZones;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)recordZones;
- (void)setHandled:(BOOL)arg1;
- (void)setRecordZones:(id)arg1;
- (BOOL)wasHandled;

@end
