/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings {
    NEIPv4Settings * _IPv4Settings;
    NEIPv6Settings * _IPv6Settings;
    NSNumber * _MTU;
    NSNumber * _tunnelOverheadBytes;
}

@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;
@property (copy) NSNumber *MTU;
@property (copy) NSNumber *tunnelOverheadBytes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IPv4Settings;
- (id)IPv6Settings;
- (id)MTU;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIPv4Settings:(id)arg1;
- (void)setIPv6Settings:(id)arg1;
- (void)setMTU:(id)arg1;
- (void)setTunnelOverheadBytes:(id)arg1;
- (id)tunnelOverheadBytes;

@end
