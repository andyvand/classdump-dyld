/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/Banner.h>

@class NSSearchField, NSSegmentedControl, NSButton, NSTextField, NSTimer;

@interface FindBanner : Banner {

	NSSearchField* searchField;
	NSSegmentedControl* nextPreviousControl;
	NSButton* doneButton;
	NSTextField* statusField;
	NSTimer* _clearMatchCountTimer;
	int _lastFindPasteboardChangeCount;
	unsigned _matchCount;
	char _nextReturnShouldPerformFind;
	char _suppressUpdatingSearchFieldFromFindPasteboard;
	char _forceUpdateSearchFieldFromFindPasteboardScheduled;
	char _beepOnFailure;

}
+(int)bannerSortOrder;
+(unsigned)_optionsForFindingMatches;
+(unsigned)optionsForCountingMatches;
+(unsigned)maximumMatchCount;
-(void)didInstallBannerView;
-(void)willUninstallBannerView;
-(id)bannerNibName;
-(id)initWithContentViewController:(SearchableWebContentViewController*)arg1 ;
-(void)detachContentViewController;
-(id)_searchString;
-(void)focusSearchField;
-(void)hideOverlay;
-(void)findNext:(id)arg1 ;
-(void)findPrevious:(id)arg1 ;
-(void)updateDisplayedMatchCountForString:(id)arg1 to:(unsigned)arg2 ;
-(void)_clearStatus;
-(id)_imageForBannerControlWithBaseName:(id)arg1 ;
-(long long)_segmentIndexForFindPrevious;
-(long long)_segmentIndexForFindNext;
-(void)takeFindBehaviorFromMenuItem:(id)arg1 ;
-(void)_stopObservingWindowAndBannerView;
-(void)_updateHighlightedMatches;
-(void)_updateNextAndPreviousButtons;
-(void)_startObservingWindowAndBannerView;
-(void)_makeSearchFieldFirstResponder;
-(void)_cancelClearMatchCountTimer;
-(void)_findWithDirection:(char)arg1 beepOnFailure:(char)arg2 ;
-(void)_updateSearchFieldFromFindPasteboard;
-(char)readyToFind;
-(id)_computeStatusText;
-(void)_setStatus:(id)arg1 ;
-(void)_updateFindPasteboardFromSearchField;
-(void)_findString:(id)arg1 direction:(char)arg2 beepOnFailure:(char)arg3 ;
-(char)_canHighlightAllMatches;
-(void)_windowDidUpdate:(id)arg1 ;
-(void)_highlightAllMatches;
-(void)setSearchFieldString:(id)arg1 ;
-(void)findFromNextPreviousControl:(id)arg1 ;
-(void)findFromSearchField:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
@end

