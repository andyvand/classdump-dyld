/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol RCTrimControlDelegate <NSObject>
@optional
-(void)trimControlDidBeginTrimming:(id)arg1;
-(void)trimControlDidBeginScrubbing:(id)arg1;
-(void)trimControl:(id)arg1 didScrubToTimeInterval:(double)arg2;
-(void)trimControlDidEndTrimming:(id)arg1;
-(void)trimControlDidEndScrubbing:(id)arg1;
@end
