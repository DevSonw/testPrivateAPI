/* Generated by RuntimeBrowser.
 */

@protocol PXTileSource <NSObject>

@required

- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg1 layout:(PXTilingLayout *)arg2;

@end
