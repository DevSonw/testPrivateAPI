/* Generated by RuntimeBrowser.
 */

@protocol _MSStickerSendManagerDelegate <NSObject>

@required

- (void)insertSticker:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <MSStickerPrivate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDragSticker:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: <MSStickerPrivate> *, struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end
