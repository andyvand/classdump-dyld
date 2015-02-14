/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/PreferencesModule.h>

@class WebsiteSpecificSearchEditor, NSPopUpButton, NSButton;

@interface SearchPreferences : PreferencesModule {

	WebsiteSpecificSearchEditor* _websiteSpecificSearchEditor;
	NSPopUpButton* _defaultSearchEnginePopUpButton;
	NSButton* _enableParsecCheckbox;

}

@property (nonatomic,retain) WebsiteSpecificSearchEditor * websiteSpecificSearchEditor;              //@synthesize websiteSpecificSearchEditor=_websiteSpecificSearchEditor - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * defaultSearchEnginePopUpButton;                  //@synthesize defaultSearchEnginePopUpButton=_defaultSearchEnginePopUpButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * enableParsecCheckbox;                                 //@synthesize enableParsecCheckbox=_enableParsecCheckbox - In the implementation block
-(void)_updateDefaultSearchEngineMenu;
-(void)toggleParsecEnabled:(id)arg1 ;
-(void)changeDefaultSearchEngine:(id)arg1 ;
-(WebsiteSpecificSearchEditor *)websiteSpecificSearchEditor;
-(void)setWebsiteSpecificSearchEditor:(WebsiteSpecificSearchEditor *)arg1 ;
-(NSPopUpButton *)defaultSearchEnginePopUpButton;
-(void)setDefaultSearchEnginePopUpButton:(NSPopUpButton *)arg1 ;
-(NSButton *)enableParsecCheckbox;
-(void)setEnableParsecCheckbox:(NSButton *)arg1 ;
-(id)helpAnchor;
-(void)moduleWillBeRemoved;
-(void)initializeFromDefaults;
-(void)moduleWasInstalled;
-(id)imageForPreferenceNamed:(id)arg1 ;
@end

