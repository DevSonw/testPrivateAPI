/* Generated by RuntimeBrowser.
 */

@protocol PKPassbookSettingsDataSource <NSObject>

@required

- (BOOL)deviceInRestrictedMode;
- (BOOL)deviceSupportsInAppPayments;
- (<PKPaymentOptionsProtocol> *)optionsDelegate;
- (<PKPassLibraryDataProvider> *)passLibraryDataProvider;
- (<PKPaymentDataProvider> *)paymentDataProvider;
- (NSString *)secureElementID;
- (BOOL)secureElementIsProductionSigned;
- (<PKPaymentSetupDelegate> *)setupDelegate;

@optional

- (NSString *)deviceName;
- (BOOL)hasFelicaSecureElement;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSString *, void*
- (NSArray *)setupFeaturedNetworksForDevice;

@end
