/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBus : CoreRCBus {
    BOOL  _hasLink;
    unsigned int  _lastStreamPath;
    struct CECOSDName { 
        unsigned char length; 
        unsigned char characters[14]; 
    }  _osdNameASCII;
    unsigned int  _physicalAddress;
    unsigned int  _streamPath;
    unsigned int  _systemAudioModeStatus;
    struct CECLanguage { 
        unsigned char characters[3]; 
    }  _tvLanguageCodeASCII;
}

@property (nonatomic, readonly) CoreCECDevice *activeSource;
@property (nonatomic) BOOL hasLink;
@property (nonatomic, readonly) unsigned int lastStreamPath;
@property (nonatomic, readonly) NSString *osdName;
@property (nonatomic) struct CECOSDName { unsigned char x1; unsigned char x2[14]; } osdNameASCII;
@property (nonatomic) unsigned int physicalAddress;
@property (nonatomic, readonly) CoreCECPhysicalDevice *rootPhysicalDevice;
@property (nonatomic) unsigned int streamPath;
@property (nonatomic) unsigned int systemAudioModeStatus;
@property (nonatomic, readonly) NSString *tvLanguageCode;
@property (nonatomic) struct CECLanguage { unsigned char x1[3]; } tvLanguageCodeASCII;

+ (BOOL)supportsSecureCoding;

- (id)activeSource;
- (id)addDeviceWithType:(unsigned int)arg1 error:(id*)arg2;
- (id)delegate;
- (id)description;
- (id)deviceOnBusWithLogicalAddress:(unsigned char)arg1;
- (void)didChangeActiveSourceFrom:(id)arg1 to:(id)arg2;
- (void)didChangeLinkState:(BOOL)arg1 physicalAddress:(unsigned int)arg2;
- (void)didUpdateProperties:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasLink;
- (id)init;
- (id)initWithBus:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkState:(BOOL)arg1 physicalAddress:(unsigned int)arg2;
- (unsigned int)lastStreamPath;
- (id)mergeProperties;
- (void)notifyDelegateLinkStateUpdated;
- (id)osdName;
- (struct CECOSDName { unsigned char x1; unsigned char x2[14]; })osdNameASCII;
- (unsigned int)physicalAddress;
- (id)rootPhysicalDevice;
- (void)setDelegate:(id)arg1;
- (void)setHasLink:(BOOL)arg1;
- (void)setLinkState:(BOOL)arg1 physicalAddress:(unsigned int)arg2;
- (BOOL)setOSDName:(id)arg1 error:(id*)arg2;
- (void)setOsdNameASCII:(struct CECOSDName { unsigned char x1; unsigned char x2[14]; })arg1;
- (void)setPhysicalAddress:(unsigned int)arg1;
- (void)setStreamPath:(unsigned int)arg1;
- (void)setSystemAudioModeStatus:(unsigned int)arg1;
- (BOOL)setTvLanguageCode:(id)arg1 error:(id*)arg2;
- (void)setTvLanguageCodeASCII:(struct CECLanguage { unsigned char x1[3]; })arg1;
- (unsigned int)streamPath;
- (unsigned int)systemAudioModeStatus;
- (id)tvLanguageCode;
- (struct CECLanguage { unsigned char x1[3]; })tvLanguageCodeASCII;

@end