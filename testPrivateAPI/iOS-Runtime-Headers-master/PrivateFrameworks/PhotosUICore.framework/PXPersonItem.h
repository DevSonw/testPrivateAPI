/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPersonItem : NSObject {
    UIImage * _faceImage;
    id /* block */  _faceImageLoadingCompletionBlock;
    int  _faceImageRequestID;
    id  _modelObject;
    NSString * _name;
    unsigned int  _photosCount;
}

@property (nonatomic, retain) UIImage *faceImage;
@property (nonatomic, copy) id /* block */ faceImageLoadingCompletionBlock;
@property (nonatomic) int faceImageRequestID;
@property (nonatomic, retain) id modelObject;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int photosCount;

- (void).cxx_destruct;
- (id)faceImage;
- (id /* block */)faceImageLoadingCompletionBlock;
- (int)faceImageRequestID;
- (id)modelObject;
- (id)name;
- (unsigned int)photosCount;
- (void)setFaceImage:(id)arg1;
- (void)setFaceImageLoadingCompletionBlock:(id /* block */)arg1;
- (void)setFaceImageRequestID:(int)arg1;
- (void)setModelObject:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhotosCount:(unsigned int)arg1;

@end
