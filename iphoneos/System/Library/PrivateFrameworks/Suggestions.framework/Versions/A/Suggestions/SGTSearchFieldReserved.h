/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SGTSearchFieldQueryScopeDelegate;
@class NSArray, SGTInput, NSMutableArray, NSMapTable, NSMutableSet, SGTCompletionWindow, SGTCompletionTableView, NSString, SGTSuggestion, SGTQueryGenius, NSTimer, SGTFadeWindowEffect, NSWindowController, _SGTQueryScopeMenuOverride, NSProgressIndicator, NSDictionary;

@interface SGTSearchFieldReserved : NSObject {

	NSArray* suggesters;
	SGTInput* currentInput;
	NSMutableArray* categories;
	NSMapTable* suggestionsByCategory;
	NSMutableSet* categoriesWithIntermediateResults;
	NSArray* displayCategories;
	NSMapTable* displaySuggestionsByCategory;
	SGTCompletionWindow* completionWindow;
	SGTCompletionTableView* completionTableView;
	char settingValue;
	NSString* userTypedString;
	NSMutableArray* suggestions;
	SGTSuggestion* currentSuggestion;
	NSArray* freeTextSuggestions;
	char abortSearchWhenEmptyString;
	char textChangingProgrammatically;
	char open;
	char isDisplayingStaticSuggestions;
	char observingApplicationState;
	char interactingWithButton;
	char textIsMarked;
	char ignoreNextTextValidation;
	unsigned long long textChangedID;
	long long typingScope;
	char acceptsScopeSuggestion;
	SGTQueryGenius* genius;
	id eventMonitor;
	NSTimer* autocloseTimer;
	SGTFadeWindowEffect* autocloseFadeEffect;
	double lastInputStartTime;
	id debugEventMonitor;
	NSWindowController* debugWindowController;
	long long savedSelectionIndex;
	char currentSelectionIsAutofirst;
	char selectingBestSuggestion;
	char enforceSelectionWhenPossible;
	char keepCompletionWindowOnWindowDrag;
	char ignoreWindowResizeNotifications;
	char _highlightsMatches;
	id<SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
	_SGTQueryScopeMenuOverride* queryScopeMenuOverride;
	NSProgressIndicator* spinner;
	long long currentRequest;
	double queryScopeMenuSpinTime;
	NSDictionary* searchDelegateUserInfo;
	NSMutableArray* selectionEventCache;
	SEL selectionSelectorCache;
	char queryStringChangesAreTransient;
	unsigned long long oldStringLength;

}
-(id)init;
-(void)dealloc;
@end

