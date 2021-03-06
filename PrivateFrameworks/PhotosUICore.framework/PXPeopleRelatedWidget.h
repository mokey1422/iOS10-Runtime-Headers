/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleRelatedWidget : NSObject <PXPeopleDataSourceDelegate, PXPeopleStripCollectionViewControllerDelegate, PXWidget, UIGestureRecognizerDelegate> {
    PXUITapGestureRecognizer * __tapRecognizer;
    double  _cellMinInteritemSpacing;
    double  _cellMinLineSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    PXPeopleStripCollectionViewController * _collectionViewController;
    UIView * _containerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    long long  _contentViewAnchoringType;
    PXPhotosDetailsContext * _context;
    UIFont * _currentLabelFont;
    PXPeopleWidgetDataSource * _dataSource;
    bool  _isSummaryMode;
    bool  _showFooter;
    PXWidgetSpec * _spec;
    bool  _startedLoadingDataSource;
    double  _targetPrefetchWidth;
    bool  _userInteractionEnabled;
    unsigned long long  _viewType;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, retain) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic) double cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic, retain) PXPeopleStripCollectionViewController *collectionViewController;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) UIFont *currentLabelFont;
@property (nonatomic, retain) PXPeopleWidgetDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSummaryMode;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) bool showFooter;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (getter=hasStartedLoadingDataSource, nonatomic) bool startedLoadingDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) double targetPrefetchWidth;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) unsigned long long viewType;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (bool)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize { double x1; double x2; }*)arg2 interitemSpacing:(double*)arg3;
- (bool)_canFitToHeight:(double)arg1 width:(double)arg2 textLabel:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_collectionViewFrameFromContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleTap:(id)arg1;
- (void)_loadContainerView;
- (double)_maxLabelHeightForWidth:(double)arg1;
- (id)_nameStringForPeople:(id)arg1 font:(id)arg2 width:(double)arg3;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (void)_prepareDataSource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_realContentInset;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (id)_tapRecognizer;
- (double)cellMinInteritemSpacing;
- (double)cellMinLineSpacing;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionViewController;
- (id)containerView;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)contentView;
- (long long)contentViewAnchoringType;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)context;
- (id)currentLabelFont;
- (id)currentNameLabelFont;
- (id)dataSource;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContentForCurrentInput;
- (bool)hasStartedLoadingDataSource;
- (id)initWithViewType:(unsigned long long)arg1;
- (bool)isSummaryMode;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedTitle;
- (void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (id)nameStringForPeople:(id)arg1 font:(id)arg2 width:(double)arg3 outHeight:(double*)arg4;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setCellMinInteritemSpacing:(double)arg1;
- (void)setCellMinLineSpacing:(double)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentLabelFont:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsSummaryMode:(bool)arg1;
- (void)setShowFooter:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setStartedLoadingDataSource:(bool)arg1;
- (void)setTargetPrefetchWidth:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setViewType:(unsigned long long)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)set_tapRecognizer:(id)arg1;
- (bool)showFooter;
- (struct CGSize { double x1; double x2; })sizeForItem;
- (id)spec;
- (double)targetPrefetchWidth;
- (id)traitCollection;
- (void)unloadContentData;
- (double)verticalSpacingForFaceAndText;
- (unsigned long long)viewType;
- (id)widgetDelegate;

@end
