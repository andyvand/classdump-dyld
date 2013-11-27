/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, QuotaInfoResponse, NSMutableDictionary;

@interface QuotaRequestManager : NSObject {

	NSOperationQueue* _requestQueue;
	NSObject<OS_dispatch_queue>* _quota_info_queue;
	QuotaInfoResponse* _quotaInfo;
	NSMutableDictionary* _appDetailsCache;

}
+(id)noAccountError;
+(id)sharedManager;
-(id)quotaInfoError:(id*)arg1 ;
-(void)noteQuotaInfoChanged;
-(void)getAppDetailsForBundleIDs:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getQuotaInfoForHandler:(/*^block*/ id)arg1 ;
-(void)clearCachedQuotaInfo;
-(id)_sendSynchronousAARequest:(id)arg1 ;
-(id)appDetailsForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(void)clearCachedAppDetails;
-(void)dealloc;
-(id)init;
@end
