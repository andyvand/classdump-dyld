/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOGeocodeProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	char _isForwardGeocodeRequest;
	char _isBatchRequest;
	char _cancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerName;
+(id)forwardGeocoderURL;
+(id)reverseGeocoderURL;
+(id)batchReverseGeocoderURL;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)forwardGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)reverseGeocode:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(id)newRequester:(id)arg1 ;
-(void)_batchRequesterDidFinish:(id)arg1 ;
-(void)_singleRequesterDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
@end

