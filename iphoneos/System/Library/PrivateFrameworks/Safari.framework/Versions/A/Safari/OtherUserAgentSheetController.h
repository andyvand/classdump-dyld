/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSString, NSTextView, NSButton;

@interface OtherUserAgentSheetController : NSWindowController {

	NSString* _userAgentString;
	NSTextView* userAgentTextView;
	NSButton* acceptButton;

}
-(id)initWithUserAgentString:(id)arg1 ;
-(id)userAgentString;
-(void)updateAcceptButton;
-(void)acceptUserAgentString:(id)arg1 ;
-(void)cancelUserAgentString:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(void)awakeFromNib;
-(id)windowNibName;
@end

