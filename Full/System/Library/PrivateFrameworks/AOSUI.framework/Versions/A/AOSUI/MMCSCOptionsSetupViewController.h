/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol MMCSCOptionsSetupViewControllerDelegate;
@class NSImageView, NSTextField, NSMatrix, NSButtonCell, NSButton;

@interface MMCSCOptionsSetupViewController : NSViewController {

	id<MMCSCOptionsSetupViewControllerDelegate> _delegate;
	NSImageView* _optionsViewImageView;
	NSTextField* _optionsViewTitle;
	NSTextField* _optionsViewMessage;
	NSMatrix* _optionsViewRadioMatrix;
	NSButtonCell* _optionsViewComplexRadioButton;
	NSButtonCell* _optionsViewRandomRadioButton;
	NSButtonCell* _optionsViewOptOutRadionButton;
	NSTextField* _optionsViewOptOutInfoLabel;
	NSButton* _optionsViewHelpButton;
	NSButton* _optionsViewCancelButton;
	NSButton* _optionsViewAlternateButton;
	NSButton* _optionsViewConfirmButton;

}

@property (assign) id<MMCSCOptionsSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) NSImageView * optionsViewImageView;                                //@synthesize optionsViewImageView=_optionsViewImageView - In the implementation block
@property (assign) NSTextField * optionsViewTitle;                                    //@synthesize optionsViewTitle=_optionsViewTitle - In the implementation block
@property (assign) NSTextField * optionsViewMessage;                                  //@synthesize optionsViewMessage=_optionsViewMessage - In the implementation block
@property (assign) NSMatrix * optionsViewRadioMatrix;                                 //@synthesize optionsViewRadioMatrix=_optionsViewRadioMatrix - In the implementation block
@property (assign) NSButtonCell * optionsViewComplexRadioButton;                      //@synthesize optionsViewComplexRadioButton=_optionsViewComplexRadioButton - In the implementation block
@property (assign) NSButtonCell * optionsViewRandomRadioButton;                       //@synthesize optionsViewRandomRadioButton=_optionsViewRandomRadioButton - In the implementation block
@property (assign) NSButtonCell * optionsViewOptOutRadionButton;                      //@synthesize optionsViewOptOutRadionButton=_optionsViewOptOutRadionButton - In the implementation block
@property (assign) NSTextField * optionsViewOptOutInfoLabel;                          //@synthesize optionsViewOptOutInfoLabel=_optionsViewOptOutInfoLabel - In the implementation block
@property (assign) NSButton * optionsViewHelpButton;                                  //@synthesize optionsViewHelpButton=_optionsViewHelpButton - In the implementation block
@property (assign) NSButton * optionsViewCancelButton;                                //@synthesize optionsViewCancelButton=_optionsViewCancelButton - In the implementation block
@property (assign) NSButton * optionsViewAlternateButton;                             //@synthesize optionsViewAlternateButton=_optionsViewAlternateButton - In the implementation block
@property (assign) NSButton * optionsViewConfirmButton;                               //@synthesize optionsViewConfirmButton=_optionsViewConfirmButton - In the implementation block
@property (readonly) long long advancedOption; 
-(void)defaultButtonClicked:(id)arg1 ;
-(void)alternateButtonClicked:(id)arg1 ;
-(NSTextField *)optionsViewOptOutInfoLabel;
-(NSMatrix *)optionsViewRadioMatrix;
-(long long)advancedOption;
-(void)otherButtonClicked:(id)arg1 ;
-(NSImageView *)optionsViewImageView;
-(void)setOptionsViewImageView:(NSImageView *)arg1 ;
-(NSTextField *)optionsViewTitle;
-(void)setOptionsViewTitle:(NSTextField *)arg1 ;
-(NSTextField *)optionsViewMessage;
-(void)setOptionsViewMessage:(NSTextField *)arg1 ;
-(void)setOptionsViewRadioMatrix:(NSMatrix *)arg1 ;
-(NSButtonCell *)optionsViewComplexRadioButton;
-(void)setOptionsViewComplexRadioButton:(NSButtonCell *)arg1 ;
-(NSButtonCell *)optionsViewRandomRadioButton;
-(void)setOptionsViewRandomRadioButton:(NSButtonCell *)arg1 ;
-(NSButtonCell *)optionsViewOptOutRadionButton;
-(void)setOptionsViewOptOutRadionButton:(NSButtonCell *)arg1 ;
-(void)setOptionsViewOptOutInfoLabel:(NSTextField *)arg1 ;
-(NSButton *)optionsViewHelpButton;
-(void)setOptionsViewHelpButton:(NSButton *)arg1 ;
-(NSButton *)optionsViewCancelButton;
-(void)setOptionsViewCancelButton:(NSButton *)arg1 ;
-(NSButton *)optionsViewAlternateButton;
-(void)setOptionsViewAlternateButton:(NSButton *)arg1 ;
-(NSButton *)optionsViewConfirmButton;
-(void)setOptionsViewConfirmButton:(NSButton *)arg1 ;
-(void)setDelegate:(id<MMCSCOptionsSetupViewControllerDelegate>)arg1 ;
-(id<MMCSCOptionsSetupViewControllerDelegate>)delegate;
-(void)setup:(char)arg1 ;
@end

