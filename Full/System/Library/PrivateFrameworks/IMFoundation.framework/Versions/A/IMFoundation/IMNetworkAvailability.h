/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject {

	NSString* _guid;
	NSTimer* _timer;
	void* _context;
	double _timeout;
	double _wifiTimeout;
	double _startTime;
	unsigned long long _flags;
	unsigned long long _options;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) void* context;              //@synthesize context=_context - In the implementation block
-(id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_timerHit:(id)arg1 ;
-(id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_setTimer;
-(void)dealloc;
-(void)start;
-(void*)context;
-(void)cancel;
-(void)_cancel;
-(void)setContext:(void*)arg1 ;
@end

