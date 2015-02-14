/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AOSUI/MMPinFieldViewDelegate.h>

@protocol MMCSCPinSetupViewControllerDelegate;
@class NSImageView, NSTextField, NSView, MMPinFieldView, NSButton, NSString;

@interface MMCSCPinSetupViewController : NSViewController <MMPinFieldViewDelegate> {

	id<MMCSCPinSetupViewControllerDelegate> _delegate;
	NSImageView* _pinViewImageView;
	NSTextField* _pinViewTitle;
	NSTextField* _pinViewMessage;
	NSView* _pinViewPinFieldPlaceholder;
	MMPinFieldView* _pinViewPinFieldView;
	NSTextField* _pinViewEnterLabelText;
	NSButton* _pinViewHelpButton;
	NSButton* _pinViewConfirmButton;
	NSButton* _pinViewCancelButton;
	NSButton* _pinViewAdvancedButton;
	NSString* _initialPassPhrase;
	NSString* _passPhrase;
	long long _currentState;

}

@property (assign) id<MMCSCPinSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSImageView * pinViewImageView;                                //@synthesize pinViewImageView=_pinViewImageView - In the implementation block
@property (assign) NSTextField * pinViewTitle;                                    //@synthesize pinViewTitle=_pinViewTitle - In the implementation block
@property (assign) NSTextField * pinViewMessage;                                  //@synthesize pinViewMessage=_pinViewMessage - In the implementation block
@property (assign) NSView * pinViewPinFieldPlaceholder;                           //@synthesize pinViewPinFieldPlaceholder=_pinViewPinFieldPlaceholder - In the implementation block
@property (assign) NSTextField * pinViewEnterLabelText;                           //@synthesize pinViewEnterLabelText=_pinViewEnterLabelText - In the implementation block
@property (assign) NSButton * pinViewHelpButton;                                  //@synthesize pinViewHelpButton=_pinViewHelpButton - In the implementation block
@property (assign) NSButton * pinViewConfirmButton;                               //@synthesize pinViewConfirmButton=_pinViewConfirmButton - In the implementation block
@property (assign) NSButton * pinViewCancelButton;                                //@synthesize pinViewCancelButton=_pinViewCancelButton - In the implementation block
@property (assign) NSButton * pinViewAdvancedButton;                              //@synthesize pinViewAdvancedButton=_pinViewAdvancedButton - In the implementation block
@property (copy) NSString * passPhrase;                                           //@synthesize passPhrase=_passPhrase - In the implementation block
@property (retain) MMPinFieldView * pinViewPinFieldView;                          //@synthesize pinViewPinFieldView=_pinViewPinFieldView - In the implementation block
@property (copy) NSString * initialPassPhrase;                                    //@synthesize initialPassPhrase=_initialPassPhrase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelButtonClicked:(id)arg1 ;
-(void)confirmButtonClicked:(id)arg1 ;
-(void)setPassPhrase:(NSString *)arg1 ;
-(NSString *)passPhrase;
-(NSImageView *)pinViewImageView;
-(NSTextField *)pinViewTitle;
-(void)_showErrorMessage:(id)arg1 ;
-(NSButton *)pinViewCancelButton;
-(NSButton *)pinViewConfirmButton;
-(MMPinFieldView *)pinViewPinFieldView;
-(NSView *)pinViewPinFieldPlaceholder;
-(void)setPinViewPinFieldView:(MMPinFieldView *)arg1 ;
-(void)clearSecureEntryView;
-(id)_passphraseFromSecureEntryView;
-(void)pinFieldViewTextDidChange:(id)arg1 ;
-(void)setPinViewImageView:(NSImageView *)arg1 ;
-(void)setPinViewTitle:(NSTextField *)arg1 ;
-(void)setPinViewPinFieldPlaceholder:(NSView *)arg1 ;
-(NSButton *)pinViewHelpButton;
-(void)setPinViewHelpButton:(NSButton *)arg1 ;
-(void)setPinViewConfirmButton:(NSButton *)arg1 ;
-(void)setPinViewCancelButton:(NSButton *)arg1 ;
-(void)setInitialPassPhrase:(NSString *)arg1 ;
-(NSString *)initialPassPhrase;
-(char)_isSimplePassphrase;
-(char)_isPasswordWeak:(id)arg1 isSimple:(char)arg2 ;
-(void)_showNormalMessage:(id)arg1 ;
-(NSButton *)pinViewAdvancedButton;
-(NSTextField *)pinViewMessage;
-(NSTextField *)pinViewEnterLabelText;
-(void)advancedButtonClicked:(id)arg1 ;
-(void)setPinViewMessage:(NSTextField *)arg1 ;
-(void)setPinViewEnterLabelText:(NSTextField *)arg1 ;
-(void)setPinViewAdvancedButton:(NSButton *)arg1 ;
-(void)setDelegate:(id<MMCSCPinSetupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MMCSCPinSetupViewControllerDelegate>)delegate;
-(void)setup:(char)arg1 ;
@end

