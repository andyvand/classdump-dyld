/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Archive Utility.app/Contents/MacOS/Archive Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Archive Utility/ProgressViewProtocol.h>

@class NSView, NSButton, NSTextField, NSProgressIndicator, NSImageView, NSBox, NSWindow, NSString;

@interface ProgressViewController : NSObject <ProgressViewProtocol> {

	NSView* _view;
	NSView* _progressView;
	NSButton* _progressCancelButton;
	NSButton* _progressSkipButton;
	NSTextField* _progressInformationTextField;
	NSTextField* _progressMessageTextField;
	NSProgressIndicator* _progressProgressIndicator;
	NSView* _alertView;
	NSButton* _alertOKButton;
	NSButton* _alertCancelButton;
	NSTextField* _alertTitleTextField;
	NSTextField* _alertMessageTextField;
	NSImageView* _alertImageView;
	NSBox* _separator;
	NSWindow* passwordSheet;
	NSTextField* passwordSheetPrompt;
	NSTextField* passwordSheetTextField;
	char _progressCancelPending;
	char _progressSkipPending;
	SEL _progressCancelSelector;
	SEL _progressSkipSelector;
	char _alertOKPending;
	char _alertCancelPending;
	SEL _alertOKSelector;
	SEL _alertCancelSelector;
	char _isAlertView;
	id _delegate;
	id _context;
	NSString* _passwordString;
	char _userCancelledSheet;

}
+(id)progressViewController;
-(void)setAlertCancelSelector:(SEL)arg1 ;
-(void)setAlertOKSelector:(SEL)arg1 ;
-(void)setAlertMessageString:(id)arg1 ;
-(void)setAlertCancelButtonTitle:(id)arg1 ;
-(void)setAlertCancelEnabled:(char)arg1 ;
-(void)setAlertOKButtonTitle:(id)arg1 ;
-(void)setAlertOKEnabled:(char)arg1 ;
-(void)showAlertView;
-(void)setProgressCancelSelector:(SEL)arg1 ;
-(void)setProgressSkipSelector:(SEL)arg1 ;
-(void)setProgressPrimaryText:(id)arg1 ;
-(void)setProgressSecondaryText:(id)arg1 ;
-(void)setProgressCancelButtonTitle:(id)arg1 ;
-(void)setProgressCancelEnabled:(char)arg1 ;
-(void)setProgressSkipButtonTitle:(id)arg1 ;
-(void)setProgressSkipEnabled:(char)arg1 ;
-(void)setProgressIsDeterminate:(char)arg1 ;
-(void)showProgressView;
-(void)displaySeparator:(char)arg1 ;
-(id)attr;
-(void)setProgressCancelPending:(char)arg1 ;
-(void)setProgressSkipPending:(char)arg1 ;
-(SEL)progressCancelSelector;
-(void)invokeSelector:(SEL)arg1 withItem:(id)arg2 ;
-(SEL)progressSkipSelector;
-(void)setAlertCancelPending:(char)arg1 ;
-(void)setAlertOKPending:(char)arg1 ;
-(SEL)alertCancelSelector;
-(SEL)alertOKSelector;
-(void)skipOrCancelSelector:(id)arg1 ;
-(void)doProgressCancel:(id)arg1 ;
-(void)doProgressSkip:(id)arg1 ;
-(void)doAlertCancel:(id)arg1 ;
-(void)doAlertOK:(id)arg1 ;
-(void)showPasswordSheet:(id)arg1 ;
-(void)acceptPasswordSheet:(id)arg1 ;
-(void)cancelPasswordSheet:(id)arg1 ;
-(id)progressView;
-(id)alertView;
-(char)userDidCancelPasswordSheet;
-(id)progressSecondaryText;
-(id)progressTertiaryText;
-(void)setProgressTertiaryText:(id)arg1 ;
-(char)progressIsDeterminate;
-(void)setProgressPercentDone:(double)arg1 ;
-(void)showAlertViewWithSound:(char)arg1 withDockBounce:(char)arg2 withMakeKeyAndOrderFront:(char)arg3 ;
-(char)alertCancelEnabled;
-(char)alertOKEnabled;
-(void)setAlertSystemIcon:(unsigned)arg1 ;
-(char)progressCancelEnabled;
-(id)progressCancelButtonTitle;
-(char)progressSkipEnabled;
-(id)progressSkipButtonTitle;
-(id)progressPrimaryText;
-(id)progressMessageString;
-(void)setProgressMessageString:(id)arg1 ;
-(id)progressInformationText;
-(void)setProgressInformationText:(id)arg1 ;
-(double)progressPercentDone;
-(char)progressCancelPending;
-(char)progressSkipPending;
-(void)setAlertImage:(id)arg1 ;
-(id)alertCancelButtonTitle;
-(id)alertOKButtonTitle;
-(id)alertMessageString;
-(void)setAlertTitleString:(id)arg1 ;
-(char)alertCancelPending;
-(char)alertOKPending;
-(void)setPasswordString:(id)arg1 ;
-(id)passwordString;
-(id)separator;
-(id)alertTitleString;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)context;
-(id)view;
-(id)delegate;
-(void)startAnimation;
-(void)awakeFromNib;
-(void)setContext:(id)arg1 ;
@end

