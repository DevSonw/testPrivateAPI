/* Generated by RuntimeBrowser.
 */

@protocol AKAnnotationEditor <NSObject>

@required

- (AKAnnotation *)annotation;
- (AKPageController *)annotationPageController;
- (AKAnnotationTheme *)annotationTheme;
- (<AKAnnotationEditorDelegate> *)delegate;
- (BOOL)editsOnLaunch;
- (void)hide;
- (void)setAnnotation:(AKAnnotation *)arg1;
- (void)setAnnotationPageController:(AKPageController *)arg1;
- (void)setAnnotationTheme:(AKAnnotationTheme *)arg1;
- (void)setDelegate:(id <AKAnnotationEditorDelegate>)arg1;
- (void)setEditsOnLaunch:(BOOL)arg1;

@optional

- (void)setTheme:(IMTheme *)arg1;
- (IMTheme *)theme;

@end
