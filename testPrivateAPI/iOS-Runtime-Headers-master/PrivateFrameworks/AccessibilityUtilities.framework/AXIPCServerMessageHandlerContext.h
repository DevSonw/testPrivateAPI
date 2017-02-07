/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServerMessageHandlerContext : NSObject {
    BOOL  _async;
    id /* block */  _handler;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readonly) BOOL async;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;

- (BOOL)async;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3;
- (SEL)selector;
- (id)target;

@end
