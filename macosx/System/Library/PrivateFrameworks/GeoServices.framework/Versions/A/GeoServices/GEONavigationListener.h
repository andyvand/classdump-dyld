/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEONavigationListener : NSObject {

	xpc_connection_sRef _connection;
	dispatch_queue_sRef _queue;
	/*^block*/id _routeSummaryUpdatedHandler;
	/*^block*/id _guidanceStateUpdatedHandler;

}

@property (nonatomic,copy) id routeSummaryUpdatedHandler;               //@synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler - In the implementation block
@property (nonatomic,copy) id guidanceStateUpdatedHandler;              //@synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler - In the implementation block
-(void)_closeConnection;
-(void)_createConnection;
-(void)_request:(id)arg1 ;
-(void)requestRouteSummary;
-(id)routeSummaryUpdatedHandler;
-(id)guidanceStateUpdatedHandler;
-(void)requestGuidanceState;
-(void)setRouteSummaryUpdatedHandler:(id)arg1 ;
-(void)setGuidanceStateUpdatedHandler:(id)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
@end

