/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSImageView, NSTextField, NSButton, NSString;

@interface FBAlertPanel : NSWindowController {

	NSImageView* imageView;
	NSTextField* alertText;
	NSTextField* infoText;
	NSButton* yesButton;
	NSButton* cancelButton;
	NSButton* thirdButton;
	NSButton* dontAskCheckbox;
	NSString* defaultsString;
	long long exitValue;

}
+(long long)runModalForWindow:(id)arg1 withAlertDictionary:(id)arg2 ;
-(id)alertText;
-(void)setDefaultsString:(id)arg1 ;
-(id)dontAskCheckbox;
-(id)infoText;
-(id)yesButton;
-(void)layoutAlert;
-(long long)exitValue;
-(id)defaultsString;
-(void)dontAskToggled:(id)arg1 ;
-(id)thirdButton;
-(void)buttonPressed:(id)arg1 ;
-(id)cancelButton;
-(id)imageView;
@end

