/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTileIdentifierZeroConverter : NSObject <PXTileIdentifierConverter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; }*)arg1;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; }*)arg1 group:(unsigned int*)arg2;

@end
