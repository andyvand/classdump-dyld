/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GEOGeocodeRequest;

@interface RTGeocoder : NSObject {

	GEOGeocodeRequest* _geocodeRequest;

}

@property (nonatomic,retain) GEOGeocodeRequest * geocodeRequest;              //@synthesize geocodeRequest=_geocodeRequest - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)setGeocodeRequest:(id)arg1 ;
-(id)geocodeRequest;
-(void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/ id)arg3 ;
-(void)_cancelRequest:(id)arg1 ;
-(id)geocodeLatitude:(double)arg1 longitude:(double)arg2 ;
-(void).cxx_destruct;
@end
