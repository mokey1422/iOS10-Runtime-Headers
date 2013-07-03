/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPageSetup : NSObject  {
    int mOrientation;
    int mPageOrder;
    boolmCustomFirstPageNumber;
    unsigned long mFirstPageNumber;
    unsigned long mFitToHeight;
    unsigned long mFitToWidth;
    unsigned long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (float)footerMargin;
- (unsigned long)fitToWidth;
- (unsigned long)fitToHeight;
- (unsigned long)firstPageNumber;
- (bool)customFirstPageNumber;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setFitToWidth:(unsigned long)arg1;
- (void)setFitToHeight:(unsigned long)arg1;
- (void)setCustomFirstPageNumber:(bool)arg1;
- (void)setFirstPageNumber:(unsigned long)arg1;
- (float)headerMargin;
- (void)setOrder:(int)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (float)rightMargin;
- (float)leftMargin;
- (float)bottomMargin;
- (float)topMargin;
- (void)setOrientation:(int)arg1;
- (void)setScale:(unsigned long)arg1;
- (id)init;
- (int)orientation;
- (unsigned long)scale;
- (int)order;

@end