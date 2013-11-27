/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:51:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class AOSFindBaseServiceProvider, NSDictionary;

@interface AOSFMRequestQueueCheck : AOSFMRequest {

	AOSFindBaseServiceProvider* _provider;
	NSDictionary* _serverContext;

}

@property (nonatomic,retain) AOSFindBaseServiceProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSDictionary * serverContext;                       //@synthesize serverContext=_serverContext - In the implementation block
-(id)initWithProvider:(id)arg1 andServerContext:(id)arg2 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(double)maxRetryInterval;
-(int)maxNonNetworkRelatedRetries;
-(int)maxConsecutiveNetworkNotificationRetries;
-(void)setServerContext:(id)arg1 ;
-(id)serverContext;
-(void)setProvider:(id)arg1 ;
-(id)requestBody;
-(void).cxx_destruct;
-(id)provider;
@end
