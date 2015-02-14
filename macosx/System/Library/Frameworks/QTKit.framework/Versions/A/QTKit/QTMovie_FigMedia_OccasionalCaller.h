/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTMovie_FigMedia_TimelyCaller.h>

@class NSArray;

@interface QTMovie_FigMedia_OccasionalCaller : QTMovie_FigMedia_TimelyCaller {

	NSArray* _times;
	/*^block*/id _block;

}
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(SCD_Struct_QT21)_nextFiringTimeAfterTime:(SCD_Struct_QT21)arg1 ;
-(SCD_Struct_QT21)_previousFiringTimeBeforeTime:(SCD_Struct_QT21)arg1 ;
-(id)initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 times:(id)arg2 queue:(dispatch_queue_sRef)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

