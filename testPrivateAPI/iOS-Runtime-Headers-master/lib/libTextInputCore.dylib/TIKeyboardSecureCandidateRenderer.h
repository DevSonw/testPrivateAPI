/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIKeyboardSecureCandidateRenderer : NSObject {
    NSMutableDictionary * _accessibilityLabelCache;
    CAContext * _context;
    NSString * _localeIdentifier;
    NSMutableDictionary * _secureCandidateCache;
}

@property (nonatomic, readonly, retain) CAContext *context;
@property (nonatomic, readonly, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSMutableDictionary *secureCandidateCache;

+ (id)allRenderers;

- (id)_truncationSentinel;
- (id)accessibilityLabelForSlotID:(unsigned int)arg1;
- (id)accessibilityLabelsForInputs:(id)arg1 headers:(id)arg2 truncationSentinel:(id)arg3;
- (struct __CFArray { }*)arrayOfContexts:(unsigned int)arg1 withRenderTraits:(id)arg2;
- (void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned int)arg2;
- (id)cachedCandidateForSecureCandidate:(id)arg1;
- (void)clearSecureCandidateCache;
- (id)context;
- (void)dealloc;
- (struct CGImage { }*)imageForSendCurrentLocationWithRenderTraits:(id)arg1;
- (struct __CFArray { }*)imagesFromContexts:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)imagesFromPredictedItems:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id*)arg3;
- (id)init;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)localizedApplicationNameWithBundleIdentifier:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)secureCandidateCache;
- (void)setSecureCandidateCache:(id)arg1;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1;
- (id)slotIDsFromPredictedItems:(id)arg1 withRenderTraits:(id)arg2;

@end
