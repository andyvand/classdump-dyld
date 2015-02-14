/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface PKDownloaderSpeedTracker : NSObject {

	unsigned long long _averageBytesPerSecond;
	NSDate* _queueStartTime;
	unsigned long long _bytesSinceQueueStart;
	unsigned long long _bytesAtLastUpdate;

}
-(void)didGetBytes:(unsigned long long)arg1 ;
-(void)updateSpeed;
-(void)setAverageBytesPerSecond:(unsigned long long)arg1 ;
-(unsigned long long)averageBytesPerSecond;
-(id)init;
-(void)dealloc;
-(id)description;
@end

