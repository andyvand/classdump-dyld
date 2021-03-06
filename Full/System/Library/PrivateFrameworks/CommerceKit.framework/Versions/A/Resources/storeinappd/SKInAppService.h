/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeinappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKInAppService <SKServiceRemoteObject>
@required
-(void)finishPaymentWithMatchingID:(id)arg1;
-(void)addDownloadWithID:(id)arg1;
-(void)cancelDownloadWithID:(id)arg1;
-(void)pauseDownloadWithID:(id)arg1;
-(void)resumeDownloadWithID:(id)arg1;
-(void)askToBuyRequestWasApprovedWithInfo:(id)arg1;
-(void)askToBuyRequestWasDeclinedWithInfo:(id)arg1;
-(void)addPurchaseObserver:(id)arg1;
-(void)removePurchaseObserver:(id)arg1;
-(void)addPaymentWithInfo:(id)arg1;
-(void)restoreCompletedTransactionsForUsername:(id)arg1;
-(void)deleteContentForProductID:(id)arg1;
-(void)deleteSharedIAPContentForGroupID:(id)arg1 productID:(id)arg2;
-(void)requestVPPReceiptRenewalWithSandboxOptions:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)requestProductsWithIdentifiers:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end

