/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate * fireDate; 
@property (readonly) double timeInterval; 
@property (assign) double tolerance; 
@property (getter=isValid,readonly) char valid; 
@property (retain,readonly) id userInfo; 
+(void)_safari_blockTimerDidFire:(id)arg1 ;
+(id)safari_scheduledTimerWithTimeInterval:(double)arg1 repeats:(char)arg2 block:(/*^block*/id)arg3 ;
+(id)weakTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(id)scheduledWeakTimerOnMainThreadWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(id)scheduledWeakTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 nonRetainedTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 nonRetainedTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(char)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(char)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
-(void)__resetTimer;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 nonRetainedTarget:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(void)fire;
-(double)tolerance;
-(CFStringRef)copyDebugDescription;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(double)_cffireTime;
-(void)invalidate;
-(SCD_Struct_NS5*)context;
-(id)userInfo;
-(char)isValid;
-(double)timeInterval;
-(NSDate *)fireDate;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(double)interval;
-(void)setTolerance:(double)arg1 ;
-(long long)order;
@end

