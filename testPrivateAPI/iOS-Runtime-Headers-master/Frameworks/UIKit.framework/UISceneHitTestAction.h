/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISceneHitTestAction : BSAction

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } touchLocation;

- (int)UIActionType;
- (id)initWithTouchLocation:(struct CGPoint { float x1; float x2; })arg1 responseHandler:(id /* block */)arg2;
- (void)sendResponse:(id)arg1;
- (struct CGPoint { float x1; float x2; })touchLocation;

@end
