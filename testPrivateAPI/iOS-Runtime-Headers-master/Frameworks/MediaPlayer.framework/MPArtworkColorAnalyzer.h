/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkColorAnalyzer : NSObject {
    int  _algorithm;
    UIImage * _image;
}

@property (nonatomic, readonly) int algorithm;
@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (id)_fallbackColorAnalysis;
- (int)algorithm;
- (void)analyzeWithCompletionHandler:(id /* block */)arg1;
- (id)image;
- (id)initWithImage:(id)arg1 algorithm:(int)arg2;

@end
