/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    int  _dataNetworkType;
    BOOL  _enableRSSI;
    BOOL  _showRSSI;
    BOOL  _wifiLinkWarning;
    int  _wifiStrengthBars;
    int  _wifiStrengthRaw;
}

- (id)_dataNetworkImage;
- (id)_stringForRSSI;
- (id)contentsImage;
- (float)extraLeftPadding;
- (float)extraRightPadding;
- (float)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end