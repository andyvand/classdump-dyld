/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioGetGenreTreeNodesRequest : RadioRequest {

	unsigned long long _parentNodeID;
	SSURLConnectionRequest* _request;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;

}

@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,readonly) SSMetricsPageEvent * metricsPageEvent;                      //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
+(id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1 ;
+(id)fallbackRequestPath;
+(id)requestBagKey;
+(id)responseContentKey;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(id)initWithParentNodeID:(unsigned long long)arg1 ;
-(id)_genreTreeByApplyingResponse:(id)arg1 ;
-(void)startWithCachedCompletionHandler:(/*^block*/ id)arg1 networkCompletionHandler:(/*^block*/ id)arg2 ;
-(id)metricsPageEvent;
-(id)metricsConfiguration;
-(void).cxx_destruct;
@end
