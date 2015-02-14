/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSScroller.h>

@interface PKPassScroller : NSScroller
+(char)isCompatibleWithOverlayScrollers;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)overlayScrollerKnobAlpha;
-(void)drawKnobSlotInRect:(CGRect)arg1 highlight:(char)arg2 ;
-(void)drawKnob;
-(double)overlayScrollerTrackAlpha;
@end

