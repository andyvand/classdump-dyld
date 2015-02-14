/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol MMCSCSMSTargetSetupViewControllerDelegate;
@class NSImageView, NSPopUpButton, NSTextField, NSButton, MMPhoneNumberFormatter, NSString;

@interface MMCSCSMSTargetSetupViewController : NSViewController {

	id<MMCSCSMSTargetSetupViewControllerDelegate> _delegate;
	NSImageView* _smsTargetImageView;
	NSPopUpButton* _smsTargetCountryMenu;
	NSTextField* _smsTargetTextField;
	NSButton* _smsTargetCancelButton;
	NSButton* _smsTargetConfirmButton;
	NSTextField* _smsTargetTitle;
	NSTextField* _smsTargetMessage;
	NSTextField* _smsTargetCountryLabel;
	NSTextField* _smsTargetNumberLabel;
	NSButton* _smsTargetHelpButton;
	MMPhoneNumberFormatter* _smsTargetFormatter;

}

@property (assign) id<MMCSCSMSTargetSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSImageView * smsTargetImageView;                                    //@synthesize smsTargetImageView=_smsTargetImageView - In the implementation block
@property (assign) NSPopUpButton * smsTargetCountryMenu;                                //@synthesize smsTargetCountryMenu=_smsTargetCountryMenu - In the implementation block
@property (assign) NSTextField * smsTargetTextField;                                    //@synthesize smsTargetTextField=_smsTargetTextField - In the implementation block
@property (assign) NSButton * smsTargetCancelButton;                                    //@synthesize smsTargetCancelButton=_smsTargetCancelButton - In the implementation block
@property (assign) NSButton * smsTargetConfirmButton;                                   //@synthesize smsTargetConfirmButton=_smsTargetConfirmButton - In the implementation block
@property (assign) NSTextField * smsTargetTitle;                                        //@synthesize smsTargetTitle=_smsTargetTitle - In the implementation block
@property (assign) NSTextField * smsTargetMessage;                                      //@synthesize smsTargetMessage=_smsTargetMessage - In the implementation block
@property (assign) NSTextField * smsTargetCountryLabel;                                 //@synthesize smsTargetCountryLabel=_smsTargetCountryLabel - In the implementation block
@property (assign) NSTextField * smsTargetNumberLabel;                                  //@synthesize smsTargetNumberLabel=_smsTargetNumberLabel - In the implementation block
@property (assign) NSButton * smsTargetHelpButton;                                      //@synthesize smsTargetHelpButton=_smsTargetHelpButton - In the implementation block
@property (readonly) NSString * smsCountryCode; 
@property (readonly) NSString * smsCountryPrefix; 
@property (readonly) NSString * smsTarget; 
@property (retain) MMPhoneNumberFormatter * smsTargetFormatter;                         //@synthesize smsTargetFormatter=_smsTargetFormatter - In the implementation block
-(void)cancelButtonClicked:(id)arg1 ;
-(NSImageView *)smsTargetImageView;
-(NSTextField *)smsTargetTitle;
-(NSTextField *)smsTargetMessage;
-(NSTextField *)smsTargetCountryLabel;
-(NSTextField *)smsTargetNumberLabel;
-(NSTextField *)smsTargetTextField;
-(NSButton *)smsTargetCancelButton;
-(NSButton *)smsTargetConfirmButton;
-(NSButton *)smsTargetHelpButton;
-(void)setSmsTargetFormatter:(MMPhoneNumberFormatter *)arg1 ;
-(MMPhoneNumberFormatter *)smsTargetFormatter;
-(NSPopUpButton *)smsTargetCountryMenu;
-(void)_selectCountryCodeInPopUpMenu:(id)arg1 ;
-(void)popUpMenuItemSelected:(id)arg1 ;
-(NSString *)smsCountryPrefix;
-(NSString *)smsCountryCode;
-(void)confirmButtonClicked:(id)arg1 ;
-(NSString *)smsTarget;
-(void)setSmsTargetImageView:(NSImageView *)arg1 ;
-(void)setSmsTargetTitle:(NSTextField *)arg1 ;
-(void)setSmsTargetMessage:(NSTextField *)arg1 ;
-(void)setSmsTargetCountryLabel:(NSTextField *)arg1 ;
-(void)setSmsTargetCountryMenu:(NSPopUpButton *)arg1 ;
-(void)setSmsTargetNumberLabel:(NSTextField *)arg1 ;
-(void)setSmsTargetTextField:(NSTextField *)arg1 ;
-(void)setSmsTargetCancelButton:(NSButton *)arg1 ;
-(void)setSmsTargetConfirmButton:(NSButton *)arg1 ;
-(void)setSmsTargetHelpButton:(NSButton *)arg1 ;
-(void)setDelegate:(id<MMCSCSMSTargetSetupViewControllerDelegate>)arg1 ;
-(id<MMCSCSMSTargetSetupViewControllerDelegate>)delegate;
-(void)controlTextDidChange:(id)arg1 ;
-(void)setup;
@end

