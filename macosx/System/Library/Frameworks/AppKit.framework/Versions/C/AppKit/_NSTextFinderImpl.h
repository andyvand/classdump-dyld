/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindowDelegate.h>
#import <AppKit/NSComboBoxDelegate.h>
#import <AppKit/NSFindPatternManager.h>

@protocol NSTextFinderAsynchronousDocumentFindMatch;
@class NSTextFinder, NSTextFinderAsyncSearch, NSMutableRangeArray, NSMapTable, DOMRange, WebView, NSMutableArray, NSProgress, NSString;

@interface _NSTextFinderImpl : NSObject <NSWindowDelegate, NSComboBoxDelegate, NSFindPatternManager> {

	NSTextFinder* _finder;
	char _lastFindWasSuccessful;
	long long _lastChangeCount;
	long long _ignoreCancelCount;
	long long _matchCount;
	char _disableDelay;
	id _indicator;
	id _indicatorDelay;
	NSRange _matchRange;
	char _incremental;
	NSTextFinderAsyncSearch* _asyncSearch;
	NSMutableRangeArray* _incrementalMatchRanges;
	NSMapTable* _webViewsToDOMRanges;
	DOMRange* _matchDOMRange;
	WebView* _matchWebView;
	NSMutableArray* _matchWebViews;
	NSProgress* _currentAsynchronousDocumentFindProgress;
	id<NSTextFinderAsynchronousDocumentFindMatch> _asynchronousDocumentCurrentMatch;
	NSMutableArray* _incrementalAsynchronousDocumentMatches;

}

@property (retain) DOMRange * matchDOMRange;                                                                    //@synthesize matchDOMRange=_matchDOMRange - In the implementation block
@property (retain) WebView * matchWebView;                                                                      //@synthesize matchWebView=_matchWebView - In the implementation block
@property (retain) NSProgress * currentAsynchronousDocumentProgress;                                            //@synthesize currentAsynchronousDocumentFindProgress=_currentAsynchronousDocumentFindProgress - In the implementation block
@property (retain) id<NSTextFinderAsynchronousDocumentFindMatch> asynchronousDocumentCurrentMatch;              //@synthesize asynchronousDocumentCurrentMatch=_asynchronousDocumentCurrentMatch - In the implementation block
@property (retain) NSMutableArray * incrementalAsynchronousDocumentMatches;                                     //@synthesize incrementalAsynchronousDocumentMatches=_incrementalAsynchronousDocumentMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showWrapIndicatorInView:(id)arg1 forward:(char)arg2 ;
+(void)showWrapIndicatorImage:(id)arg1 inView:(id)arg2 ;
+(double)_indicatorDelayIntervalForSearchString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)style;
-(char)isVisible;
-(void)activate;
-(void)deactivate;
-(void)_setFinder:(id)arg1 ;
-(void)_setIncremental:(char)arg1 animate:(char)arg2 ;
-(void)_noteClientStringWillChange;
-(void)_performAction:(long long)arg1 ;
-(char)_validateAction:(long long)arg1 ;
-(void)_containerDidChange;
-(void)_cancelFindIndicator;
-(void)_setFindIndicatorNeedsUpdate:(char)arg1 ;
-(char)_findIndicatorNeedsUpdate;
-(id)_incrementalMatchRanges;
-(id)client;
-(void)appDidActivate:(id)arg1 ;
-(char)_needToRefreshFromPasteboard;
-(char)_loadSearchStringFromPasteboard;
-(void)setSearchOptions:(unsigned long long)arg1 ;
-(void)setSubstringMatchType:(long long)arg1 ;
-(char)supportsPatterns;
-(id)_findField;
-(void)setSearchString:(id)arg1 writeToPasteboard:(char)arg2 ;
-(unsigned long long)searchOptions;
-(void)_restoreDefaultSearchOptions;
-(void)_cancelIndicatorDelay;
-(void)_disableDelay;
-(void)_startIncrementalSearchShowingFirstMatch:(char)arg1 ;
-(NSMutableArray *)incrementalAsynchronousDocumentMatches;
-(void)_startIncrementalAsynchronousDocumentSearchShowingFirstMatch:(char)arg1 ;
-(void)_startWebViewSearchShowingFirstMatch:(char)arg1 ;
-(id)searchString;
-(void)setSearchString:(id)arg1 ;
-(long long)substringMatchType;
-(char)_hasFindPattern;
-(char)_hasValidFindPattern;
-(void)_setGlobalFindSettings;
-(void)_loadSearchStringToPasteboard;
-(char)_incremental;
-(id)_contentViewAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)_finder;
-(void)_showWrapIndicatorForward:(char)arg1 ;
-(char)_canSetSelection;
-(void)_setSelection:(id)arg1 ;
-(void)_showFindIndicatorForRange:(NSRange)arg1 ;
-(NSProgress *)currentAsynchronousDocumentProgress;
-(void)setCurrentAsynchronousDocumentProgress:(NSProgress *)arg1 ;
-(char)incremental_nextMatchAfterCurrentWebViewMatchForward:(char)arg1 wrap:(char)arg2 ;
-(WebView *)matchWebView;
-(DOMRange *)matchDOMRange;
-(void)nextMatchAfterCurrentRange:(id)arg1 inWebView:(id)arg2 forward:(char)arg3 wrap:(char)arg4 ;
-(void)_showFindIndicatorForDOMRange:(id)arg1 webView:(id)arg2 ;
-(unsigned long long)_asynchronousDocumentFindOptions:(char)arg1 ;
-(void)_updateIndicator;
-(void)_setMatchCount:(long long)arg1 ;
-(void)_didFindAsynchronousDocumentMatch:(id)arg1 wrapped:(char)arg2 forward:(char)arg3 ;
-(void)incremental_nextAsynchronousDocumentFindMatchForward:(char)arg1 wrap:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<NSTextFinderAsynchronousDocumentFindMatch>)asynchronousDocumentCurrentMatch;
-(void)_onMainThreadUpdateCurrentProgress:(id)arg1 thenProcessResultsUsingBlock:(/*^block*/id)arg2 ;
-(void)_performProgressReportingClientOperationUsingBlock:(/*^block*/id)arg1 ;
-(NSRange)_currentRange;
-(void)_updateIncrementalMatches;
-(NSRange)incremental_nextMatchAfterCurrentRange:(NSRange)arg1 forward:(char)arg2 wrap:(char)arg3 ;
-(NSRange)rangeOfNextMatchInString:(id)arg1 currentRange:(NSRange)arg2 forward:(char)arg3 wrap:(char)arg4 ;
-(void)_didFindMatchInRange:(NSRange)arg1 wrapped:(char)arg2 forward:(char)arg3 ;
-(id)replacementString;
-(void)_clearWebViewMatches;
-(void)_clearIncrementalMatches;
-(void)_clearCurrentMatch;
-(char)_clientShouldReplaceCharactersInRanges:(NSRange*)arg1 count:(unsigned long long)arg2 withStrings:(id)arg3 ;
-(void)_clientDidReplaceCharacters;
-(void)_performReplace:(/*^block*/id)arg1 ;
-(void)findForward:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_DOMRangeMatchesForString:(id)arg1 webView:(id)arg2 inDOMRange:(id)arg3 ;
-(id)incremental_allMatchesInRanges:(id)arg1 ;
-(id)rangesOfMatchesInString:(id)arg1 inRanges:(id)arg2 ;
-(void)_hideIncrementalMatchesAndAnimate:(char)arg1 ;
-(void)handleResult:(long long)arg1 forAction:(long long)arg2 ;
-(void)showReplace;
-(void)replaceAllInSelectionOnly:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)selectAllInSelectionOnly:(char)arg1 ;
-(void)replace:(/*^block*/id)arg1 ;
-(void)replaceAndFind:(/*^block*/id)arg1 ;
-(void)takeSearchString:(/*^block*/id)arg1 ;
-(void)hideReplace;
-(char)_canReplace;
-(id)incremental_matchesIntersectingRanges:(id)arg1 ;
-(NSRange)_currentMatchRange;
-(char)incremental_hasMatchInRange:(NSRange)arg1 ;
-(void)_delayFeedbackWithScrolling:(char)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_foundFirstMatchInRange:(NSRange)arg1 show:(char)arg2 disableDelay:(char)arg3 ;
-(void)_asyncSearchCompleted;
-(void)_resetIncrementalSearch;
-(void)setIncrementalAsynchronousDocumentMatches:(NSMutableArray *)arg1 ;
-(void)_changeIncrementalMatches:(unsigned long long)arg1 indexes:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)_getNextMatchAfterCurrentRange:(NSRange)arg1 forward:(char)arg2 wrap:(char)arg3 result:(NSRange*)arg4 ;
-(id)_replaceField;
-(void)_addDOMRange:(id)arg1 webView:(id)arg2 ;
-(void)_searchWebViewsShowingFirstMatch:(char)arg1 ;
-(void)setMatchDOMRange:(DOMRange *)arg1 ;
-(void)setMatchWebView:(WebView *)arg1 ;
-(id)_matchDOMRangesForWebView:(id)arg1 ;
-(long long)_matchCount;
-(void)setAsynchronousDocumentCurrentMatch:(id<NSTextFinderAsynchronousDocumentFindMatch>)arg1 ;
-(id)findFieldForField:(id)arg1 ;
-(id)replaceFieldForField:(id)arg1 ;
-(void)findPatternField:(id)arg1 findPatternDoubleClicked:(id)arg2 ;
-(char)_lastFindWasSuccessful;
-(id)_visibleMatchRanges;
-(char)_selectionIsMatch;
-(void)addStringToRecentSearchStrings:(id)arg1 ;
-(void)addStringToRecentReplaceStrings:(id)arg1 ;
-(char)_isWebViewMatchCountOverLimit;
-(unsigned long long)_maxWebViewMatchCount;
-(id)_matchWebViews;
-(char)supportsFullWord;
@end

