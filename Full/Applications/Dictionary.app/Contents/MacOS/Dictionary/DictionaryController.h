/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Dictionary.app/Contents/MacOS/Dictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Dictionary/Dictionary-Structs.h>
@class DictionaryWebView, NSScrollView, NSArrayController, NSLayoutConstraint, WebWrapScrollView, BrowserWindowController, NSArray, NSMutableArray, NSMutableDictionary, DictionaryRecordRepository, NSOperationQueue, NSString, NSTimer, DSShadowOverlay;

@interface DictionaryController : NSObject {

	DictionaryWebView* _descriptionWebView;
	NSScrollView* _foundIndexScrollView;
	NSArrayController* _foundArrayController;
	id _delegate;
	NSLayoutConstraint* _indexWidthConstraint;
	WebWrapScrollView* _webWrapScrollView;
	BrowserWindowController* _windowController;
	NSArray* _dictionaryList;
	NSMutableArray* _selectedDictionaries;
	NSMutableDictionary* _dictionaryProperties;
	DictionaryRecordRepository* _foundRecords;
	NSArray* _foundHeadwordArray;
	NSMutableDictionary* _headwordToAnnotationInfo;
	long long _findMethod;
	long long _transactionID;
	long long _lastProcessedTransactionID;
	NSOperationQueue* _searchQueue;
	NSString* _lastSearchText;
	NSString* _lastSearchFieldText;
	NSString* _lastSelectedIndexText;
	long long _lastSelectedIndex;
	char _lastDisplayContentsTopInAllView;
	char _lastDisplayContentsSearchFinished;
	long long _lastDisplayContentsDataCount;
	char _lastSearchByUserTyping;
	char _lastSearchByExternalTrigger;
	NSMutableDictionary* _loadingFrameNames;
	double _restoringScrollPosFromSnapshot;
	char _useParentalControl;
	NSMutableDictionary* _lastXMLDocumentsForDisplay;
	NSMutableArray* _lastAnchorNamesForFrame;
	NSMutableDictionary* _lastLoadedHeadwordForFrame;
	NSMutableDictionary* _delayedSubFrameProcessors;
	char _useMouseoverLink;
	NSString* _lastPointedTerm;
	NSString* _lastClickedTerm;
	id _lastDOMRange;
	unsigned long long _lastClickedModifiers;
	NSString* _tempMouseOverDictionaryID;
	NSString* _lastLinkSourceDictionaryID;
	char _indexListIsHidden;
	char _indexInvisibleMode;
	double _indexFontSize;
	double _indexDefaultRowHeight;
	double _indexDefaultFontSize;
	CGSize _indexDefaultSpacing;
	double _lastIndexWidth;
	NSTimer* _idleTimerForSnapshot;
	char _needsToTakeSnapshot;
	char _willNeedToTakeSnapshot;
	char _alreadyTookSnapshot;
	char _lastEventIsMouseDownUp;
	DSShadowOverlay* _indexTopShadow;
	DSShadowOverlay* _indexBottomShadow;
	NSMutableArray* _dictionariesWithFrontMatter;
	char _changingSelectionByCode;
	char _processedKeyEvent;
	char _keyEventCheckMode;
	SEL _keyEventCheckResult;
	char _rewindingHistory;
	char _loadingWebView;
	char _resumingCache;
	char _mainPageLoaded;

}

@property (retain) NSArray * dictionaryList;                                      //@synthesize dictionaryList=_dictionaryList - In the implementation block
@property (assign) id delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long findMethod;                                          //@synthesize findMethod=_findMethod - In the implementation block
@property (readonly) char indexListIsHidden;                                      //@synthesize indexListIsHidden=_indexListIsHidden - In the implementation block
@property (readonly) NSMutableDictionary * headwordToAnnotationInfo;              //@synthesize headwordToAnnotationInfo=_headwordToAnnotationInfo - In the implementation block
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
-(id)retrieveProperty;
-(void)printContents;
-(void)setDictionaryList:(NSArray *)arg1 ;
-(char)processedSpecialEvent:(id)arg1 ;
-(id)initWithDictionaryList:(id)arg1 ;
-(void)setSelectedDictionaryIndex:(long long)arg1 byUser:(char)arg2 ;
-(void)setFindMethod:(long long)arg1 ;
-(void)revealedWithContents:(char)arg1 withTextSizeMultiplier:(double)arg2 ;
-(id)historySwipeView;
-(id)dictionariesWithFrontMatter;
-(void)showFrontMatterOfDictionary:(id)arg1 ;
-(void)dictSchemeHandlerForURL:(id)arg1 withLabel:(id)arg2 inDictionary:(id)arg3 ;
-(void)dictHandlerForStringLongest:(id)arg1 inDictionary:(id)arg2 ;
-(NSArray *)dictionaryList;
-(long long)selectedDictionaryIndex;
-(id)currentSnapshot;
-(void)dictionarySearchFieldStringDidChanged:(id)arg1 ;
-(void)dictionarySearchFieldConfirmed:(id)arg1 ;
-(char)lockingContentsForPrint;
-(void)prepareFinalize;
-(void)confirmIndexSelection;
-(char)isIndexVisible;
-(void)showHideIndexList:(char)arg1 ;
-(void)updateIndexListFromSnapshot:(id)arg1 ;
-(void)updateHeadwordArrayStateAndWindowTitle;
-(id)indexTableView;
-(void)_tableViewDoubleClicked:(id)arg1 ;
-(void)_changeWebViewAndIndexTextSize:(id)arg1 ;
-(void)asyncDictionarySearchDidFound:(id)arg1 ;
-(void)asyncDictionarySearchDidFinished:(id)arg1 ;
-(void)_snapshotIdleTimerFired;
-(id)_privateInit;
-(id)_convertPropertyIfNeeded:(id)arg1 ;
-(id)_activeDictionaryListWithSavedList:(id)arg1 ;
-(void)_setProperty:(id)arg1 forDictionary:(id)arg2 withKey:(id)arg3 ;
-(void)_cancelAllSearchesWithNewTransaction:(char)arg1 ;
-(id)_indexSplitView;
-(id)_propertyForDictionary:(id)arg1 withKey:(id)arg2 ;
-(id)_focusedDictionary;
-(void)_jumpToClickedTerm;
-(char)_processKeyEvent:(id)arg1 ;
-(void)_displayLinkForKey:(id)arg1 headword:(id)arg2 dictionaryID:(id)arg3 anchor:(id)arg4 flag:(unsigned)arg5 returnable:(char)arg6 ;
-(void)setIndexSelection:(long long)arg1 absolute:(char)arg2 ;
-(void)_scrollRowToVisible:(long long)arg1 direction:(long long)arg2 ;
-(void)_stopSnapshotIdleTimer;
-(void)_clearSearchResult;
-(void)_takeSnapshotIfNeeded;
-(void)_prepareForNewSearch:(id)arg1 displayString:(id)arg2 clearList:(char)arg3 ;
-(void)_startAsynchronousSearches;
-(void)_finalizeAsynchronousSearches;
-(void)_removeProperty:(id)arg1 forDictionary:(id)arg2 ;
-(void)_asyncDictionarySearchDidFoundInMainThread:(id)arg1 ;
-(void)_clearDelayedSearchStatus:(id)arg1 ;
-(char)_hasAsyncSearchCompletedLocalOnly:(char)arg1 ;
-(void)_appendFoundRecords:(id)arg1 isGuessed:(char)arg2 fromDictionary:(id)arg3 ;
-(void)_setWindowDictionaryScopeBar:(long long)arg1 ;
-(void)_clearContentsOfFrame:(id)arg1 withMessage:(char)arg2 ;
-(void)_updateIndexListWithAppendingRecords:(char)arg1 withSelection:(id)arg2 ;
-(void)_updateContentsForDictionary:(id)arg1 takeSnapshot:(char)arg2 reflectSearchField:(char)arg3 ;
-(id)selectedStringForFindPanel;
-(char)jumpToSelectionOnIndexList:(char)arg1 ;
-(void)_displayIndexSearchSelection:(char)arg1 ;
-(char)_hasDealyedFindCompletedForDictionary:(id)arg1 ;
-(id)_dataForIndexWord:(id)arg1 withKeyString:(id)arg2 inRecords:(id)arg3 inDictionary:(id)arg4 foundRecords:(id*)arg5 ;
-(char)_updateLoadingData:(id)arg1 forRecords:(id)arg2 ;
-(id)_frameForDictionary:(id)arg1 ;
-(void)_loadContentsForDictionary:(id)arg1 inFrame:(id)arg2 ;
-(void)_displayContents:(id)arg1 forRecords:(id)arg2 selection:(id)arg3 isLinked:(char)arg4 fromSnapshot:(char)arg5 withIndex:(char)arg6 ;
-(void)_showSplashPage;
-(void)_internalURLHandler:(id)arg1 withLabel:(id)arg2 fromReferer:(id)arg3 inDictionary:(id)arg4 ;
-(void)_leaveCurrentDisplay;
-(id)_snapshotOfCurrentIndexWithScrollPos:(char)arg1 ;
-(void)_takeSnapshotForcedByLink:(char)arg1 ;
-(id)_searchFieldTextForSelectedIndexTitle:(id)arg1 ;
-(void)_addSpellCorrectedMarkToSnapshot:(id)arg1 ;
-(char)_findWebViewOnDirection:(char)arg1 withKeyWord:(id)arg2 ;
-(void)_updateContentsForDictionarySwitch;
-(id)selectedDictionaryLabel;
-(void)_resetSnapshotIdleTimer;
-(void)_openLinkInNewWindow:(id)arg1 ;
-(void)_lookupInNewWindow:(id)arg1 ;
-(void)_setDividerState:(char)arg1 forDictionary:(id)arg2 ;
-(void)_finishLoadingAllFrameContents;
-(void)_delayedSubFrameFormatting:(id)arg1 ;
-(void)_formatFrame:(id)arg1 withScriptObject:(id)arg2 loadFinished:(char)arg3 ;
-(void)_displaySimpleMessage:(id)arg1 inFrame:(id)arg2 ;
-(void)scriptDocument:(id)arg1 printLog:(id)arg2 ;
-(void)scriptDocumentLoaded:(id)arg1 ;
-(void)scriptDocument:(id)arg1 scrollToPos:(float)arg2 inPageJump:(char)arg3 ;
-(void)scriptDocument:(id)arg1 scrollToPos:(float)arg2 animate:(char)arg3 ;
-(void)scriptDocument:(id)arg1 clickedDivider:(id)arg2 showIt:(char)arg3 ;
-(void)_rearrangeAccesibilityContentsLinks;
-(void)_delayedDisplayContentsRequest:(id)arg1 ;
-(void)_loadMainFramePage;
-(id)_generateMainFrameString;
-(void)_startLoadingWebView;
-(id)_focusedDictionaryID;
-(void)_clearFoundRecordList;
-(char)findOnDirection:(char)arg1 withKeyWord:(id)arg2 ;
-(char)_findIndexListOnDirection:(char)arg1 withKeyWord:(id)arg2 ;
-(void)_setFoundHeadwordArray:(id)arg1 ;
-(id)_searchTextForSelectedIndexTitle:(id)arg1 ;
-(void)_setDelayedSearchStatus:(id)arg1 ;
-(long long)findMethod;
-(char)indexListIsHidden;
-(NSMutableDictionary *)headwordToAnnotationInfo;
-(void)_startProgressAnimation;
-(void)_stopProgressAnimation;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(id)initWithProperty:(id)arg1 ;
-(void)changeTextSize:(char)arg1 ;
-(void)_stopLoadingWebView;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)doCommandBySelector:(SEL)arg1 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(char)hasSelection;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 ;
-(void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
@end

