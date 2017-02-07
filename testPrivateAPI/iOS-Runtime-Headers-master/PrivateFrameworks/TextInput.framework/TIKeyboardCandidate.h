/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {
    NSString * _alternativeText;
    NSString * _annotationText;
    unsigned int  _indexForMetrics;
    unsigned int  _slotID;
}

@property (nonatomic, copy) NSString *alternativeText;
@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic, readonly) NSString *candidate;
@property (getter=isCompletionCandidate, nonatomic, readonly) BOOL completionCandidate;
@property (nonatomic, readonly) int cursorMovement;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int deleteCount;
@property (readonly, copy) NSString *description;
@property (getter=isEmojiCandidate, nonatomic, readonly) BOOL emojiCandidate;
@property (getter=isExtensionCandidate, nonatomic, readonly) BOOL extensionCandidate;
@property (getter=isFullwidthCandidate, nonatomic, readonly) BOOL fullwidthCandidate;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int indexForMetrics;
@property (getter=isInlineCompletionCandidate, nonatomic, readonly) BOOL inlineCompletionCandidate;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) BOOL isAddress;
@property (nonatomic, readonly) BOOL isAutocorrection;
@property (nonatomic, readonly) BOOL isForShortcutConversion;
@property (nonatomic, readonly) BOOL isSendCurrentLocation;
@property (nonatomic, readonly) BOOL isSlottedCandidate;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly, retain) TIProactiveTrigger *proactiveTrigger;
@property (getter=isSecureContentCandidate, nonatomic, readonly) BOOL secureContentCandidate;
@property (nonatomic) unsigned int slotID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int usageTrackingMask;
@property (nonatomic, readonly) unsigned int wordOriginFeedbackID;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)alternativeText;
- (id)annotationText;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)cursorMovement;
- (void)dealloc;
- (unsigned int)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (unsigned int)indexForMetrics;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (BOOL)isAddress;
- (BOOL)isAutocorrection;
- (BOOL)isCompletionCandidate;
- (BOOL)isEmojiCandidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (BOOL)isFullwidthCandidate;
- (BOOL)isInlineCompletionCandidate;
- (BOOL)isSecureContentCandidate;
- (BOOL)isSendCurrentLocation;
- (id)label;
- (id)proactiveTrigger;
- (void)setAlternativeText:(id)arg1;
- (void)setAnnotationText:(id)arg1;
- (void)setIndexForMetrics:(unsigned int)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (unsigned int)slotID;
- (unsigned int)usageTrackingMask;
- (unsigned int)wordOriginFeedbackID;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)isSlottedCandidate;

@end
