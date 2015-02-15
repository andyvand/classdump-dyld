/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:35:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/AirPort Utility.app/Contents/MacOS/AirPort Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSWindow, NSImageView, NSTextField, NSButton;

@interface RestartBaseStationViewController : NSViewController {

	NSWindow* _window;
	NSImageView* _icon;
	NSTextField* _message;
	NSButton* _dontWarnCheckbox;
	NSButton* _ok;
	NSButton* _cancel;
	id _contextInfo;
	NSWindow* hostingWindow;

}

@property (nonatomic,retain) NSWindow * hostingWindow; 
@property (nonatomic,retain) id contextInfo;                        //@synthesize contextInfo=_contextInfo - In the implementation block
-(void)finishSheet:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 attachToWindow:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 attachToWindow:(id)arg3 contextInfo:(id)arg4 ;
-(void)setHostingWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostingWindow;
-(id)contextInfo;
-(void)setContextInfo:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3 ;
-(void)cancelSheet:(id)arg1 ;
@end
