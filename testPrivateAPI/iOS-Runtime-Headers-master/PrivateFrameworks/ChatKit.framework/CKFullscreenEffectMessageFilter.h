/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullscreenEffectMessageFilter : NSObject {
    float  _balloonAlpha;
    NSArray * _balloonBackdropFilters;
    CAFilter * _balloonCompositingFilter;
    NSArray * _balloonFilters;
    float  _contentAlpha;
    int  _direction;
    CAFilter * _textCompositingFilter;
    int  _type;
}

@property (nonatomic) float balloonAlpha;
@property (nonatomic, copy) NSArray *balloonBackdropFilters;
@property (nonatomic, copy) CAFilter *balloonCompositingFilter;
@property (nonatomic, copy) NSArray *balloonFilters;
@property (nonatomic) float contentAlpha;
@property (nonatomic) int direction;
@property (nonatomic, copy) CAFilter *textCompositingFilter;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (float)balloonAlpha;
- (id)balloonBackdropFilters;
- (id)balloonCompositingFilter;
- (id)balloonFilters;
- (float)contentAlpha;
- (int)direction;
- (id)init;
- (void)setBalloonAlpha:(float)arg1;
- (void)setBalloonBackdropFilters:(id)arg1;
- (void)setBalloonCompositingFilter:(id)arg1;
- (void)setBalloonFilters:(id)arg1;
- (void)setContentAlpha:(float)arg1;
- (void)setDirection:(int)arg1;
- (void)setTextCompositingFilter:(id)arg1;
- (void)setType:(int)arg1;
- (id)textCompositingFilter;
- (int)type;

@end
