/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDSession, NSString, NSMutableArray, NSObject;

@interface CDAttribute : NSObject {

	CDSession* _session;
	NSString* _name;
	NSString* _fullName;
	long long _type;
	unsigned long long _integerId;
	NSMutableArray* resourceCallbackList;
	NSObject*<OS_dispatch_queue> resourceCallbackQueue;
	int resourceCallToken;
	int focalAppToken;
	int conditionChangeToken;
	unsigned short _admissionMask;
	NSObject*<OS_dispatch_queue> _deferredRequestsQ;

}

@property (readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (readonly) NSString * fullName;                                         //@synthesize fullName=_fullName - In the implementation block
@property (readonly) long long type;                                              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long integerId;                                //@synthesize integerId=_integerId - In the implementation block
@property (readonly) CDSession * session;                                         //@synthesize session=_session - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> deferredRequestsQ;              //@synthesize deferredRequestsQ=_deferredRequestsQ - In the implementation block
-(id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)integerId;
-(id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)attributeIsClientWriteable;
-(char)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(char)arg4 fallingEdge:(char)arg5 error:(id*)arg6 ;
-(NSObject*<OS_dispatch_queue>)deferredRequestsQ;
-(char)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(char)arg4 fallingEdge:(char)arg5 deferredRequest:(char)arg6 error:(id*)arg7 ;
-(id)temporalForecastXPCObjectToArray:(id)arg1 attributeValue:(id)arg2 forecastType:(long long)arg3 error:(id*)arg4 ;
-(id)peerForecastXPCObjectToDictionary:(id)arg1 attributeValue:(id)arg2 error:(id*)arg3 ;
-(id)repeatedStatisticXPCObjectToArray:(id)arg1 error:(id*)arg2 ;
-(void)stuffDictionary:(id*)arg1 forStatisticType:(long long)arg2 matchingStatisticType:(long long)arg3 xpcKey:(const char*)arg4 incomingXpcObject:(id)arg5 ;
-(char)admissionCheckOfValue:(id)arg1 type:(long long)arg2 options:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(void)callListOfCallbacks:(id)arg1 token:(int*)arg2 oneshotCall:(char)arg3 ;
-(char)setResourceDispatch:(id*)arg1 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(char)setCategory:(long long)arg1 error:(id*)arg2 ;
-(char)associateToBudget:(id)arg1 error:(id*)arg2 ;
-(char)associateToAttribute:(id)arg1 error:(id*)arg2 ;
-(char)disassociateWithError:(id*)arg1 ;
-(char)destroyWithError:(id*)arg1 ;
-(char)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(char)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(char)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(char)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(char)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id*)arg5 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastLength:(double)arg3 forecastGranularity:(long long)arg4 forecastType:(long long)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)budgetStatisticsForHistoryWindow:(id)arg1 error:(id*)arg2 ;
-(long long)budgetStatusWithError:(id*)arg1 ;
-(char)admissionCheckOfValue:(id)arg1 withReason:(id*)arg2 error:(id*)arg3 ;
-(char)admissionCheckOfValue:(id)arg1 withReason:(id*)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(char)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(char)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
-(char)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(char)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
-(char)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(char)setResourceAvailabilityBlockWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(char)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(char)reset:(long long)arg1 error:(id*)arg2 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id*)arg4 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id*)arg4 ;
-(char)setAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)resetAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(char)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(char)requestStatisticFromDevice:(id)arg1 statistic:(long long)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(char)setAdmissionManualType:(BOOL)arg1 error:(id*)arg2 ;
-(char)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(char)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(NSString *)name;
-(long long)type;
-(CDSession *)session;
-(NSString *)fullName;
@end

