/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSMutableArray, NSError, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary;

@interface NSFileAccessClaim : NSObject {

	xpc_connection_sRef _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	char _cameFromSuperarbiter;
	unsigned long long _blockageCount;
	char _didWait;
	char _isRevoked;
	NSMutableArray* _claimerBlockageReasons;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSMutableSet* _blockingReactorIDs;
	NSMutableArray* _providerCancellationProcedures;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	NSMutableArray* _devaluationProcedures;
	NSMutableArray* _finishingProcedures;
	id _claimerOrNil;
	dispatch_semaphore_sRef _claimerWaiterOrNull;
	NSMutableArray* _sandboxTokens;

}
+(char)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
+(char)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
+(char)readingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3 ;
+(char)writingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned long long)arg3 ;
-(void)block;
-(id)claimID;
-(void)setClaimerError:(id)arg1 ;
-(void)unblockClaimerForReason:(id)arg1 ;
-(char)shouldBeRevokedPriorToInvokingAccessor;
-(void)granted;
-(void)invokeClaimer;
-(char)claimerInvokingIsBlockedByReactorWithID:(id)arg1 ;
-(id)purposeID;
-(char)isBlockedByClaimWithPurposeID:(id)arg1 ;
-(void)blockClaimerForReason:(id)arg1 ;
-(void)whenDevaluedPerformProcedure:(/*^block*/id)arg1 ;
-(void)addPendingClaim:(id)arg1 ;
-(void)unblock;
-(char)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)whenFinishedPerformProcedure:(/*^block*/id)arg1 ;
-(void)devalueSelf;
-(id)descriptionWithIndenting:(id)arg1 ;
-(id)initWithClient:(xpc_connection_sRef)arg1 claimID:(id)arg2 purposeID:(id)arg3 ;
-(id)initWithClient:(xpc_connection_sRef)arg1 messageParameters:(id)arg2 replySender:(/*^block*/id)arg3 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)setCameFromSuperarbiter;
-(char)cameFromSuperarbiter;
-(char)didWait;
-(id)claimerError;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)whenRevokedPerformProcedure:(/*^block*/id)arg1 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(id)pendingClaims;
-(void)removePendingClaims:(id)arg1 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideThenContinue:(/*^block*/id)arg2 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(/*^block*/id)arg2 ;
-(void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(char)arg2 relinquishUsingProcedureGetter:(/*^block*/id)arg3 ;
-(char)canAccessLocations:(id)arg1 forReading:(char)arg2 error:(id*)arg3 ;
-(void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(dispatch_semaphore_sRef)newClaimerWaiter;
-(void)revoked;
-(void)devalueOldClaim:(id)arg1 ;
-(char)isGranted;
-(char)isRevoked;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(char)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(/*^block*/id)arg3 ;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(xpc_connection_sRef)client;
-(void)cancelled;
-(void)finished;
@end

