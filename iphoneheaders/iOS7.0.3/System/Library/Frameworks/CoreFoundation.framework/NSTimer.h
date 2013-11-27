/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSTimer : NSObject
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(double)_cffireTime;
-(CFStringRef)copyDebugDescription;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)setFireDate:(id)arg1 ;
-(id)userInfo;
-(SCD_Struct_NS4*)context;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(double)timeInterval;
-(id)fireDate;
-(double)interval;
-(long)order;
@end
