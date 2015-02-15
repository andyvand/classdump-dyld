/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:58:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Website Popup.action/Contents/MacOS/Website Popup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Website Popup/Website Popup-Structs.h>
#import <AppKit/NSAnimation.h>

@class NSWindow;

@interface WPPopupAnimation : NSAnimation {

	NSWindow* _window;
	char _isReversed;
	CGRect _originalWindowFrame;

}

@property (assign) char isReversed;              //@synthesize isReversed=_isReversed - In the implementation block
-(void)setIsReversed:(char)arg1 ;
-(char)isReversed;
-(void)dealloc;
-(void)prepare;
-(void)setCurrentProgress:(float)arg1 ;
-(id)initWithWindow:(id)arg1 ;
@end

