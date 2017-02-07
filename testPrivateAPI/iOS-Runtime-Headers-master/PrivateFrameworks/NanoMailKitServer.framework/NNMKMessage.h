/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding> {
    NSString * _accountId;
    NSArray * _bcc;
    NSArray * _cc;
    NSString * _conversationId;
    NSDate * _dateReceived;
    NSDate * _dateSent;
    NSString * _from;
    NSString * _messageId;
    NSString * _messageIdHeader;
    NSString * _notificationMessageId;
    NSString * _preview;
    unsigned int  _status;
    NSString * _subject;
    NSArray * _to;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSArray *bcc;
@property (nonatomic, retain) NSArray *cc;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSDate *dateReceived;
@property (nonatomic, retain) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *from;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSString *messageIdHeader;
@property (nonatomic, retain) NSString *notificationMessageId;
@property (nonatomic, retain) NSString *preview;
@property (nonatomic) unsigned int status;
@property (nonatomic, retain) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *to;

+ (id)URLForMessageId:(id)arg1;
+ (BOOL)_isOldMessageIdFormat:(id)arg1;
+ (BOOL)isMessageURL:(id)arg1;
+ (BOOL)messageHasMultipleRecipients:(id)arg1;
+ (id)messageIdForURL:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (void)addState:(unsigned int)arg1;
- (id)bcc;
- (id)cc;
- (BOOL)checkState:(unsigned int)arg1;
- (id)conversationId;
- (id)dateReceived;
- (id)dateSent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (id)initWithCoder:(id)arg1;
- (id)messageId;
- (id)messageIdHeader;
- (id)notificationMessageId;
- (id)preview;
- (void)removeState:(unsigned int)arg1;
- (void)setAccountId:(id)arg1;
- (void)setBcc:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setNotificationMessageId:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (unsigned int)status;
- (id)subject;
- (id)to;

@end
