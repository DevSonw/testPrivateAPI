/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, readonly, copy) NSString *transferGUID;

- (void).cxx_destruct;
- (unsigned int)balloonCorners;
- (Class)balloonViewClass;
- (BOOL)canCopy;
- (BOOL)canExport;
- (BOOL)canForward;
- (id)composition;
- (id)description;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (struct CGSize { float x1; float x2; })loadSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)mediaObject;
- (id)pasteboardItems;
- (void)setMediaObject:(id)arg1;
- (BOOL)stickersSnapToPoint;
- (id)transferGUID;

@end