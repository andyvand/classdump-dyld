/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject {

	int _statusReportToken;
	CKContainer* _container;
	long long _scope;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic,__weak) CKContainer * container;                   //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long scope;                                  //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) int statusReportToken;                            //@synthesize statusReportToken=_statusReportToken - In the implementation block
-(id)CKPropertiesDescription;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)statusReport;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(int)statusReportToken;
-(void)setStatusReportToken:(int)arg1 ;
-(void)clearAssetCache;
-(void)clearRecordCache;
-(void)clearAuthTokensForRecordWithID:(id)arg1 ;
-(void)_scheduleOperation:(id)arg1 ;
-(void)fetchRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllRecordZonesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveSubscription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchSubscriptionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllSubscriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)scope;
-(void)setScope:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)addOperation:(id)arg1 ;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(NSOperationQueue *)operationQueue;
@end

