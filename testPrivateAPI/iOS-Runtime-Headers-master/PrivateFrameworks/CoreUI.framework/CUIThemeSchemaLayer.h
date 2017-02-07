/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaLayer : NSObject {
    unsigned int  _index;
    NSString * _name;
    NSArray * _renditions;
}

@property (nonatomic) unsigned int index;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *renditions;

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned int)arg3;

- (void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(struct CGSize { float x1; float x2; }*)arg3 forPartFeatures:(unsigned int)arg4;
- (void)dealloc;
- (unsigned int)index;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned int)arg3;
- (id)name;
- (id)renditions;
- (void)setIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setRenditions:(id)arg1;
- (float)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2;

@end