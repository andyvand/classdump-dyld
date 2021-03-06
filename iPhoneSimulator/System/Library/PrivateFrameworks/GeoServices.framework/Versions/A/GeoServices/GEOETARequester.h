/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable, NSLock;

@interface GEOETARequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
+(id)sharedRequester;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(char)arg3 connectionProperties:(const SCD_Struct_GE110*)arg4 willSendRequest:(/*^block*/id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE110*)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 networkActivity:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
@end

