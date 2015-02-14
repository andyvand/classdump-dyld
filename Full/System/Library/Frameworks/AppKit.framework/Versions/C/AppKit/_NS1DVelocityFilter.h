/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NS1DVelocityFilter : NSObject {

	long long _filterDepth;
	double _maxAllowedVelocity;
	double _lastVelocityInput;
	char _isBufferFull;
	double _lastEventTimestamp;
	long long _bufferIndex;
	double _buffer[3];

}

@property (readonly) long long filterDepth;                //@synthesize filterDepth=_filterDepth - In the implementation block
@property (readonly) double lastTimestamp;                 //@synthesize lastEventTimestamp=_lastEventTimestamp - In the implementation block
@property (readonly) double filteredVelocity; 
@property (assign) double maxAllowedVelocity;              //@synthesize maxAllowedVelocity=_maxAllowedVelocity - In the implementation block
-(id)init;
-(void)reset;
-(void)setMaxAllowedVelocity:(double)arg1 ;
-(double)filteredVelocity;
-(void)addDelta:(double)arg1 withTimestamp:(double)arg2 ;
-(void)resetIfOutOfDate:(double)arg1 ;
-(char)isTimestampOutOfDate:(double)arg1 ;
-(long long)filterDepth;
-(double)lastTimestamp;
-(double)maxAllowedVelocity;
@end

