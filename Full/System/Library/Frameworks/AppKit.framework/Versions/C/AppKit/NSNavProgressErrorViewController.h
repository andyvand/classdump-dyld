/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSButton, NSString, NSImage;

@interface NSNavProgressErrorViewController : NSViewController {

	NSButton* _rightButton;
	NSString* _messageString;
	NSImage* _image;
	NSImage* _badgeImage;

}

@property (copy) NSString * messageString;                       //@synthesize messageString=_messageString - In the implementation block
@property (retain) NSImage * image;                              //@synthesize image=_image - In the implementation block
@property (retain) NSImage * badgeImage;                         //@synthesize badgeImage=_badgeImage - In the implementation block
@property (retain,readonly) NSButton * rightButton; 
-(id)init;
-(void)dealloc;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setMessageString:(NSString *)arg1 ;
-(void)setBadgeImage:(NSImage *)arg1 ;
-(NSString *)messageString;
-(NSImage *)badgeImage;
-(NSButton *)rightButton;
@end

