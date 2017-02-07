/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo {
    BOOL  _isOverContent;
}

@property (nonatomic, readonly) BOOL isOverContent;

- (id)clone;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { float x1; float x2; })arg2 size:(struct CGSize { float x1; float x2; })arg3 alpha:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 zPosition:(float)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { float x1; float x2; })arg2 size:(struct CGSize { float x1; float x2; })arg3 alpha:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 zPosition:(float)arg6 coordinateSystem:(id)arg7 isOverContent:(BOOL)arg8;
- (BOOL)isGeometryEqualToLayoutInfo:(id)arg1;
- (BOOL)isOverContent;

@end
