/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKRandomDistribution : NSObject <GKRandom> {
    int  _highest;
    int  _lowest;
    <GKRandom> * _source;
}

@property (nonatomic, readonly) int highestValue;
@property (nonatomic, readonly) int lowestValue;
@property (nonatomic, readonly) unsigned int numberOfPossibleOutcomes;

+ (id)d20;
+ (id)d6;
+ (id)distributionForDieWithSideCount:(int)arg1;
+ (id)distributionWithLowestValue:(int)arg1 highestValue:(int)arg2;

- (void).cxx_destruct;
- (int)highestValue;
- (id)init;
- (id)initWithRandomSource:(id)arg1 lowestValue:(int)arg2 highestValue:(int)arg3;
- (int)lowestValue;
- (BOOL)nextBool;
- (int)nextInt;
- (unsigned int)nextIntWithUpperBound:(unsigned int)arg1;
- (float)nextUniform;
- (unsigned int)numberOfPossibleOutcomes;

@end
