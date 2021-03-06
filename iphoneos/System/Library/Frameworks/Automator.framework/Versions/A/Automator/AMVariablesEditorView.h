/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class NSBox, NSTextField, NSPopUpButton, NSObjectController, NSTabView, AMTokenField, AMPathPopUpButton, OSAScriptView, NSTextView, NSButton, NSTokenField, AMVariablesEditorDateFormatDelegate, AMVariablesEditorController, NSColor, CIColor;

@interface AMVariablesEditorView : NSView {

	NSBox* _nameBox;
	NSBox* _buttonBox;
	NSBox* _customDateFormatBox;
	NSBox* _customTimeFormatBox;
	NSTextField* nameField;
	NSPopUpButton* typePopUp;
	NSObjectController* _variableController;
	NSTabView* _tabView;
	AMTokenField* valueField;
	NSPopUpButton* _dateFormatPopUp;
	NSPopUpButton* _timeFormatPopUp;
	AMPathPopUpButton* _pathPopUp;
	OSAScriptView* _scriptView;
	NSPopUpButton* _shellScriptShell;
	NSTextView* _shellScriptView;
	NSButton* _doneButton;
	NSButton* _cancelButton;
	NSTextField* _dayOfWeekText;
	NSTextField* _dayOfMonthText;
	NSTextField* _monthText;
	NSTextField* _yearText;
	NSTokenField* _customDateFormat;
	NSTokenField* _dayOfWeek;
	NSTokenField* _dayOfMonth;
	NSTokenField* _month;
	NSTokenField* _year;
	NSTokenField* _customTimeFormat;
	NSTokenField* _hour;
	NSTokenField* _minute;
	NSTokenField* _second;
	NSTokenField* _ampm;
	NSTokenField* _timezone;
	NSTokenField* _milliseconds;
	AMVariablesEditorDateFormatDelegate* _dateFormatDelegate;
	AMVariablesEditorController* _controller;
	char _isLayingOutControls;
	char _useCustomDateFormat;
	char _useCustomTimeFormat;
	char _didSwitchToCustomDateFormat;
	char _didSwitchToDefinedDateFormat;
	char _didSwitchToCustomTimeFormat;
	char _didSwitchToDefinedTimeFormat;
	NSColor* titleTextColor;
	NSColor* titlebarTopLineColor;
	NSColor* titlebarBottomLineColor;
	CIColor* titlebarTopGradientColor;
	CIColor* titlebarBottomGradientColor;
	NSColor* viewAreaTopLineColor;
	NSColor* viewAreaBottomLineColor;
	CIColor* viewAreaTopGradientColor;
	CIColor* viewAreaBottomGradientColor;
	CIColor* windowBorderColor;
	CGRect viewFrame;
	CGRect titlebarFrame;
	CGPathRef _windowClipPath;
	CGPathRef _borderClipPath;

}
-(void)reLayout;
-(void)setCustomDateFormatControlsAreHidden:(char)arg1 ;
-(void)setUseCustomDateFormat:(char)arg1 ;
-(void)setCustomTimeFormatControlsAreHidden:(char)arg1 ;
-(void)setUseCustomTimeFormat:(char)arg1 ;
-(void)setupDateTimeControlTokenField:(id)arg1 ;
-(void)populateDateFormatPopup;
-(void)useDateFormat:(id)arg1 ;
-(void)useCustomDateFormat:(id)arg1 ;
-(char)useCustomDateFormat;
-(void)setDidSwitchToDefinedDateFormat:(char)arg1 ;
-(void)setDidSwitchToCustomDateFormat:(char)arg1 ;
-(void)populateTimeFormatPopup;
-(void)useTimeFormat:(id)arg1 ;
-(void)useCustomTimeFormat:(id)arg1 ;
-(char)useCustomTimeFormat;
-(void)setDidSwitchToDefinedTimeFormat:(char)arg1 ;
-(void)setDidSwitchToCustomTimeFormat:(char)arg1 ;
-(void)setupButton:(id)arg1 ;
-(void)setupDateControls;
-(void)setupTimeControls;
-(void)unSetupDateTimeControls;
-(void)setupShellScriptControls;
-(void)updateWindowClipPath;
-(CGPathRef)newTodoRoundedWindowPathForRect:(CGRect)arg1 ;
-(void)setWindowClipPath:(CGPathRef)arg1 ;
-(void)setBorderClipPath:(CGPathRef)arg1 ;
-(id)_customDateFormat;
-(id)_customTimeFormat;
-(id)_shellScriptShell;
-(id)variableController;
-(id)currentDateValues;
-(void)finishInitialLayout;
-(char)didSwitchToCustomDateFormat;
-(char)didSwitchToDefinedDateFormat;
-(char)didSwitchToCustomTimeFormat;
-(char)didSwitchToDefinedTimeFormat;
-(double)customDateFormatBoxHeight;
-(double)customTimeFormatBoxHeight;
-(CGPathRef)windowClipPath;
-(void)setTitleTextColor:(id)arg1 ;
-(void)setTitlebarTopLineColor:(id)arg1 ;
-(void)setTitlebarBottomLineColor:(id)arg1 ;
-(void)setTitlebarTopGradientColor:(id)arg1 ;
-(void)setTitlebarBottomGradientColor:(id)arg1 ;
-(void)setViewAreaTopLineColor:(id)arg1 ;
-(void)setViewAreaBottomLineColor:(id)arg1 ;
-(void)setViewAreaTopGradientColor:(id)arg1 ;
-(void)setViewAreaBottomGradientColor:(id)arg1 ;
-(void)edit:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)controller;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)sizeToFit;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setController:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(void)awakeFromNib;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(long long)arg3 ;
-(void)updateLayout;
@end

