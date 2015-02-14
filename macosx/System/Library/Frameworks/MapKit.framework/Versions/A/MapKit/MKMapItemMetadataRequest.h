/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapItemMetadata, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject {

	MKMapItemMetadata* _businessMetadata;

}

@property (nonatomic,retain) MKMapItemMetadata * businessMetadata;              //@synthesize businessMetadata=_businessMetadata - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURLRequest * urlRequest; 
-(void)handleData:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(MKMapItemMetadata *)businessMetadata;
-(void)setBusinessMetadata:(MKMapItemMetadata *)arg1 ;
-(void)handleError:(id)arg1 ;
-(NSURL *)url;
@end

