/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackUIWidget : NSObject <PXWidget> {
    int  __animationCount;
    UIView * __containerView;
    struct CGSize { 
        float width; 
        float height; 
    }  __contentSize;
    UIView * __contentView;
    BOOL  __didLoadContent;
    int  _contentViewAnchoringType;
    float  _height;
    BOOL  _isExpanded;
    BOOL  _isMSGOnlyBanner;
    PXWidgetSpec * _spec;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAnimationCount:, nonatomic) int _animationCount;
@property (nonatomic, readonly) UIView *_containerView;
@property (setter=_setContentSize:, nonatomic) struct CGSize { float x1; float x2; } _contentSize;
@property (nonatomic, readonly) UIView *_contentView;
@property (setter=_setDidLoadContent:, nonatomic) BOOL _didLoadContent;
@property (nonatomic, readonly) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) int contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (setter=_setContentViewAnchoringType:, nonatomic) int contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) BOOL faceModeEnabled;
@property (nonatomic, readonly) BOOL hasContentForCurrentInput;
@property (nonatomic, readonly) BOOL hasLoadedContentData;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) BOOL selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsFaceMode;
@property (nonatomic, readonly) BOOL supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (int)_animationCount;
- (id)_containerView;
- (struct CGSize { float x1; float x2; })_contentSize;
- (id)_contentView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentViewFrameForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_didLoadContent;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_loadViews;
- (void)_setAnimationCount:(int)arg1;
- (void)_setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setContentViewAnchoringType:(int)arg1;
- (void)_setDidLoadContent:(BOOL)arg1;
- (void)_updateContentViewColor;
- (id)contentView;
- (int)contentViewAnchoringType;
- (void)contentViewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)init;
- (void)loadContentData;
- (id)localizedTitle;
- (float)preferredContentHeightForWidth:(float)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)spec;
- (id)widgetDelegate;

@end
