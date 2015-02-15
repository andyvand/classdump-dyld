/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalSession.h>
#import <CalendarPersistence/EWSExchangeServiceBindingDelegate.h>

@class CalOperationQueue, NSMutableDictionary, NSString;

@interface CalExchangeSession : CalSession <EWSExchangeServiceBindingDelegate> {

	CalOperationQueue* _queue;
	char _connectionHasBeenTested;
	char _connectionIsBeingTested;
	NSMutableDictionary* _managedObjectIDsToItemIds;

}

@property (assign) char connectionHasBeenTested;                    //@synthesize connectionHasBeenTested=_connectionHasBeenTested - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)activate;
-(void)deactivate;
-(id)operationQueue;
-(id)initWithSessionID:(id)arg1 ;
-(void)deletePersistedErrorAndNotify;
-(void)synchronizeDelegatesWithCompletion:(/*^block*/id)arg1 ;
-(id)managedPrincipalInContext:(id)arg1 ;
-(void)synchronizeWithFlags:(long long)arg1 ;
-(id)debugInfo;
-(double)timeSinceLastSync;
-(char)processChangeRequests:(char)arg1 ;
-(char)persistErrorAndNotify;
-(void)systemNetworkDidChange;
-(void)mailModifiedEWSInvitation:(id)arg1 ;
-(char)persistError:(id)arg1 forOperation:(id)arg2 ;
-(void)testConnection;
-(void)setConnectionHasBeenTested:(char)arg1 ;
-(void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(id)webServicesURL;
-(id)itemIdForManagedObjectID:(id)arg1 ;
-(void)setItemId:(id)arg1 forManagedObjectID:(id)arg2 ;
-(char)connectionHasBeenTested;
@end
