/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAttachment : NSObject {
    NSDate * _createdDate;
    NSString * _guid;
    BOOL  _isSticker;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)createdDate;
- (id)description;
- (id)fileTransfer;
- (id)guid;
- (id)initWithPath:(id)arg1 guid:(id)arg2;
- (id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(BOOL)arg4;
- (BOOL)isSticker;
- (id)path;

@end
