/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <Safari/GridViewDataSource.h>
#import <Safari/GridViewDelegate.h>
#import <Safari/SafariViewDelegate.h>
#import <Safari/StartPageContentViewController.h>

@class StartPageViewController, NSString, NSView, WebBookmarkList, NSArray, BookmarkAddressEditingPopoverViewController, NSLayoutConstraint, TestDriveMigrationBannerViewController, NSMapTable, NSScrollView, GridView, NSButton;

@interface CombinedFavoritesGridViewController : NSViewController <GridViewDataSource, GridViewDelegate, SafariViewDelegate, StartPageContentViewController> {

	WebBookmarkList* _displayedBookmarkFolder;
	NSString* _displayedBookmarksFolderUUID;
	NSArray* _displayedFavorites;
	BookmarkAddressEditingPopoverViewController* _addressEditingController;
	double _widthAtLastPreferredHeightComputation;
	double _lastPreferredHeight;
	NSLayoutConstraint* _contentToRootViewPercentConstraint;
	NSArray* _centeringConstraints;
	NSArray* _backButtonToTitleViewConstraints;
	float _defaultFavoritesGridHeightPriority;
	unsigned long long _draggedFavoriteIndex;
	unsigned long long _indexOfFavoriteCompletingDrag;
	unsigned long long _draggedFrequentSiteIndex;
	NSString* _originallyDisplayedBookmarksFolderUUIDDuringDrag;
	TestDriveMigrationBannerViewController* _testDriveMigrationBannerViewController;
	NSMapTable* _favoritesCellsToMetadataTokens;
	NSMapTable* _frequentSitesCellsMetadataTokens;
	long long _suppressUIUpdatesFromFavoritesChangeNotificationsCount;
	long long _suppressUIUpdatesFromFrequentlyVisitedSitesChangeNotificationsCount;
	int _presentationMode;
	StartPageViewController* _startPageViewController;
	NSView* _externalCenteringView;
	NSScrollView* _scrollView;
	NSView* _documentView;
	NSView* _gridContainer;
	GridView* _favoritesGridView;
	GridView* _frequentSitesGridView;
	NSButton* _backButton;
	NSLayoutConstraint* _frequentlyVisitedGridViewBottomVerticalSpacingConstraint;
	NSLayoutConstraint* _gridContainerMinimumWidthConstraint;
	NSLayoutConstraint* _gridContainerMaximumWidthConstraint;
	NSLayoutConstraint* _documentViewClipViewLeadingConstraint;
	NSLayoutConstraint* _documentViewClipViewTopConstraint;
	NSLayoutConstraint* _documentViewClipViewEqualWidthConstraint;
	NSLayoutConstraint* _documentViewClipViewGreaterThanOrEqualHeightConstraint;

}

@property (assign,nonatomic) int presentationMode;                                                                            //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,readonly) double preferredMinimumWidth; 
@property (assign,nonatomic,__weak) NSScrollView * scrollView;                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) NSView * documentView;                                                                    //@synthesize documentView=_documentView - In the implementation block
@property (assign,nonatomic,__weak) NSView * gridContainer;                                                                   //@synthesize gridContainer=_gridContainer - In the implementation block
@property (assign,nonatomic,__weak) GridView * favoritesGridView;                                                             //@synthesize favoritesGridView=_favoritesGridView - In the implementation block
@property (assign,nonatomic,__weak) GridView * frequentSitesGridView;                                                         //@synthesize frequentSitesGridView=_frequentSitesGridView - In the implementation block
@property (assign,nonatomic,__weak) NSButton * backButton;                                                                    //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * frequentlyVisitedGridViewBottomVerticalSpacingConstraint;                   //@synthesize frequentlyVisitedGridViewBottomVerticalSpacingConstraint=_frequentlyVisitedGridViewBottomVerticalSpacingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * gridContainerMinimumWidthConstraint;                                        //@synthesize gridContainerMinimumWidthConstraint=_gridContainerMinimumWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * gridContainerMaximumWidthConstraint;                                        //@synthesize gridContainerMaximumWidthConstraint=_gridContainerMaximumWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * documentViewClipViewLeadingConstraint;                               //@synthesize documentViewClipViewLeadingConstraint=_documentViewClipViewLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * documentViewClipViewTopConstraint;                                   //@synthesize documentViewClipViewTopConstraint=_documentViewClipViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * documentViewClipViewEqualWidthConstraint;                            //@synthesize documentViewClipViewEqualWidthConstraint=_documentViewClipViewEqualWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * documentViewClipViewGreaterThanOrEqualHeightConstraint;              //@synthesize documentViewClipViewGreaterThanOrEqualHeightConstraint=_documentViewClipViewGreaterThanOrEqualHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) StartPageViewController * startPageViewController;                                        //@synthesize startPageViewController=_startPageViewController - In the implementation block
@property (nonatomic,readonly) NSString * pageTitle; 
@property (nonatomic,retain) NSView * externalCenteringView;                                                                  //@synthesize externalCenteringView=_externalCenteringView - In the implementation block
@property (nonatomic,readonly) NSView * titleView; 
+(id)defaultPageTitle;
-(NSString *)pageTitle;
-(char)handleScrollEventAsSwipeGesture:(id)arg1 ;
-(id)_bookmarksUndoController;
-(NSView *)externalCenteringView;
-(void)setExternalCenteringView:(NSView *)arg1 ;
-(void)delegatingView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)delegatingViewDidMoveToWindow:(id)arg1 ;
-(void)_invalidateCachedPreferredHeight;
-(void)resetToRootFolder;
-(void)_registerStandardDraggedTypesForView:(id)arg1 ;
-(void)_updatePresentationModeAttributes;
-(void)_updateLayoutStyleAttributes;
-(void)_updateFrequentlyVisitedSiteVisibility;
-(void)_updateBackButtonVisibility;
-(void)_favoritesDidChange:(id)arg1 ;
-(void)_frequentSitesDidChange:(id)arg1 ;
-(char)_resetToRootFolder;
-(void)_reloadFavorites;
-(char)_isShowingRootFolder;
-(unsigned long long)numberOfCellsInGridView:(id)arg1 ;
-(void)_updateExternalCenteringConstraints;
-(NSView *)titleView;
-(void)_createBackButtonConstraintsIfNeeded;
-(unsigned long long)_draggedFavoriteIndex;
-(id)_displayedFavorites;
-(id)_bookmarkAtIndex:(unsigned long long)arg1 ;
-(TopSite*)_frequentSiteAtIndex:(unsigned long long)arg1 ;
-(id)_enqueuedSiteMetadataRequestForCellView:(id)arg1 url:(id)arg2 orBookmark:(id)arg3 ;
-(unsigned long long)_dragOperationForDrop:(id)arg1 intoGridView:(id)arg2 ;
-(unsigned long long)_dropIndexForProposedFavoriteGridDropIndex:(unsigned long long)arg1 ;
-(unsigned long long)_bookmarkInsertionIndexForGridViewDropIndex:(unsigned long long)arg1 ;
-(void)_suppressUIUpdatesFromFrequentlyVisitedSitesChangeNotificationsInBlock:(/*^block*/id)arg1 ;
-(void)_suppressUIUpdatesFromFavoritesChangeNotificationsInBlock:(/*^block*/id)arg1 ;
-(id)_bookmarkFolderForUUID:(id)arg1 ;
-(unsigned long long)_indexOfBookmark:(id)arg1 ;
-(TopSite*)_draggedFrequentSite;
-(char)_isShowingOriginalFolderFromStartOfDraggingSession;
-(char)_screenPointIsOverDeleteSafeZone:(CGPoint)arg1 ;
-(void)_popDisappearingItemCursorIfNeeded;
-(char)_currentEventIsOnGridView:(id)arg1 ;
-(unsigned long long)_internalIndexOfDraggedFavorite;
-(void)_openFolderWithUUID:(id)arg1 ;
-(void)_removeBookmark:(id)arg1 ;
-(void)_openBookmark:(id)arg1 ;
-(void)_openFolder:(id)arg1 ;
-(TabPlacementHint*)_tabPlacementHint;
-(void)_updateWidthRatioConstraint;
-(void)_updateGridContainerMaxWidthConstraint;
-(id)_centeringConstraintForDescendentView:(id)arg1 ;
-(void)_updateFavoritesTitle;
-(void)setPresentationMode:(int)arg1 ;
-(void)_invalidateCachedDisplayedFavorites;
-(void)_cancelPendingFavoritesMetadataRequests;
-(void)updateAccessibilityTitle;
-(char)_shouldShowFavoritesTitle;
-(void)_updateBackButtonConstraints;
-(void)_cancelPendingFrequentlyVisitedSitesMetadataRequests;
-(char)_shouldUpdateUIForFavoritesChange;
-(char)_shouldUpdateUIForFrequentlyVisitedSitesChange;
-(void)_reloadFrequentlyVisitedSites;
-(void)gridView:(id)arg1 prepareView:(id)arg2 forCellAtIndex:(unsigned long long)arg3 ;
-(void)gridView:(id)arg1 willRecycleView:(id)arg2 ;
-(unsigned long long)currentDraggedCellIndexForGridView:(id)arg1 ;
-(id)draggingItemClassesForGridView:(id)arg1 ;
-(id)gridView:(id)arg1 pasteboardWriterForCellAtIndex:(unsigned long long)arg2 ;
-(void)gridView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 ;
-(void)gridView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(CGPoint)arg3 ;
-(void)gridView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 proposedOperation:(unsigned long long*)arg4 ;
-(unsigned long long)gridView:(id)arg1 validateDrop:(id)arg2 proposedIndex:(unsigned long long*)arg3 ;
-(char)gridView:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3 ;
-(unsigned long long)gridView:(id)arg1 dragOverBehaviorsForCellAtIndex:(unsigned long long)arg2 ;
-(char)gridView:(id)arg1 acceptDrop:(id)arg2 onCellAtIndex:(unsigned long long)arg3 ;
-(char)gridView:(id)arg1 performHoverOnCellAtIndex:(unsigned long long)arg2 ;
-(void)gridView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2 ;
-(StartPageViewController *)startPageViewController;
-(void)setStartPageViewController:(StartPageViewController *)arg1 ;
-(double)preferredHeightAtWidth:(double)arg1 ;
-(double)preferredMinimumWidth;
-(void)goBack:(id)arg1 ;
-(id)_urlStringForAtIndex:(unsigned long long)arg1 inGridView:(id)arg2 ;
-(int)presentationMode;
-(NSView *)gridContainer;
-(void)setGridContainer:(NSView *)arg1 ;
-(GridView *)favoritesGridView;
-(void)setFavoritesGridView:(GridView *)arg1 ;
-(GridView *)frequentSitesGridView;
-(void)setFrequentSitesGridView:(GridView *)arg1 ;
-(NSButton *)backButton;
-(void)setBackButton:(NSButton *)arg1 ;
-(NSLayoutConstraint *)frequentlyVisitedGridViewBottomVerticalSpacingConstraint;
-(void)setFrequentlyVisitedGridViewBottomVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)gridContainerMinimumWidthConstraint;
-(void)setGridContainerMinimumWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)gridContainerMaximumWidthConstraint;
-(void)setGridContainerMaximumWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)documentViewClipViewLeadingConstraint;
-(void)setDocumentViewClipViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)documentViewClipViewTopConstraint;
-(void)setDocumentViewClipViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)documentViewClipViewEqualWidthConstraint;
-(void)setDocumentViewClipViewEqualWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)documentViewClipViewGreaterThanOrEqualHeightConstraint;
-(void)setDocumentViewClipViewGreaterThanOrEqualHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(NSView *)documentView;
-(void)setDocumentView:(NSView *)arg1 ;
-(void)loadView;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)nibName;
-(NSScrollView *)scrollView;
-(void)setScrollView:(NSScrollView *)arg1 ;
@end

