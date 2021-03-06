/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBDisplaySnapshot : NSObject {
    FBSDisplay * _display;
    UIImage * _image;
    struct CGImage { } * _imageRef;
    NSOrderedSet * _layers;
    BOOL  _opaque;
    float  _scale;
    struct CGSize { 
        float width; 
        float height; 
    }  _snapshotSize;
    struct __IOSurface { } * _surfaceRef;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurface;
@property (nonatomic, readonly, retain) UIImage *UIImage;
@property (getter=isDataLoaded, nonatomic, readonly) BOOL dataLoaded;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (nonatomic, readonly, copy) NSOrderedSet *layers;
@property (getter=isOpaque, nonatomic) BOOL opaque;
@property (nonatomic) float scale;
@property (nonatomic) struct CGSize { float x1; float x2; } snapshotSize;

- (struct CGImage { }*)CGImage;
- (struct __IOSurface { }*)IOSurface;
- (id)UIImage;
- (float)_scale;
- (struct CGSize { float x1; float x2; })_scaledSnapshotSize;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)arg1;
- (BOOL)capture;
- (void)dealloc;
- (id)display;
- (id)initWithDisplay:(id)arg1 layer:(id)arg2;
- (id)initWithDisplay:(id)arg1 layers:(id)arg2;
- (BOOL)isDataLoaded;
- (BOOL)isOpaque;
- (id)layers;
- (float)scale;
- (void)setOpaque:(BOOL)arg1;
- (void)setScale:(float)arg1;
- (void)setSnapshotSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })snapshotSize;

@end
