/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerPrivate : NSObject {
    long long  displayBox;
    struct CGDisplayList { } * displayList;
    bool  hasZoomed;
    bool  isZooming;
    unsigned long long  layoutEndTime;
    int  layoutExpectedTileCount;
    unsigned long long  layoutStartTime;
    int  layoutUpdateCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldPageRect;
    long long  oldRotation;
    PDFPage * page;
    PDFPageView * parentView;
    bool  requestedLayout;
    bool  requestedLayoutDuringLayout;
    bool  shouldAntiAlias;
    bool  tileLayerHidden;
    NSMutableDictionary * tiles;
    CALayer * tilesLayer;
}

- (void).cxx_destruct;

@end