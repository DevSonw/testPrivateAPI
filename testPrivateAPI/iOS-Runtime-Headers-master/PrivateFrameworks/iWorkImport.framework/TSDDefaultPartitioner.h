/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDefaultPartitioner : NSObject <TSDCanvasDelegate, TSDPartitioner> {
    TSUPointerKeyDictionary * mCachedImagesByCanvas;
    TSDCanvas * mCanvas;
    NSObject<TSDInfo> * mInfo;
    TSDLayout * mLayout;
    TSUPointerKeyDictionary * mMainRepsByCanvas;
    TSUPointerKeyDictionary * mPartialRepsByCanvas;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (id)documentRoot;
- (id)hintForLayout:(id)arg1;
- (struct CGImage { }*)i_cachedImageForCanvas:(id)arg1;
- (id)i_layout;
- (void)i_registerPartialRep:(id)arg1;
- (void)i_removeCachedImageForCanvas:(id)arg1;
- (id)i_repForCanvas:(id)arg1;
- (void)i_setCachedImage:(struct CGImage { }*)arg1 forCanvas:(id)arg2;
- (void)i_unregisterPartialRep:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextHintForSize:(struct CGSize { float x1; float x2; })arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5;
- (id)nextLayoutForSize:(struct CGSize { float x1; float x2; })arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5;
- (unsigned int)p_edgesForHintBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)p_firstHintForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_generateLayouts;
- (id)p_nextHintForSize:(struct CGSize { float x1; float x2; })arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3;
- (void)p_teardownLayouts;

@end
