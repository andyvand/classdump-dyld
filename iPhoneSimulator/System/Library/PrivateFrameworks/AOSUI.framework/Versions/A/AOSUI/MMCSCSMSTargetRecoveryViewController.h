/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AOSUI/MMPinFieldViewDelegate.h>
#import <AOSUI/MMLinkTextFieldDelegate.h>
#import <AOSUI/MMCSCProgressIndicatorProtocol.h>

@protocol MMCSCSMSTargetRecoveryViewControllerDelegate;
@class NSImageView, NSTextField, NSView, NSLayoutConstraint, MMPinFieldView, MMLinkTextField, NSButton, NSProgressIndicator, NSString;

@interface MMCSCSMSTargetRecoveryViewController : NSViewController <MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol> {

	id<MMCSCSMSTargetRecoveryViewControllerDelegate> _delegate;
	NSImageView* _smsTargetImageView;
	NSTextField* _smsTargetTitle;
	NSView* _smsTargetPinFieldPlaceholder;
	NSLayoutConstraint* _smsTargetPinFieldWidthConstraint;
	MMPinFieldView* _smsTargetPinFieldView;
	MMLinkTextField* _smsTargetMessage;
	NSButton* _smsTargetConfirmButton;
	NSButton* _smsTargetCancelButton;
	NSButton* _smsTargetHelpButton;
	NSProgressIndicator* _smsTargetProgressIndicator;
	NSString* _smsTargetCountryCode;
	NSString* _smsTarget;
	NSString* _smsVerificationToken;

}

@property (assign) id<MMCSCSMSTargetRecoveryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSImageView * smsTargetImageView;                                       //@synthesize smsTargetImageView=_smsTargetImageView - In the implementation block
@property (assign) NSTextField * smsTargetTitle;                                           //@synthesize smsTargetTitle=_smsTargetTitle - In the implementation block
@property (assign) NSView * smsTargetPinFieldPlaceholder;                                  //@synthesize smsTargetPinFieldPlaceholder=_smsTargetPinFieldPlaceholder - In the implementation block
@property (assign) NSLayoutConstraint * smsTargetPinFieldWidthConstraint;                  //@synthesize smsTargetPinFieldWidthConstraint=_smsTargetPinFieldWidthConstraint - In the implementation block
@property (assign) MMLinkTextField * smsTargetMessage;                                     //@synthesize smsTargetMessage=_smsTargetMessage - In the implementation block
@property (assign) NSButton * smsTargetConfirmButton;                                      //@synthesize smsTargetConfirmButton=_smsTargetConfirmButton - In the implementation block
@property (assign) NSButton * smsTargetCancelButton;                                       //@synthesize smsTargetCancelButton=_smsTargetCancelButton - In the implementation block
@property (assign) NSButton * smsTargetHelpButton;                                         //@synthesize smsTargetHelpButton=_smsTargetHelpButton - In the implementation block
@property (assign) NSProgressIndicator * smsTargetProgressIndicator;                       //@synthesize smsTargetProgressIndicator=_smsTargetProgressIndicator - In the implementation block
@property (copy) NSString * smsTargetCountryCode;                                          //@synthesize smsTargetCountryCode=_smsTargetCountryCode - In the implementation block
@property (copy) NSString * smsTarget;                                                     //@synthesize smsTarget=_smsTarget - In the implementation block
@property (copy) NSString * smsVerificationToken;                                          //@synthesize smsVerificationToken=_smsVerificationToken - In the implementation block
@property (retain) MMPinFieldView * smsTargetPinFieldView;                                 //@synthesize smsTargetPinFieldView=_smsTargetPinFieldView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelButtonClicked:(id)arg1 ;
-(NSImageView *)smsTargetImageView;
-(NSTextField *)smsTargetTitle;
-(MMLinkTextField *)smsTargetMessage;
-(NSButton *)smsTargetCancelButton;
-(NSButton *)smsTargetConfirmButton;
-(NSButton *)smsTargetHelpButton;
-(void)confirmButtonClicked:(id)arg1 ;
-(NSString *)smsTarget;
-(void)setSmsTargetImageView:(NSImageView *)arg1 ;
-(void)setSmsTargetTitle:(NSTextField *)arg1 ;
-(void)setSmsTargetMessage:(MMLinkTextField *)arg1 ;
-(void)setSmsTargetCancelButton:(NSButton *)arg1 ;
-(void)setSmsTargetConfirmButton:(NSButton *)arg1 ;
-(void)setSmsTargetHelpButton:(NSButton *)arg1 ;
-(void)setSmsTarget:(NSString *)arg1 ;
-(void)stopCSCProgressIndicator:(id)arg1 ;
-(void)clearSecureEntryView;
-(id)_passphraseFromSecureEntryView;
-(void)pinFieldViewTextDidChange:(id)arg1 ;
-(void)clickedOnLink:(id)arg1 ;
-(void)startCSCProgressIndicator:(id)arg1 ;
-(NSString *)smsTargetCountryCode;
-(void)setSmsTargetCountryCode:(NSString *)arg1 ;
-(void)setupViewWithPinLength:(long long)arg1 ;
-(NSString *)smsVerificationToken;
-(void)setSmsVerificationToken:(NSString *)arg1 ;
-(MMPinFieldView *)smsTargetPinFieldView;
-(NSView *)smsTargetPinFieldPlaceholder;
-(void)setSmsTargetPinFieldView:(MMPinFieldView *)arg1 ;
-(NSLayoutConstraint *)smsTargetPinFieldWidthConstraint;
-(NSProgressIndicator *)smsTargetProgressIndicator;
-(id)_countryPrefixForCountryCode:(id)arg1 ;
-(void)setSmsTargetPinFieldPlaceholder:(NSView *)arg1 ;
-(void)setSmsTargetPinFieldWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSmsTargetProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setDelegate:(id<MMCSCSMSTargetRecoveryViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MMCSCSMSTargetRecoveryViewControllerDelegate>)delegate;
@end

