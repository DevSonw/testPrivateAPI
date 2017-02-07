/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAActivityStream : SADomainObject

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, copy) NSString *taskType;

+ (id)activityStream;
+ (id)activityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)activities;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setActivities:(id)arg1;
- (void)setTaskType:(id)arg1;
- (id)taskType;

@end
