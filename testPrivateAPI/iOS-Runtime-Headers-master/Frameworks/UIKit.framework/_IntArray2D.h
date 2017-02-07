/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _IntArray2D : NSObject {
    int * _arrayData;
    unsigned int  _iSize;
    unsigned int  _jSize;
    BOOL  _shouldBoundsCheck;
}

@property (nonatomic, readonly) unsigned int iSize;
@property (nonatomic, readonly) unsigned int jSize;
@property (nonatomic) BOOL shouldBoundsCheck;

+ (id)arrayWithISize:(unsigned int)arg1 jSize:(unsigned int)arg2;

- (int):(unsigned int)arg1 :(unsigned int)arg2;
- (void):(unsigned int)arg1 :(unsigned int)arg2 newValue:(int)arg3;
- (int):(unsigned int)arg1 :(unsigned int)arg2 outOfBoundsReturnValue:(int)arg3;
- (void)assertBoundsForIIndex:(unsigned int)arg1 jIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (unsigned int)iSize;
- (BOOL)inBoundsForIIndex:(unsigned int)arg1 jIndex:(unsigned int)arg2;
- (id)initWithISize:(unsigned int)arg1 jSize:(unsigned int)arg2;
- (unsigned int)jSize;
- (void)setShouldBoundsCheck:(BOOL)arg1;
- (BOOL)shouldBoundsCheck;

@end
