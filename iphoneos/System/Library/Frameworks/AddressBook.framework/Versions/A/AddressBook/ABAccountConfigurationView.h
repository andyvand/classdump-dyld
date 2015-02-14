/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@protocol ABAccountPreferencesModule;
@class NSPreferencesModule, NSButton;

@interface ABAccountConfigurationView : NSView {

	NSPreferencesModule*<ABAccountPreferencesModule> _preferencesModule;
	NSButton* _enabledCheckbox;

}

@property (assign) NSButton * enabledCheckbox;                                                      //@synthesize enabledCheckbox=_enabledCheckbox - In the implementation block
@property (retain) NSPreferencesModule*<ABAccountPreferencesModule> preferencesModule;              //@synthesize preferencesModule=_preferencesModule - In the implementation block
-(NSPreferencesModule*<ABAccountPreferencesModule>)preferencesModule;
-(NSButton *)enabledCheckbox;
-(void)toggleEnabled:(id)arg1 ;
-(void)synchronizeCheckboxWithSource:(id)arg1 ;
-(void)setPreferencesModule:(NSPreferencesModule*<ABAccountPreferencesModule>)arg1 ;
-(void)setEnabledCheckbox:(NSButton *)arg1 ;
-(void)dealloc;
@end

