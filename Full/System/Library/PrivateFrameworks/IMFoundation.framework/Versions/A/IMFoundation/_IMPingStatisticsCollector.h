/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class _IMPingPacketData, NSMutableArray, NSMutableString, IMPingStatistics;

@interface _IMPingStatisticsCollector : NSObject {

	_IMPingPacketData* _timestampArray[160];
	NSMutableArray* _roundTriptimes;
	NSMutableString* _stringToWriteToFile;
	IMPingStatistics* _stats;

}
-(id)pingStats;
-(double)_computeMedianTime:(id)arg1 ;
-(double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3 ;
-(void)addEchoPacket:(int)arg1 packetTimestamp:(timeval)arg2 error:(int)arg3 ;
-(timeval)timeSentForPacket:(int)arg1 ;
-(void)addEchoReplyPacket:(int)arg1 ;
-(void)timeoutOldSequenceNumbers:(double)arg1 ;
-(char)logStatsToFile:(id)arg1 error:(id*)arg2 ;
-(id)pingStatsForLastNSeconds:(double)arg1 ;
-(id)init;
-(void)dealloc;
@end

