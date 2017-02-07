/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputContextHistory : NSObject {
    TIInputContextHistory * _tiInputContextHistory;
}

@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) TIInputContextHistory *tiInputContextHistory;

- (void).cxx_destruct;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)recipientIdentifiers;
- (id)tiInputContextHistory;

@end
