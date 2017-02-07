/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleAccessory : NSObject {
    EAAccessory * _accessory;
    NSArray * _accessoryProtocols;
    NSString * _bluetoothAddress;
    NSData * _certificateSerialNumber;
    NSNumber * _connectionID;
    BOOL  _supportsUSBCarPlay;
    BOOL  _supportsWiredBluetoothPairing;
    BOOL  _supportsWirelessCarPlay;
    NSString * _vehicleName;
}

@property (nonatomic) EAAccessory *accessory;
@property (nonatomic, retain) NSArray *accessoryProtocols;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic, retain) NSNumber *connectionID;
@property (nonatomic) BOOL supportsUSBCarPlay;
@property (nonatomic) BOOL supportsWiredBluetoothPairing;
@property (nonatomic) BOOL supportsWirelessCarPlay;
@property (nonatomic, retain) NSString *vehicleName;

- (void).cxx_destruct;
- (BOOL)_updateName;
- (id)accessory;
- (id)accessoryProtocols;
- (void)beginWiredBluetoothPairing:(id /* block */)arg1;
- (id)bluetoothAddress;
- (id)certificateSerialNumber;
- (id)connectionID;
- (id)description;
- (id)displayName;
- (BOOL)isBluetoothConnected;
- (void)requestWiFiCredentials;
- (void)sendDeviceTransportIdentifiers;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setConnectionID:(id)arg1;
- (void)setSupportsUSBCarPlay:(BOOL)arg1;
- (void)setSupportsWiredBluetoothPairing:(BOOL)arg1;
- (void)setSupportsWirelessCarPlay:(BOOL)arg1;
- (void)setVehicleName:(id)arg1;
- (BOOL)supportsUSBCarPlay;
- (BOOL)supportsWiredBluetoothPairing;
- (BOOL)supportsWirelessCarPlay;
- (id)vehicleName;

@end
