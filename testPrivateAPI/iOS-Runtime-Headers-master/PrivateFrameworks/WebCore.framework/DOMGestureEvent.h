/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMGestureEvent : DOMUIEvent

@property (readonly) BOOL altKey;
@property (readonly) BOOL ctrlKey;
@property (readonly) BOOL metaKey;
@property (readonly) float rotation;
@property (readonly) float scale;
@property (readonly) BOOL shiftKey;
@property (readonly) <DOMEventTarget> *target;

- (BOOL)altKey;
- (int)clientX;
- (int)clientY;
- (BOOL)ctrlKey;
- (void)initGestureEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16;
- (BOOL)metaKey;
- (float)rotation;
- (float)scale;
- (int)screenX;
- (int)screenY;
- (BOOL)shiftKey;
- (id)target;

@end
