/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSDictionary, NSTimer, NSXPCConnection, NSString;

@interface WBSAutomaticReadingListSocialSource : NSObject {

	id _serviceImage;
	NSMutableDictionary* _accountsToNumberOfRequestsInProgressForOlderItems;
	NSArray* _accounts;
	NSDictionary* _accountsToTrackedRecordsInfoMap;
	NSTimer* _minimumTimeBetweenRequestsTimer;
	unsigned _numberOfRequestsInProgressForNewerItems;
	NSXPCConnection* _socialHelperConnection;

}

@property (nonatomic,copy) NSArray * accounts;                                              //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeIdentifier; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) id serviceImage; 
@property (nonatomic,retain) NSDictionary * accountsToTrackedRecordsInfoMap;                //@synthesize accountsToTrackedRecordsInfoMap=_accountsToTrackedRecordsInfoMap - In the implementation block
@property (nonatomic,retain) NSTimer * minimumTimeBetweenRequestsTimer;                     //@synthesize minimumTimeBetweenRequestsTimer=_minimumTimeBetweenRequestsTimer - In the implementation block
@property (assign,nonatomic) unsigned numberOfRequestsInProgressForNewerItems;              //@synthesize numberOfRequestsInProgressForNewerItems=_numberOfRequestsInProgressForNewerItems - In the implementation block
@property (nonatomic,retain) NSXPCConnection * socialHelperConnection;                      //@synthesize socialHelperConnection=_socialHelperConnection - In the implementation block
+(id)allSocialSources;
+(id)itemsFromAllSocialSourcesByDate;
-(id)serviceName;
-(Class)itemClass;
-(void)dealloc;
-(id)init;
-(id)accounts;
-(id)serviceType;
-(void)_accountsChanged:(id)arg1 ;
-(id)accountTypeIdentifier;
-(id)_findAccounts;
-(void)setMinimumTimeBetweenRequestsTimer:(id)arg1 ;
-(void)setSocialHelperConnection:(id)arg1 ;
-(unsigned)numberOfRequestsInProgressForNewerItems;
-(id)_existingSocialHelperConnection;
-(id)minimumTimeBetweenRequestsTimer;
-(void)_didStartRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)_didCompleteRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)_performRequestForMoreItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 successHandler:(/*^block*/ id)arg3 ;
-(double)minimumTimeBetweenRequests;
-(void)_minimumTimeBetweenRequestsTimerFired:(id)arg1 ;
-(id)resourceURLString;
-(id)accountsToTrackedRecordsInfoMap;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(id)socialHelperConnection;
-(void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1 ;
-(void)_addItems:(id)arg1 withAge:(int)arg2 inRange:(id)arg3 rangeOfTrackedRecordsAtTimeOfRequest:(id)arg4 forAccountWithIdentifier:(id)arg5 ;
-(void)_requestOlderItemsIfNecessaryToReachMaximumForAccountWithIdentifier:(id)arg1 ;
-(void)setNumberOfRequestsInProgressForNewerItems:(unsigned)arg1 ;
-(void)_invalidateSocialHelperConnectionIfPossible;
-(void)setAccountsToTrackedRecordsInfoMap:(id)arg1 ;
-(void)_didAddItemsForAccountWithIdentifier:(id)arg1 ;
-(int)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(int)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(int)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2 ;
-(int)compareItem:(id)arg1 toItem:(id)arg2 ;
-(id)recordRange:(id)arg1 withOldestFromItem:(id)arg2 ;
-(id)repostResourceURLStringForItem:(id)arg1 ;
-(void)requestMoreItemsWithAge:(int)arg1 ;
-(void)requestMaximumNumberOfOlderItems;
-(id)serviceImage;
-(void)repostItem:(id)arg1 fromAccountWithIdentifier:(id)arg2 ;
-(void)setAccounts:(id)arg1 ;
@end
