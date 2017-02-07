/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)canBePerformedByOpeningURL;
- (int)interactionType;
- (id)localizedName;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)performFromView:(id)arg1;
- (id)viewController;

@end
