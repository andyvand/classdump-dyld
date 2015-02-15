/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapServiceFixNotificationTicket.h>

@class GEOMapServiceTraits, GEORPProblemOptInRequest, NSString;

@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket> {

	GEORPProblemOptInRequest* _request;
	GEOMapServiceTraits* _traits;
	char _canceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;              //@synthesize traits=_traits - In the implementation block
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(GEOMapServiceTraits *)traits;
-(id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4 ;
-(void)dealloc;
-(void)cancel;
@end
