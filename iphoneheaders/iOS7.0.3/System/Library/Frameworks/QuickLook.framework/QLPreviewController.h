/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController {

	QLPreviewControllerReserved* _reserved;

}

@property (assign) <QLPreviewControllerDataSource> * dataSource; 
@property (assign) int currentPreviewItemIndex; 
@property (readonly) <QLPreviewItem> * currentPreviewItem; 
@property (assign) <QLPreviewControllerDelegate> * delegate; 
+(id)contentTypeForPreviewItem:(id)arg1 ;
+(id)_passThroughDocumentTypes;
+(BOOL)_shouldPassThroughDocumentType:(id)arg1 ;
+(BOOL)canPreviewDocumentType:(id)arg1 ;
+(BOOL)canPreviewMIMEType:(id)arg1 ;
+(id)titleForPreviewItem:(id)arg1 ;
+(BOOL)copyPreviewItemToPasteboard:(id)arg1 ;
+(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
+(BOOL)canPreviewItem:(id)arg1 ;
-(BOOL)ckCanDismissWhenSuspending;
-(void)_stopWaiting;
-(void)_unloadInternalViews;
-(id)itemsSource;
-(void)_updateNavigationBar:(BOOL)arg1 ;
-(void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(/*^block*/ id)arg2 ;
-(id)_currentNavigationController;
-(void)_updateToolbarVisibility:(BOOL)arg1 ;
-(id)_displayedInteractionController;
-(void)_updateToolbar:(BOOL)arg1 ;
-(void)_showContentsIfPossibleAnimated:(BOOL)arg1 ;
-(void)_showOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2 ;
-(void)_configurePreviewContentController;
-(int)numberOfPreviewItems;
-(id)previewItemAtIndex:(int)arg1 ;
-(void)_setCurrentPreviewItemIndex:(int)arg1 fromClient:(BOOL)arg2 showContentsIfPossible:(BOOL)arg3 ;
-(void)_showGenericDisplayBundle;
-(void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 duration:(double)arg3 ;
-(void)_contentWasTapped;
-(void)_setupWithMode:(int)arg1 parentViewController:(id)arg2 ;
-(void)_loadInternalViews;
-(void)_addPreviewContentController;
-(void)_startWaiting;
-(BOOL)_overlayVisible;
-(CGRect)_contentFrameForRemoteView;
-(void)_createControls;
-(void)_removeChildPreviewContentControllerIfNeeded;
-(void)_waitingTimedOut;
-(void)_updateRouteImages;
-(id)_currentInteractionController;
-(void)leftArrowAction:(id)arg1 ;
-(void)rightArrowAction:(id)arg1 ;
-(id)_updatedArchiveButton;
-(void)showArchiveContentAnimated:(BOOL)arg1 ;
-(id)_pdfPreviewDataAtURL:(id)arg1 loadIfNeeded:(BOOL)arg2 ;
-(BOOL)_canPrint;
-(void)prepareForPrinting;
-(BOOL)blockRemoteImages;
-(void)setUseCustomActionButton:(BOOL)arg1 ;
-(BOOL)useCustomActionButton;
-(void)setShowActionAsDefaultButton:(BOOL)arg1 ;
-(BOOL)showActionAsDefaultButton;
-(void)animateWhenReadyWithBlock:(/*^block*/ id)arg1 ;
-(id)passThroughViewsForIndexSheet;
-(id)previewContentController;
-(id)_documentProxyForPreviewItem:(id)arg1 ;
-(int)currentSourceUUIDForPreviewContentController:(id)arg1 ;
-(int)numberOfPreviewItemsInPreviewContentController:(id)arg1 ;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2 ;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4 ;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)contentWasTappedInPreviewContentController:(id)arg1 ;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1 ;
-(void)overlayWasTappedInPreviewContentController:(id)arg1 ;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)customActionButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)arrowsAction:(id)arg1 ;
-(void)showArchiveContent:(id)arg1 ;
-(void)playButtonAction:(id)arg1 ;
-(void)navigationGoBackAction:(id)arg1 ;
-(BOOL)canPrint;
-(void)wirelessRoutesDidChange:(id)arg1 ;
-(BOOL)_needsAVControls;
-(BOOL)_needsToolbar;
-(id)_indexFormatter;
-(id)_listDescriptionStringWithTitle:(id)arg1 ;
-(BOOL)_updateActionItem;
-(id)_flexibleSpaceItem;
-(BOOL)_updateAVState;
-(void)_hideOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2 ;
-(id)_fixedSpaceItemWithWidth:(float)arg1 ;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)dataSource;
-(id)delegate;
-(int)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)_commonInit;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(int)mode;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)sourceIsManaged;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1 ;
-(id)activityItemForDocumentInteractionController:(id)arg1 ;
-(id)printInfoForDocumentInteractionController:(id)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
-(void)setBlockRemoteImages:(BOOL)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)currentPreviewItem;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)setCurrentPreviewItemIndex:(int)arg1 ;
-(void)refreshCurrentPreviewItem;
-(void)_prepareDelayedAppearance;
-(int)currentPreviewItemIndex;
@end
