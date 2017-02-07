/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNShow : TSPObject {
    BOOL  mAutomaticallyPlaysUponOpen;
    double  mAutoplayBuildDelay;
    double  mAutoplayTransitionDelay;
    BOOL  mIdleTimerActive;
    double  mIdleTimerDelay;
    BOOL  mLocalizeDocument;
    BOOL  mLoopPresentation;
    int  mMode;
    BOOL  mNeedsToUpdateThumbnails;
    KNRecording * mRecording;
    struct CGSize { 
        float width; 
        float height; 
    }  mSize;
    KNSlideTree * mSlideTree;
    KNSoundtrack * mSoundtrack;
    TSSStylesheet * mStylesheet;
    KNTheme * mTheme;
    KNUIState * mUIState;
    BOOL  mWasImportedAsPreUFF;
}

@property (nonatomic) BOOL automaticallyPlaysUponOpen;
@property (nonatomic) double autoplayBuildDelay;
@property (nonatomic) double autoplayTransitionDelay;
@property (nonatomic) BOOL idleTimerActive;
@property (nonatomic) double idleTimerDelay;
@property (nonatomic) BOOL localizeDocument;
@property (nonatomic) BOOL loopPresentation;
@property (nonatomic) int mode;
@property (nonatomic, readonly) BOOL needsToUpdateThumbnails;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (nonatomic, retain) KNRecording *recording;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) BOOL slideNumbersVisible;
@property (nonatomic, retain) KNSlideTree *slideTree;
@property (nonatomic, retain) KNSoundtrack *soundtrack;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (nonatomic, retain) KNTheme *theme;
@property (nonatomic, retain) KNUIState *uiState;
@property (nonatomic, readonly) BOOL wasImportedAsPreUFF;

+ (unsigned int)maximumHeight;
+ (unsigned int)maximumHeightForExport;
+ (unsigned int)maximumWidth;
+ (unsigned int)maximumWidthForExport;
+ (unsigned int)minimumHeight;
+ (unsigned int)minimumWidth;
+ (id)showWithSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;

- (BOOL)automaticallyPlaysUponOpen;
- (double)autoplayBuildDelay;
- (double)autoplayTransitionDelay;
- (struct CGPoint { float x1; float x2; })center;
- (void)dealloc;
- (BOOL)idleTimerActive;
- (double)idleTimerDelay;
- (unsigned int)indexOfSlideNode:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 context:(id)arg2;
- (BOOL)isPlayable;
- (void)loadFromArchive:(const struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct SlideTreeArchive {} *x7; struct Size {} *x8; struct Reference {} *x9; struct Reference {} *x10; double x11; int x12; bool x13; bool x14; bool x15; bool x16; double x17; double x18; struct Reference {} *x19; struct Reference {} *x20; }*)arg1 unarchiver:(id)arg2;
- (BOOL)localizeDocument;
- (BOOL)loopPresentation;
- (int)mode;
- (BOOL)needsToUpdateThumbnails;
- (id)recording;
- (void)saveToArchive:(struct ShowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct SlideTreeArchive {} *x7; struct Size {} *x8; struct Reference {} *x9; struct Reference {} *x10; double x11; int x12; bool x13; bool x14; bool x15; bool x16; double x17; double x18; struct Reference {} *x19; struct Reference {} *x20; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAutomaticallyPlaysUponOpen:(BOOL)arg1;
- (void)setAutoplayBuildDelay:(double)arg1;
- (void)setAutoplayTransitionDelay:(double)arg1;
- (void)setIdleTimerActive:(BOOL)arg1;
- (void)setIdleTimerDelay:(double)arg1;
- (void)setLocalizeDocument:(BOOL)arg1;
- (void)setLoopPresentation:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setRecording:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSlideTree:(id)arg1;
- (void)setSoundtrack:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setUiState:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)slideNodeAtIndex:(unsigned int)arg1;
- (id)slideNodesAtIndexes:(id)arg1;
- (BOOL)slideNumbersVisible;
- (id)slideTree;
- (id)soundtrack;
- (id)stylesheet;
- (id)theme;
- (id)uiState;
- (BOOL)wasImportedAsPreUFF;
- (void)willModify;

@end
