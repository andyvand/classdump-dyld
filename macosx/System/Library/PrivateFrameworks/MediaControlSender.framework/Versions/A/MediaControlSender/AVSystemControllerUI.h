/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/Versions/A/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaControlSender/MediaControlSender-Structs.h>
#import <MediaControlSender/NSTextFieldDelegate.h>

@class NSImageView, NSWindow, NSTextField, NSSecureTextField, NSButton, NSString;

@interface AVSystemControllerUI : NSObject <NSTextFieldDelegate> {

	NSImageView* _iconView;
	NSWindow* _passwordWindow;
	NSTextField* _passwordMajorText;
	NSTextField* _passwordErrorText;
	NSSecureTextField* _passwordText;
	NSButton* _passwordRememberCheckBox;
	NSButton* _passwordOKButton;
	CFDictionaryRef _routeDesc;
	char _waitingForResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_passwordOK:(id)arg1 ;
-(void)_passwordCancel:(id)arg1 ;
-(void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
@end

