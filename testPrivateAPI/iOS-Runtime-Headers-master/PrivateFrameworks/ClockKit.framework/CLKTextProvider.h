/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKTextProvider : NSObject <NSCopying, NSSecureCoding> {
    struct NSNumber { Class x1; } * _30fpsTimerToken;
    NSMutableDictionary * _cachesByKey;
    CLKTextProviderCache * _defaultCache;
    BOOL  _finalized;
    struct NSNumber { Class x1; } * _minuteTimerToken;
    unsigned int  _nextUpdateToken;
    BOOL  _paused;
    NSMutableArray * _recentCacheKeys;
    struct NSNumber { Class x1; } * _secondTimerToken;
    int  _shrinkTextPreference;
    int  _timeTravelUpdateFrequency;
    UIColor * _tintColor;
    NSMutableDictionary * _updateHandlersByToken;
    BOOL  _useMonospacedNumbersForTimeTravel;
}

@property (nonatomic) BOOL paused;
@property (nonatomic) int shrinkTextPreference;
@property (nonatomic) int timeTravelUpdateFrequency;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) BOOL useMonospacedNumbersForTimeTravel;

+ (id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithFormat:(id)arg1;
+ (id)textProviderWithFormat:(id)arg1 arguments:(void*)arg2;
+ (id)textProviderWithJSONObjectRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_cacheForKey:(id)arg1;
- (void)_commonInit;
- (id)_defaultCache;
- (id)_description;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (void)_localeChanged;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (void)_maybeStartOrStopUpdates;
- (void)_pruneCacheKeysIfNecessary;
- (id)_sessionAttributedTextForIndex:(unsigned int)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(BOOL)arg2 designatorExists:(BOOL*)arg3;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(BOOL*)arg2;
- (void)_update;
- (int)_updateFrequency;
- (void)_validate;
- (id)attributedString;
- (id)attributedTextAndSize:(struct CGSize { float x1; float x2; }*)arg1 forMaxWidth:(float)arg2 withStyle:(id)arg3 now:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (BOOL)paused;
- (id)sessionAttributedTextForIndex:(unsigned int)arg1 withStyle:(id)arg2;
- (void)setPaused:(BOOL)arg1;
- (void)setShrinkTextPreference:(int)arg1;
- (void)setTimeTravelUpdateFrequency:(int)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseMonospacedNumbersForTimeTravel:(BOOL)arg1;
- (int)shrinkTextPreference;
- (struct NSNumber { Class x1; }*)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (int)timeTravelUpdateFrequency;
- (id)tintColor;
- (BOOL)useMonospacedNumbersForTimeTravel;
- (void)validate;

@end
