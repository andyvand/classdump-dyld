/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest {

	/*^block*/id _dealHandler;

}

@property (nonatomic,copy) id dealHandler;              //@synthesize dealHandler=_dealHandler - In the implementation block
+(id)requestWithBusinesMetadata:(id)arg1 ;
-(void)setDealHandler:(id)arg1 ;
-(void)handleData:(id)arg1 ;
-(id)urlRequest;
-(id)dealHandler;
-(void)handleError:(id)arg1 ;
-(id)url;
@end

