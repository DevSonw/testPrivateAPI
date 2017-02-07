/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageSelectionLayerPrivate : NSObject {
    int  displayBox;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  firstPageRect;
    bool  isOnFirstPage;
    bool  isOnLastPage;
    bool  isZooming;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  lastMagnifierRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  lastPageRect;
    UIImage * magnifierImage;
    struct CGImage { } * magnifierImageMask;
    CALayer * magnifierLayer;
    struct CGSize { 
        float width; 
        float height; 
    }  magnifierSize;
    PDFPage * page;
    PDFSelection * selection;
    CALayer * selectionEndHandle;
    NSMutableDictionary * selectionRects;
    CALayer * selectionStartHandle;
}

- (void).cxx_destruct;

@end
