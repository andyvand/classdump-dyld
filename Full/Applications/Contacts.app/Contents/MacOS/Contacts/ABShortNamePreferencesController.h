/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPopUpButton, NSButton;

@interface ABShortNamePreferencesController : NSObject {

	NSPopUpButton* _formatPopupButton;
	NSButton* _preferNicknameCheckbox;

}

@property (assign) NSPopUpButton * formatPopupButton;              //@synthesize formatPopupButton=_formatPopupButton - In the implementation block
@property (assign) NSButton * preferNicknameCheckbox;              //@synthesize preferNicknameCheckbox=_preferNicknameCheckbox - In the implementation block
-(void)configureControls;
-(void)restoreFromPreferences;
-(void)configureFormatPopup;
-(void)configurePreferNicknamesCheckbox;
-(NSPopUpButton *)formatPopupButton;
-(void)addMenuWithTitle:(id)arg1 shortNameStyle:(unsigned long long)arg2 ;
-(NSButton *)preferNicknameCheckbox;
-(void)togglePreferNicknames:(id)arg1 ;
-(void)restoreShortNameStyleFromPreferences;
-(void)restorePreferNicknamesPreference;
-(unsigned long long)shortNameStyleFromPreferences;
-(void)setShortNameStyleInPreferences:(unsigned long long)arg1 ;
-(void)postPreferencesChangedDistributedNotification;
-(void)setFormatPopupButton:(NSPopUpButton *)arg1 ;
-(void)setPreferNicknameCheckbox:(NSButton *)arg1 ;
-(void)awakeFromNib;
-(void)updateFormat:(id)arg1 ;
@end

