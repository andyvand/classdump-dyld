/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AOSUI/MMPinFieldViewDelegate.h>
#import <AOSUI/MMLinkTextFieldDelegate.h>
#import <AOSUI/MMCSCProgressIndicatorProtocol.h>

@protocol MMCSCPinRecoveryViewControllerDelegate;
@class NSImageView, NSTextField, MMLinkTextField, NSView, MMPinFieldView, NSButton, NSProgressIndicator, NSString;

@interface MMCSCPinRecoveryViewController : NSViewController <MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol> {

	id<MMCSCPinRecoveryViewControllerDelegate> _delegate;
	NSImageView* _pinViewImageView;
	NSTextField* _pinViewTitle;
	MMLinkTextField* _pinViewMessageTextField;
	MMLinkTextField* _pinViewAlternateMessageTextField;
	NSView* _pinViewPinFieldPlaceholder;
	MMPinFieldView* _pinViewPinFieldView;
	NSButton* _pinViewHelpButton;
	NSButton* _pinViewConfirmButton;
	NSButton* _pinViewCancelButton;
	NSProgressIndicator* _pinViewProgressIndicator;
	char _needsVerification;
	NSString* _passPhrase;

}

@property (assign) id<MMCSCPinRecoveryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSImageView * pinViewImageView;                                   //@synthesize pinViewImageView=_pinViewImageView - In the implementation block
@property (assign) NSTextField * pinViewTitle;                                       //@synthesize pinViewTitle=_pinViewTitle - In the implementation block
@property (assign) MMLinkTextField * pinViewMessageTextField;                        //@synthesize pinViewMessageTextField=_pinViewMessageTextField - In the implementation block
@property (assign) MMLinkTextField * pinViewAlternateMessageTextField;               //@synthesize pinViewAlternateMessageTextField=_pinViewAlternateMessageTextField - In the implementation block
@property (assign) NSView * pinViewPinFieldPlaceholder;                              //@synthesize pinViewPinFieldPlaceholder=_pinViewPinFieldPlaceholder - In the implementation block
@property (assign) NSButton * pinViewHelpButton;                                     //@synthesize pinViewHelpButton=_pinViewHelpButton - In the implementation block
@property (assign) NSButton * pinViewConfirmButton;                                  //@synthesize pinViewConfirmButton=_pinViewConfirmButton - In the implementation block
@property (assign) NSButton * pinViewCancelButton;                                   //@synthesize pinViewCancelButton=_pinViewCancelButton - In the implementation block
@property (assign) NSProgressIndicator * pinViewProgressIndicator;                   //@synthesize pinViewProgressIndicator=_pinViewProgressIndicator - In the implementation block
@property (assign) char needsVerification;                                           //@synthesize needsVerification=_needsVerification - In the implementation block
@property (copy) NSString * passPhrase;                                              //@synthesize passPhrase=_passPhrase - In the implementation block
@property (retain) MMPinFieldView * pinViewPinFieldView;                             //@synthesize pinViewPinFieldView=_pinViewPinFieldView - In the implementation block
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
-(void)_showNormalMessage;
-(void)stopCSCProgressIndicator:(id)arg1 ;
-(NSButton *)pinViewCancelButton;
-(char)needsVerification;
-(NSButton *)pinViewConfirmButton;
-(MMPinFieldView *)pinViewPinFieldView;
-(NSView *)pinViewPinFieldPlaceholder;
-(void)setPinViewPinFieldView:(MMPinFieldView *)arg1 ;
-(void)clearSecureEntryView;
-(id)_passphraseFromSecureEntryView;
-(MMLinkTextField *)pinViewMessageTextField;
-(MMLinkTextField *)pinViewAlternateMessageTextField;
-(id)forgotCodeAttributedString;
-(NSProgressIndicator *)pinViewProgressIndicator;
-(void)pinFieldViewTextDidChange:(id)arg1 ;
-(void)clickedOnLink:(id)arg1 ;
-(void)startCSCProgressIndicator:(id)arg1 ;
-(void)setupView:(long long)arg1 ;
-(void)setPinViewImageView:(NSImageView *)arg1 ;
-(void)setPinViewTitle:(NSTextField *)arg1 ;
-(void)setPinViewMessageTextField:(MMLinkTextField *)arg1 ;
-(void)setPinViewAlternateMessageTextField:(MMLinkTextField *)arg1 ;
-(void)setPinViewPinFieldPlaceholder:(NSView *)arg1 ;
-(NSButton *)pinViewHelpButton;
-(void)setPinViewHelpButton:(NSButton *)arg1 ;
-(void)setPinViewConfirmButton:(NSButton *)arg1 ;
-(void)setPinViewCancelButton:(NSButton *)arg1 ;
-(void)setPinViewProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setNeedsVerification:(char)arg1 ;
-(void)setDelegate:(id<MMCSCPinRecoveryViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MMCSCPinRecoveryViewControllerDelegate>)delegate;
@end

