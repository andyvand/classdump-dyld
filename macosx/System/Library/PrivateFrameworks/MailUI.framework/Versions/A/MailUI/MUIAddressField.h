/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSControl.h>
#import <MailUI/CNContactPickerDelegate.h>
#import <MailUI/CNAutocompleteFetchDelegate.h>
#import <MailUI/NSTableViewDataSource.h>
#import <MailUI/NSTableViewDelegate.h>
#import <MailUI/NSTokenFieldDelegate.h>

@protocol CNCancelable, MUITokenAddressDelegate;
@class NSString, NSScrollView, MUITokenAddressField, NSProgressIndicator, NSButton, NSWindow, NSTableView, CNAutocompleteResult, NSMutableArray, NSLayoutConstraint, NSMapTable, NSView, NSArray;

@interface MUIAddressField : NSControl <CNContactPickerDelegate, CNAutocompleteFetchDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTokenFieldDelegate> {

	SEL _action;
	id _target;
	unsigned long long _style;
	char _ignoreCompletionForTextChange;
	char _isShowingContactPicker;
	char _shouldDrawFocusRing;
	char _isBoundToTokenField;
	char _isShowingSelectedCompletion;
	NSString* _senderDomain;
	NSScrollView* _scrollView;
	MUITokenAddressField* _tokenField;
	NSProgressIndicator* _progressIndicator;
	NSButton* _addContactButton;
	NSWindow* _completionWindow;
	NSTableView* _completionTableView;
	NSScrollView* _completionTableScrollView;
	CNAutocompleteResult* _selectedResult;
	NSMutableArray* _completionResults;
	id<CNCancelable> _currentSearchRequest;
	NSString* _previousPartialString;
	double _completionStartTime;
	long long _addressDisplayMode;
	id _tokenValue;
	NSLayoutConstraint* _addContactButtonWidthConstraint;
	NSLayoutConstraint* _addContactButtonTrailingConstraint;
	NSLayoutConstraint* _tokenFieldTrailingConstraint;
	NSLayoutConstraint* _tokenFieldBottomConstraint;
	NSLayoutConstraint* _addressFieldHeightConstraint;
	NSMapTable* _representedObjectsCache;
	NSMutableArray* _autocompletionOperations;
	NSView* _progressIndicatorContainer;
	id<MUITokenAddressDelegate> _tokenAddressDelegate;
	NSRange _completionHighlightRange;

}

@property (nonatomic,copy) NSString * senderDomain;                                                       //@synthesize senderDomain=_senderDomain - In the implementation block
@property (nonatomic,retain) NSArray * addresses; 
@property (nonatomic,readonly) char isEmpty; 
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,retain) MUITokenAddressField * tokenField;                                           //@synthesize tokenField=_tokenField - In the implementation block
@property (assign,nonatomic) char ignoreCompletionForTextChange;                                          //@synthesize ignoreCompletionForTextChange=_ignoreCompletionForTextChange - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * addressFieldHeightConstraint;                           //@synthesize addressFieldHeightConstraint=_addressFieldHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<MUITokenAddressDelegate> tokenAddressDelegate;                     //@synthesize tokenAddressDelegate=_tokenAddressDelegate - In the implementation block
@property (nonatomic,retain) NSScrollView * scrollView;                                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * progressIndicator;                                     //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) NSView * progressIndicatorContainer;                                         //@synthesize progressIndicatorContainer=_progressIndicatorContainer - In the implementation block
@property (nonatomic,retain) NSButton * addContactButton;                                                 //@synthesize addContactButton=_addContactButton - In the implementation block
@property (nonatomic,retain) NSWindow * completionWindow;                                                 //@synthesize completionWindow=_completionWindow - In the implementation block
@property (nonatomic,retain) NSTableView * completionTableView;                                           //@synthesize completionTableView=_completionTableView - In the implementation block
@property (nonatomic,retain) NSScrollView * completionTableScrollView;                                    //@synthesize completionTableScrollView=_completionTableScrollView - In the implementation block
@property (nonatomic,copy) NSString * previousPartialString;                                              //@synthesize previousPartialString=_previousPartialString - In the implementation block
@property (nonatomic,retain) CNAutocompleteResult * selectedResult;                                       //@synthesize selectedResult=_selectedResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionResults;                                          //@synthesize completionResults=_completionResults - In the implementation block
@property (nonatomic,retain) id<CNCancelable> currentSearchRequest;                                       //@synthesize currentSearchRequest=_currentSearchRequest - In the implementation block
@property (assign,nonatomic) double completionStartTime;                                                  //@synthesize completionStartTime=_completionStartTime - In the implementation block
@property (assign,nonatomic) NSRange completionHighlightRange;                                            //@synthesize completionHighlightRange=_completionHighlightRange - In the implementation block
@property (assign,nonatomic) long long addressDisplayMode;                                                //@synthesize addressDisplayMode=_addressDisplayMode - In the implementation block
@property (nonatomic,retain) id tokenValue;                                                               //@synthesize tokenValue=_tokenValue - In the implementation block
@property (assign,nonatomic) char isShowingContactPicker;                                                 //@synthesize isShowingContactPicker=_isShowingContactPicker - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * addContactButtonWidthConstraint;                 //@synthesize addContactButtonWidthConstraint=_addContactButtonWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * addContactButtonTrailingConstraint;              //@synthesize addContactButtonTrailingConstraint=_addContactButtonTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * tokenFieldTrailingConstraint;                    //@synthesize tokenFieldTrailingConstraint=_tokenFieldTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * tokenFieldBottomConstraint;                      //@synthesize tokenFieldBottomConstraint=_tokenFieldBottomConstraint - In the implementation block
@property (nonatomic,retain) NSMapTable * representedObjectsCache;                                        //@synthesize representedObjectsCache=_representedObjectsCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * autocompletionOperations;                                   //@synthesize autocompletionOperations=_autocompletionOperations - In the implementation block
@property (assign,nonatomic) char shouldDrawFocusRing;                                                    //@synthesize shouldDrawFocusRing=_shouldDrawFocusRing - In the implementation block
@property (assign,nonatomic) char isBoundToTokenField;                                                    //@synthesize isBoundToTokenField=_isBoundToTokenField - In the implementation block
@property (assign,nonatomic) char isShowingSelectedCompletion;                                            //@synthesize isShowingSelectedCompletion=_isShowingSelectedCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_contactPicker;
+(id)keyPathsForValuesAffectingAddresses;
+(id)readablePasteboardTypes;
-(void)_registerForNotifications;
-(char)shouldDrawFocusRing;
-(void)_muiAddressFieldCommonInit;
-(void)_configureScrollView;
-(void)_configureProgressIndicator;
-(void)_configureAddContactButton;
-(void)_configureConstraints;
-(void)_refreshAddressDisplayMode;
-(NSButton *)addContactButton;
-(void)_sharedPreferencesChanged:(id)arg1 ;
-(void)_tokenFieldGainedFocus:(id)arg1 ;
-(void)_scrollerStyleDidChange:(id)arg1 ;
-(void)_windowDidChangeKeyStatus:(id)arg1 ;
-(void)_bindOrUnbindToTokenField:(char)arg1 ;
-(char)isBoundToTokenField;
-(void)setIsBoundToTokenField:(char)arg1 ;
-(void)_objectDidTriggerAction:(id)arg1 ;
-(void)_tokenFieldCommitedEditing:(id)arg1 ;
-(void)setProgressIndicatorContainer:(NSView *)arg1 ;
-(id)_addContactImage;
-(void)_showContactPicker:(id)arg1 ;
-(void)_updateTrailingConstraints;
-(NSLayoutConstraint *)addContactButtonTrailingConstraint;
-(NSLayoutConstraint *)tokenFieldTrailingConstraint;
-(void)setCompletionHighlightRange:(NSRange)arg1 ;
-(NSString *)senderDomain;
-(NSMutableArray *)completionResults;
-(void)_startCompleting;
-(NSMutableArray *)autocompletionOperations;
-(void)setSelectedResult:(CNAutocompleteResult *)arg1 ;
-(id)_completionStringForSelectedRecord;
-(void)setIsShowingSelectedCompletion:(char)arg1 ;
-(NSRange)completionHighlightRange;
-(id)tokenValue;
-(id)_tokensWithGroupTokensExpanded:(id)arg1 ;
-(void)setTokenValue:(id)arg1 ;
-(CNAutocompleteResult *)selectedResult;
-(void)_showSelectedCompletionInField;
-(double)completionStartTime;
-(void)_cancelCompletion;
-(void)_cleanUpOperationArray;
-(void)setShouldDrawFocusRing:(char)arg1 ;
-(NSLayoutConstraint *)addressFieldHeightConstraint;
-(void)setAddressFieldHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSView *)progressIndicatorContainer;
-(void)setAddContactButton:(NSButton *)arg1 ;
-(void)setAddContactButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAddContactButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTokenFieldTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(char)isShowingSelectedCompletion;
-(char)ignoreCompletionForTextChange;
-(void)setCompletionStartTime:(double)arg1 ;
-(char)isShowingContactPicker;
-(NSLayoutConstraint *)addContactButtonWidthConstraint;
-(char)_hasFocus;
-(void)_completeSelection:(id)arg1 ;
-(NSMapTable *)representedObjectsCache;
-(id<MUITokenAddressDelegate>)tokenAddressDelegate;
-(void)setIgnoreCompletionForTextChange:(char)arg1 ;
-(void)setIsShowingContactPicker:(char)arg1 ;
-(void)_addAddress:(id)arg1 contact:(id)arg2 ;
-(void)_resizeFieldIfNeeded;
-(char)_addressFieldNeedsToBeScrollable;
-(NSLayoutConstraint *)tokenFieldBottomConstraint;
-(void)setSenderDomain:(NSString *)arg1 ;
-(void)setCompletionResults:(NSMutableArray *)arg1 ;
-(void)setTokenFieldBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRepresentedObjectsCache:(NSMapTable *)arg1 ;
-(void)setAutocompletionOperations:(NSMutableArray *)arg1 ;
-(void)setTokenAddressDelegate:(id<MUITokenAddressDelegate>)arg1 ;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)contactPicker:(id)arg1 didChooseContact:(id)arg2 key:(id)arg3 value:(id)arg4 ;
-(void)contactPickerWillClose:(id)arg1 ;
-(void)contactPickerDidClose:(id)arg1 ;
-(void)setTokenField:(MUITokenAddressField *)arg1 ;
-(void)setPreviousPartialString:(NSString *)arg1 ;
-(void)setCompletionWindow:(NSWindow *)arg1 ;
-(NSTableView *)completionTableView;
-(void)setCompletionTableView:(NSTableView *)arg1 ;
-(void)setCompletionTableScrollView:(NSScrollView *)arg1 ;
-(MUITokenAddressField *)tokenField;
-(NSString *)previousPartialString;
-(void)_presentCompletionWindow;
-(id)_completionTableView;
-(void)_selectTableViewRow:(unsigned long long)arg1 ;
-(NSScrollView *)completionTableScrollView;
-(void)_configureTokenField;
-(void)setAddressDisplayMode:(long long)arg1 ;
-(long long)addressDisplayMode;
-(void)setCurrentSearchRequest:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)currentSearchRequest;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)updateConstraints;
-(id)target;
-(SEL)action;
-(void)setNextKeyView:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setAccessibilityTitleUIElement:(id)arg1 ;
-(id)accessibilityChildren;
-(char)isEmpty;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)becomeFirstResponder;
-(void)viewDidMoveToWindow;
-(void)viewDidMoveToSuperview;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)canBecomeKeyView;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)drawFocusRingMask;
-(CGRect)focusRingMaskBounds;
-(NSScrollView *)scrollView;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSProgressIndicator *)progressIndicator;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(NSWindow *)completionWindow;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3 ;
-(char)tokenField:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSArray *)addresses;
@end

