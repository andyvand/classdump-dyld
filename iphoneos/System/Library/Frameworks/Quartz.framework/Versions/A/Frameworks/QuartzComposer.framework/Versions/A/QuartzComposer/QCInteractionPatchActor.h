/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatchActor.h>

@interface QCInteractionPatchActor : QCPatchActor
-(CGPoint)pointForPort:(id)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(CGSize)sizeForNode:(id)arg1 ;
-(id)setupTooltipViewForPoint:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 tooltipBounds:(CGRect*)arg4 ;
-(void)_drawNameForPort:(id)arg1 node:(id)arg2 atPoint:(CGPoint)arg3 bounds:(CGRect)arg4 inContext:(CGContextRef)arg5 ;
-(void)_drawTitleForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(unsigned long long)countOfInteractionPortsInNode:(id)arg1 direction:(int)arg2 ;
@end

