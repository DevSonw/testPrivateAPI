/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerDelegate> {
    id /* block */  _bannerGenerator;
    NSString * _localizedPrompt;
    NSPointerArray * _observers;
    PUPhotoSelectionManager * _photoSelectionManager;
    int  _promptLocation;
    BOOL  _selectingAssets;
    BOOL  _selectingTargetAlbum;
    struct NSObject { Class x1; } * _sourceAlbum;
    int  _status;
    struct NSObject { Class x1; } * _targetAlbum;
    BOOL  _targetAlbumIsNewLocalAlbum;
    NSString * _targetAlbumName;
    NSOrderedSet * _transferredAssets;
}

@property (nonatomic, copy) id /* block */ bannerGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *localizedPrompt;
@property (nonatomic, retain) PUPhotoSelectionManager *photoSelectionManager;
@property (nonatomic) int promptLocation;
@property (getter=isSelectingAssets, nonatomic, readonly) BOOL selectingAssets;
@property (getter=isSelectingTargetAlbum, nonatomic, readonly) BOOL selectingTargetAlbum;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *sourceAlbum;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *targetAlbum;
@property (nonatomic) BOOL targetAlbumIsNewLocalAlbum;
@property (nonatomic, retain) NSString *targetAlbumName;
@property (nonatomic, copy) NSOrderedSet *transferredAssets;

- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (id /* block */)bannerGenerator;
- (id)init;
- (BOOL)isSelectingAssets;
- (BOOL)isSelectingTargetAlbum;
- (id)localizedPrompt;
- (id)photoSelectionManager;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (int)promptLocation;
- (void)removeSessionInfoObserver:(id)arg1;
- (void)setBannerGenerator:(id /* block */)arg1;
- (void)setLocalizedPrompt:(id)arg1;
- (void)setPhotoSelectionManager:(id)arg1;
- (void)setPromptLocation:(int)arg1;
- (void)setSourceAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setTargetAlbumIsNewLocalAlbum:(BOOL)arg1;
- (void)setTargetAlbumName:(id)arg1;
- (void)setTransferredAssets:(id)arg1;
- (struct NSObject { Class x1; }*)sourceAlbum;
- (int)status;
- (struct NSObject { Class x1; }*)targetAlbum;
- (BOOL)targetAlbumIsNewLocalAlbum;
- (id)targetAlbumName;
- (id)transferredAssets;

@end
