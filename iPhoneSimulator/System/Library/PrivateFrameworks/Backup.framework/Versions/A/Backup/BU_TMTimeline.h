/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <Backup/BU_TMControl.h>

@class BUStarfieldTimelineLayer;

@interface BU_TMTimeline : BU_TMControl {

	BUStarfieldTimelineLayer* fSuperLayer;
	TTimelineControl* fTimeline;

}
+(id)timelineControlWithFrame:(CGRect)arg1 inSuperLayer:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(BOOL)valueWillChange:(long long)arg1 ;
-(void)valueDidChange:(long long)arg1 ;
-(BOOL)mouseDownAtPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(BOOL)mouseUpAtPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(void)mouseMovedToPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(BOOL)mouseDraggedToPoint:(CGPoint)arg1 withModifiers:(unsigned)arg2 ;
-(void)scrollByX:(double)arg1 byY:(double)arg2 withModifiers:(unsigned)arg3 ;
-(void)setSuperLayer:(id)arg1 ;
-(id)superLayer;
-(TTimelineControl*)timeline;
@end

