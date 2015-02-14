/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTHUDSlider.h>
#import <QTKit/QTHUDTimelineCellDelegate.h>

@protocol QTHUDTimelineDelegate;
@class NSString;

@interface QTHUDTimeline : QTHUDSlider <QTHUDTimelineCellDelegate> {

	id<QTHUDTimelineDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(SCD_Struct_QT12)QTTimeValue;
-(id)highlightedTimeRanges;
-(void)setHighlightedTimeRanges:(id)arg1 ;
-(void)setQTTimeValue:(SCD_Struct_QT12)arg1 ;
-(void)takeQTTimeValueFrom:(id)arg1 ;
-(SCD_Struct_QT12)timelineCell:(id)arg1 willChangeTimeValue:(SCD_Struct_QT12)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBordered:(char)arg1 ;
-(char)isBordered;
-(id)delegate;
-(void)setCell:(id)arg1 ;
-(id)exposedBindings;
-(void)setTimeRange:(SCD_Struct_QT16)arg1 ;
-(SCD_Struct_QT16)timeRange;
@end

