/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CKServiceInterface.h>

@class NSMutableArray, NSArray, NSNumber;

@interface CKPurchaseController : CKServiceInterface {

	NSMutableArray* _purchases;
	NSMutableArray* _rejectedPurchases;
	NSArray* _adoptionEligibleItems;
	NSNumber* _adoptionServerStatus;
	NSNumber* _adoptionErrorNumber;
	/*^block*/id _dialogHandler;

}

@property (copy) id dialogHandler;              //@synthesize dialogHandler=_dialogHandler - In the implementation block
+(id)sharedPurchaseController;
+(void)setNeedsSilentMachineAuthorization:(char)arg1 ;
-(id)dialogHandler;
-(void)checkInstallRequirementsAtURL:(id)arg1 productID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performPurchase:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startPurchases:(id)arg1 shouldStartDownloads:(char)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)resumeDownloadForPurchasedProductID:(id)arg1 ;
-(void)cancelPurchaseWithProductID:(id)arg1 ;
-(id)purchasesInProgress;
-(id)purchaseInProgressForProductID:(id)arg1 ;
-(void)checkServerDownloadQueue;
-(void)_performVPPReceiptRenewal;
-(char)adoptionCompletedForBundleID:(id)arg1 ;
-(void)setDialogHandler:(id)arg1 ;
@end

