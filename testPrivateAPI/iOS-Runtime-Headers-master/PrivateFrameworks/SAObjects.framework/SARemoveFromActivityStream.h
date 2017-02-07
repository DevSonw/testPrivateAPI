/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSDate *fromDate;
@property (nonatomic, copy) NSString *streamType;
@property (nonatomic, copy) NSString *taskType;
@property (nonatomic, copy) NSDate *toDate;
@property (nonatomic, copy) NSString *visibility;

+ (id)removeFromActivityStream;
+ (id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)activityType;
- (id)encodedClassName;
- (id)fromDate;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setActivityType:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setStreamType:(id)arg1;
- (void)setTaskType:(id)arg1;
- (void)setToDate:(id)arg1;
- (void)setVisibility:(id)arg1;
- (id)streamType;
- (id)taskType;
- (id)toDate;
- (id)visibility;

@end
