/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(void)setRepeatDuration:(double)arg1;
-(void)setSpeed:(float)arg1;
-(void)setBeginTime:(double)arg1;
-(void)setTimeOffset:(double)arg1;
-(float)speed;
-(void)setDuration:(double)arg1;
-(double)duration;
-(void)setFillMode:(id)arg1;
-(double)timeOffset;
-(double)repeatDuration;
-(float)repeatCount;
-(double)beginTime;
-(char)autoreverses;
-(NSString *)fillMode;
-(void)setRepeatCount:(float)arg1;
-(void)setAutoreverses:(char)arg1;

@end

