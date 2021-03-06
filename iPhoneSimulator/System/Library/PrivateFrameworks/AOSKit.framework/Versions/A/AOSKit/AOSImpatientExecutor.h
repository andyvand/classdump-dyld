/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AOSImpatientExecutor : NSObject {

	/*^block*/id _targetBlock;
	double _timeout;
	/*^block*/id _timeoutBlock;

}

@property (copy) id targetBlock;                //@synthesize targetBlock=_targetBlock - In the implementation block
@property (assign) double timeout;              //@synthesize timeout=_timeout - In the implementation block
@property (copy) id timeoutBlock;               //@synthesize timeoutBlock=_timeoutBlock - In the implementation block
+(char)executeBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(char)fire;
-(void)setTargetBlock:(id)arg1 ;
-(void)setTimeoutBlock:(id)arg1 ;
-(id)targetBlock;
-(id)timeoutBlock;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)dealloc;
@end

