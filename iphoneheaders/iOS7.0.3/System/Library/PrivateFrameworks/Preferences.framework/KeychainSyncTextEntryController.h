/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <Preferences/KeychainSyncPasscodeFieldDelegate.h>

@protocol UIKeyInput;
@class PSTableCell, UIView, PSSpecifier, NSString;

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {

	PSTableCell* _textEntryCell;
	UIView<UIKeyInput>* _textEntryView;
	PSSpecifier* _textEntrySpecifier;
	BOOL _hidesNextButton;
	BOOL _secureTextEntry;
	int _textEntryType;
	NSString* _textValue;

}

@property (assign,nonatomic) int textEntryType;                 //@synthesize textEntryType=_textEntryType - In the implementation block
@property (assign,nonatomic) BOOL hidesNextButton;              //@synthesize hidesNextButton=_hidesNextButton - In the implementation block
@property (assign,nonatomic) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,retain) NSString * textValue;              //@synthesize textValue=_textValue - In the implementation block
-(void)textFieldChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)placeholderText;
-(id)specifiers;
-(void)setTextEntryType:(int)arg1 ;
-(void)setHidesNextButton:(BOOL)arg1 ;
-(int)textEntryType;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(void)nextPressed;
-(void)updateNextButton;
-(void)setTextEntryText:(id)arg1 ;
-(id)textEntryText;
-(void)textEntryViewDidChange:(id)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(unsigned)numberOfPasscodeFields;
-(id)textEntryView;
-(void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2 ;
-(BOOL)hidesNextButton;
-(id)textValue;
-(void)setTextValue:(id)arg1 ;
-(id)textEntrySpecifier;
-(void)setTextValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getTextValueForSpecifier:(id)arg1 ;
-(BOOL)secureTextEntry;
@end
