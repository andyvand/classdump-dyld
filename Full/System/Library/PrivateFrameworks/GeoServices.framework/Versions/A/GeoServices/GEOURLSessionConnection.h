/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOURLConnectionSession;

@interface GEOURLSessionConnection : NSObject {

	CFURLConnectionRef _cfConnection;
	id _delegate;
	GEOURLConnectionSession* _connectionSession;

}
-(id)initWithCFRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 usingSession:(id)arg3 ;
-(void)connectionDidReceiveResponse:(CFURLResponseRef)arg1 ;
-(void)connectionDidReceiveData:(id)arg1 ;
-(void)connectionDidFinishLoading;
-(void)connectionDidFailWithError:(id)arg1 ;
-(void)connectionDidTerminate;
-(void)dealloc;
-(void)cancel;
@end

