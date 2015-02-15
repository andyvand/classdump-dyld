/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/CalUIResizingTextField.h>
#import <CalendarUI/NSTextFieldDelegate.h>
#import <CalendarUI/NSTableViewDelegate.h>
#import <CalendarUI/NSTableViewDataSource.h>
#import <CalendarUI/NSWindowDelegate.h>

@protocol CalUISuggestionsFieldDelegate;
@class NSArray, CalUISuggestionsWindow, CalUISuggestionsTable, NSProgressIndicator, NSString;

@interface CalUISuggestionsField : CalUIResizingTextField <NSTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource, NSWindowDelegate> {

	char _preselectsFirstSuggestion;
	char _shouldLogSuggestionAccuracy;
	char _showsSpinner;
	char _isEditing;
	char _suggestionWasChosen;
	id<CalUISuggestionsFieldDelegate> _suggestionsDelegate;
	unsigned long long _minimumQueryLength;
	NSArray* _currentSuggestions;
	CalUISuggestionsWindow* _suggestionWindow;
	CalUISuggestionsTable* _table;
	NSProgressIndicator* _spinner;

}

@property (__weak) id<CalUISuggestionsFieldDelegate> suggestionsDelegate;              //@synthesize suggestionsDelegate=_suggestionsDelegate - In the implementation block
@property (assign) char preselectsFirstSuggestion;                                     //@synthesize preselectsFirstSuggestion=_preselectsFirstSuggestion - In the implementation block
@property (assign) unsigned long long minimumQueryLength;                              //@synthesize minimumQueryLength=_minimumQueryLength - In the implementation block
@property (assign) char shouldLogSuggestionAccuracy;                                   //@synthesize shouldLogSuggestionAccuracy=_shouldLogSuggestionAccuracy - In the implementation block
@property (retain) NSArray * currentSuggestions;                                       //@synthesize currentSuggestions=_currentSuggestions - In the implementation block
@property (retain) CalUISuggestionsWindow * suggestionWindow;                          //@synthesize suggestionWindow=_suggestionWindow - In the implementation block
@property (retain) CalUISuggestionsTable * table;                                      //@synthesize table=_table - In the implementation block
@property (retain) NSProgressIndicator * spinner;                                      //@synthesize spinner=_spinner - In the implementation block
@property (assign) char showsSpinner;                                                  //@synthesize showsSpinner=_showsSpinner - In the implementation block
@property (assign) char isEditing;                                                     //@synthesize isEditing=_isEditing - In the implementation block
@property (assign) char suggestionWasChosen;                                           //@synthesize suggestionWasChosen=_suggestionWasChosen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)minimumQueryLength;
-(void)setIsEditing:(char)arg1 ;
-(id)initWithResizeEnabled:(char)arg1 ;
-(void)setSuggestionsDelegate:(id<CalUISuggestionsFieldDelegate>)arg1 ;
-(void)setShouldLogSuggestionAccuracy:(char)arg1 ;
-(void)setPreselectsFirstSuggestion:(char)arg1 ;
-(void)setShowsSpinner:(char)arg1 ;
-(void)setCurrentSuggestions:(NSArray *)arg1 ;
-(char)chooseSelectedRow;
-(void)setTable:(CalUISuggestionsTable *)arg1 ;
-(void)setSuggestionWindow:(CalUISuggestionsWindow *)arg1 ;
-(void)updateWindowFrameOrigin;
-(void)setSuggestionWasChosen:(char)arg1 ;
-(CalUISuggestionsWindow *)suggestionWindow;
-(void)hideSuggestionsWindow;
-(id<CalUISuggestionsFieldDelegate>)suggestionsDelegate;
-(char)shouldLogSuggestionAccuracy;
-(char)suggestionWasChosen;
-(void)clearSuggestions;
-(NSArray *)currentSuggestions;
-(id)currentlySelectedSuggestion;
-(void)updateFieldValueWithSuggestion:(id)arg1 ;
-(char)showsSpinner;
-(void)updateSuggestionWindowWithSuggestions:(id)arg1 ;
-(char)preselectsFirstSuggestion;
-(id)viewForRow:(long long)arg1 ;
-(void)setMinimumQueryLength:(unsigned long long)arg1 ;
-(NSProgressIndicator *)spinner;
-(void)setSpinner:(NSProgressIndicator *)arg1 ;
-(id)init;
-(id)accessibilitySharedFocusElements;
-(char)isEditing;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(void)tableView:(id)arg1 didClickTableColumn:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)awakeFromNib;
-(CalUISuggestionsTable *)table;
-(char)_window:(id)arg1 shouldCloseForClosingParentPopoverWindowWithTransientContext:(char)arg2 ;
-(void)setup;
@end

