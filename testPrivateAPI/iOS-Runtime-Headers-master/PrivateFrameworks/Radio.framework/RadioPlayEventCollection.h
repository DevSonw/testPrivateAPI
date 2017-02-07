/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEventCollection : NSObject <NSCopying, NSMutableCopying> {
    NSString * _deviceName;
    NSMapTable * _stationInformationToPlayEvents;
}

@property (nonatomic, readonly, copy) NSString *deviceName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (unsigned int)hash;
- (id)initWithDeviceName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playInfoDictionary;

@end
