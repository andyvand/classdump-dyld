/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOThrottleState : NSObject {

	unsigned long long _requestCount;
	double _lastResetTime;

}

@property (assign,nonatomic) unsigned long long requestCount;              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) double lastResetTime;                         //@synthesize lastResetTime=_lastResetTime - In the implementation block
-(double)lastResetTime;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(void)setLastResetTime:(double)arg1 ;
-(unsigned long long)requestCount;
@end

