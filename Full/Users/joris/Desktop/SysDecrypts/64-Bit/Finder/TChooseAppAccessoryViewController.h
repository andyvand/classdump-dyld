/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TViewController.h>

@class NSPopUpButton, NSTextField, NSButton, NSImageView, NSString, TChooseAppController;

@interface TChooseAppAccessoryViewController : TViewController {

	NSPopUpButton* _popupButton;
	NSTextField* _popupTitle;
	NSButton* _alwaysOpenWithCheckbox;
	NSImageView* _cautionImageView;
	NSTextField* _appSupportsDocTextFld;
	BOOL _showAlwaysOpenWithCheckBox;
	BOOL _alwaysOpenWithCheckboxState;
	double _titleGap;
	double _cautionGap;
	NSString* _appCanOpenMessage;
	NSString* _appCannotOpenMessage;
	TChooseAppController* _chooseAppController;

}

@property (assign) BOOL showAlwaysOpenWithCheckBox;               //@synthesize showAlwaysOpenWithCheckBox=_showAlwaysOpenWithCheckBox - In the implementation block
@property (assign) BOOL alwaysOpenWithCheckboxState;              //@synthesize alwaysOpenWithCheckboxState=_alwaysOpenWithCheckboxState - In the implementation block
@property (assign) int popupButtonSelectionIndex; 
-(void)setShowAlwaysOpenWithCheckBox:(BOOL)arg1 ;
-(void)setAlwaysOpenWithCheckboxState:(BOOL)arg1 ;
-(id)initWithChooseAppController:(id)arg1 withDocumentNodes:(const TFENodeVector*)arg2 showAlwaysOpenWithCheckbox:(BOOL)arg3 defaultAlwaysOpenWithValue:(BOOL)arg4 ;
-(void)updateAppSupportsDocText:(const TFENode*)arg1 withDocumentNodes:(const TFENodeVector*)arg2 ;
-(int)popupButtonSelectionIndex;
-(void)setPopupButtonSelectionIndex:(int)arg1 ;
-(BOOL)showAlwaysOpenWithCheckBox;
-(BOOL)alwaysOpenWithCheckboxState;
-(void)dealloc;
-(void)loadView;
-(void)viewFrameChanged:(id)arg1 ;
-(id)nibName;
-(id)nibBundle;
-(void)updateLayout;
@end
