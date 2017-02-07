/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHLStartWorkout : SADomainCommand

@property (nonatomic) BOOL isOpenGoal;
@property (nonatomic) BOOL skipActivitySetup;
@property (nonatomic, retain) SAHLWorkoutGoal *workoutGoal;
@property (nonatomic, retain) SAHLWorkoutType *workoutType;
@property (nonatomic, copy) NSString *workoutUserMode;

+ (id)startWorkout;
+ (id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)isOpenGoal;
- (BOOL)requiresResponse;
- (void)setIsOpenGoal:(BOOL)arg1;
- (void)setSkipActivitySetup:(BOOL)arg1;
- (void)setWorkoutGoal:(id)arg1;
- (void)setWorkoutType:(id)arg1;
- (void)setWorkoutUserMode:(id)arg1;
- (BOOL)skipActivitySetup;
- (id)workoutGoal;
- (id)workoutType;
- (id)workoutUserMode;

@end