/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKMapServiceTicket;
@class MKLocalSearchRequest;

@interface MKLocalSearch : NSObject {

	MKLocalSearchRequest* _request;
	id<MKMapServiceTicket> _ticket;

}

@property (getter=isSearching,nonatomic,readonly) char searching; 
-(id)initWithRequest:(id)arg1 ;
-(void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_phoneOnlyStartWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)cancel;
-(char)isSearching;
@end

