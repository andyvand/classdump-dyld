/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSWindow.h>

@class NSTextField;

@interface SOCompletionWindow : NSWindow {

	NSTextField* _axParent;

}

@property (__weak) NSTextField * axParent;              //@synthesize axParent=_axParent - In the implementation block
+(id)cornerMaskImage;
-(void)setAxParent:(NSTextField *)arg1 ;
-(NSTextField *)axParent;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)acceptsMouseMovedEvents;
-(char)acceptsFirstResponder;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)wantsScrollWheelEvent:(id)arg1 ;
-(id)_cornerMask;
@end

