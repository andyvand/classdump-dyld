/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSImageView, NSTextField, NSButton, NSProgressIndicator, NSLayoutConstraint, NSArray;

@interface MMJSDialog : NSObject {

	NSWindow* _dialogSheet;
	NSImageView* _iconView;
	NSTextField* _titleField;
	NSTextField* _messageField;
	NSButton* _defaultButton;
	NSButton* _alternateButton;
	NSProgressIndicator* _progressSpinner;
	NSLayoutConstraint* _buttonsHSpacingConstraint;
	NSLayoutConstraint* _spinnerToAlternateSpacingConstraint;
	NSLayoutConstraint* _buttonsBaselineConstraint;
	NSArray* _spinnerToDefaultSpacingConstraints;
	/*^block*/id _completionHandler;

}

@property (retain) NSWindow * dialogSheet;                                                //@synthesize dialogSheet=_dialogSheet - In the implementation block
@property (retain) NSImageView * iconView;                                                //@synthesize iconView=_iconView - In the implementation block
@property (retain) NSTextField * titleField;                                              //@synthesize titleField=_titleField - In the implementation block
@property (retain) NSTextField * messageField;                                            //@synthesize messageField=_messageField - In the implementation block
@property (retain) NSButton * defaultButton;                                              //@synthesize defaultButton=_defaultButton - In the implementation block
@property (retain) NSButton * alternateButton;                                            //@synthesize alternateButton=_alternateButton - In the implementation block
@property (retain) NSProgressIndicator * progressSpinner;                                 //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (retain) NSLayoutConstraint * buttonsHSpacingConstraint;                        //@synthesize buttonsHSpacingConstraint=_buttonsHSpacingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * spinnerToAlternateSpacingConstraint;              //@synthesize spinnerToAlternateSpacingConstraint=_spinnerToAlternateSpacingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * buttonsBaselineConstraint;                        //@synthesize buttonsBaselineConstraint=_buttonsBaselineConstraint - In the implementation block
@property (retain) NSArray * spinnerToDefaultSpacingConstraints;                          //@synthesize spinnerToDefaultSpacingConstraints=_spinnerToDefaultSpacingConstraints - In the implementation block
-(void)setAlternateButtonTitle:(id)arg1 ;
-(NSButton *)defaultButton;
-(NSButton *)alternateButton;
-(NSProgressIndicator *)progressSpinner;
-(NSTextField *)titleField;
-(NSTextField *)messageField;
-(NSWindow *)dialogSheet;
-(void)buttonClicked:(id)arg1 ;
-(void)beginModalSheetWithParentWindow:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 alternateButtonTitle:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)closeModalSheetForParentWindow:(id)arg1 ;
-(void)setDialogSheet:(NSWindow *)arg1 ;
-(void)setTitleField:(NSTextField *)arg1 ;
-(void)setMessageField:(NSTextField *)arg1 ;
-(void)setDefaultButton:(NSButton *)arg1 ;
-(void)setAlternateButton:(NSButton *)arg1 ;
-(void)setProgressSpinner:(NSProgressIndicator *)arg1 ;
-(NSLayoutConstraint *)buttonsHSpacingConstraint;
-(void)setButtonsHSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)spinnerToAlternateSpacingConstraint;
-(void)setSpinnerToAlternateSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonsBaselineConstraint;
-(void)setButtonsBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)spinnerToDefaultSpacingConstraints;
-(void)setSpinnerToDefaultSpacingConstraints:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setIcon:(id)arg1 ;
-(NSImageView *)iconView;
-(void)setIconView:(NSImageView *)arg1 ;
-(void)setDefaultButtonTitle:(id)arg1 ;
@end

