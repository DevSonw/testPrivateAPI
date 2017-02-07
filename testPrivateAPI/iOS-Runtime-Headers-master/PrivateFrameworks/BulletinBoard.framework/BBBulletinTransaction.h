/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinTransaction : NSObject {
    NSString * _bulletinID;
    unsigned int  _transactionID;
}

@property (nonatomic, readonly, copy) NSString *bulletinID;
@property (nonatomic, readonly) unsigned int transactionID;

+ (id)transactionWithBulletinID:(id)arg1;

- (void).cxx_destruct;
- (id)bulletinID;
- (id)description;
- (unsigned int)incrementTransactionID;
- (id)initWithBulletinID:(id)arg1;
- (unsigned int)transactionID;

@end