/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)fire;
-(double)tolerance;
-(unsigned long long)_cfTypeID;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(void)invalidate;
-(id)userInfo;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(char)allowsWeakReference;
-(char)retainWeakReference;
-(char)isValid;
-(double)timeInterval;
-(id)fireDate;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(void)setFireDate:(id)arg1 ;
-(void)setTolerance:(double)arg1 ;
@end

