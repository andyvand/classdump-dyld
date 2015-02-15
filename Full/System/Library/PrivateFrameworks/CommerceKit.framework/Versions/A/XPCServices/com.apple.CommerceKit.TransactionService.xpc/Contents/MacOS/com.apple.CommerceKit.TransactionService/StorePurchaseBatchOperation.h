/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/XPCServices/com.apple.CommerceKit.TransactionService.xpc/Contents/MacOS/com.apple.CommerceKit.TransactionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class NSArray;

@interface StorePurchaseBatchOperation : ISOperation {

	NSArray* _purchases;
	/*^block*/id _purchaseCompletionHandler;

}

@property (copy) id purchaseCompletionHandler;              //@synthesize purchaseCompletionHandler=_purchaseCompletionHandler - In the implementation block
+(id)batchOperationsWithPurchases:(id)arg1 storeClient:(id)arg2 ;
-(id)initWithPurchases:(id)arg1 storeClient:(id)arg2 ;
-(void)_sendError:(id)arg1 forPurchase:(id)arg2 withDialogMessage:(id)arg3 ;
-(void)_notePurchasesFailed:(id)arg1 ;
-(char)_needsAuthenticationForPurchase:(id)arg1 ;
-(void)_cancelPurchasesWithError:(id)arg1 ;
-(void)_runPurchaseOperations;
-(void)_sendPurchaseFailed:(id)arg1 withError:(id)arg2 ;
-(void)_sendPurchaseFinished:(id)arg1 ;
-(char)_needsAuthenticationForUpdate:(id)arg1 ;
-(char)_needsAuthenticationForRedownload:(id)arg1 ;
-(id)identifiersForPurchases;
-(void)_notePurchasesFinished:(id)arg1 withDownloads:(id)arg2 ;
-(id)purchaseCompletionHandler;
-(void)setPurchaseCompletionHandler:(id)arg1 ;
-(void)run;
-(char)_authenticateReturningError:(id*)arg1 ;
-(void)_run;
@end
