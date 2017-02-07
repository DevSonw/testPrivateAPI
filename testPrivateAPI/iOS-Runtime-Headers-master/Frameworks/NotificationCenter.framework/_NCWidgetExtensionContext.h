/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface _NCWidgetExtensionContext : NSExtensionContext {
    int  _activeDisplayMode;
    _NCWidgetViewController * _hostViewController;
    struct CGSize { 
        float width; 
        float height; 
    }  _maxCompactSize;
    struct CGSize { 
        float width; 
        float height; 
    }  _maxExpandedSize;
    int  _widgetLargestAvailableDisplayMode;
}

@property (getter=_activeDisplayMode, setter=_setActiveDisplayMode:, nonatomic) int activeDisplayMode;
@property (getter=_hostViewController, setter=_setHostViewController:, nonatomic) _NCWidgetViewController *hostViewController;

- (void).cxx_destruct;
- (int)_activeDisplayMode;
- (id)_hostViewController;
- (struct CGSize { float x1; float x2; })_maximumSizeForDisplayMode:(int)arg1;
- (void)_setActiveDisplayMode:(int)arg1;
- (void)_setHostViewController:(id)arg1;
- (void)_setMaximumSize:(struct CGSize { float x1; float x2; })arg1 forDisplayMode:(int)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)invalidateWidgetDisplayProperties;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setWidgetLargestAvailableDisplayMode:(int)arg1;
- (int)widgetActiveDisplayMode;
- (int)widgetLargestAvailableDisplayMode;
- (struct CGSize { float x1; float x2; })widgetMaximumSizeForDisplayMode:(int)arg1;

@end
