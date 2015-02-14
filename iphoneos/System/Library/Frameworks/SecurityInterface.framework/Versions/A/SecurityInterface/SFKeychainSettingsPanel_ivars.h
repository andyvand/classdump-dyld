/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@class NSTextField, SFAutoLockTextValue, NSStepper, NSButton, NSWindow, NSProgressIndicator, NSString;

@interface SFKeychainSettingsPanel_ivars : NSObject {

	NSTextField* _panelMessage;
	SFAutoLockTextValue* _autoLockValue;
	NSStepper* _autoLockStepper;
	NSButton* _autoLockCtrl;
	NSButton* _lockOnSleepCtrl;
	NSButton* _cancelButton;
	NSButton* _saveButton;
	NSWindow* _panel;
	NSButton* _dotMacButton;
	NSButton* _syncDotMacCtrl;
	NSTextField* _syncStateMessage;
	NSProgressIndicator* _progressCtrl;
	NSString* _keychainNameStr;
	NSWindow* _parentWindowForSheet;
	SEL _clientDidEndSelector;
	id _clientDelegate;
	void* _clientContextInfo;
	unsigned long long _lockIntervalVal;
	OpaqueSecKeychainRefRef _keychainRef;
	char _lockOnSleepVal;
	char _syncVal;
	SecKeychainSettings _settings;
	char _runAsSheet;

}
-(void)dealloc;
@end

