/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemLink : NSObject <NSCopying> {
    int  _linkTarget;
    int  _linkType;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) int linkTarget;
@property (nonatomic) int linkType;
@property (nonatomic, copy) NSString *title;

- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)linkTarget;
- (int)linkType;
- (void)setLinkTarget:(int)arg1;
- (void)setLinkType:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end