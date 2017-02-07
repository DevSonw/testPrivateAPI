/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationRequestHiddenPreviewContentProvider : NCNotificationRequestContentProvider {
    unsigned int  _coalesceCount;
    NSString * _topic;
}

@property (nonatomic) unsigned int coalesceCount;
@property (nonatomic, copy) NSString *topic;

- (void).cxx_destruct;
- (unsigned int)coalesceCount;
- (void)incrementCoalesceCount;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;
- (id)interfaceActions;
- (id)primarySubtitleText;
- (id)secondaryText;
- (void)setCoalesceCount:(unsigned int)arg1;
- (void)setTopic:(id)arg1;
- (id)thumbnail;
- (id)topic;

@end
