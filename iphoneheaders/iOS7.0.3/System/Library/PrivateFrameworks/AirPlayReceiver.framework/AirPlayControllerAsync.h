/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AirPlayControllerAsync
@required
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/ id)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/ id)arg4;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/ id)arg3;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/ id)arg4;
@end
