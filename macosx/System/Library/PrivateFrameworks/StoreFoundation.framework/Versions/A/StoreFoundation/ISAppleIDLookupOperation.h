/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>
#import <StoreFoundation/ISURLOperationDelegate.h>

@class ISPurchaseReceipt, NSString;

@interface ISAppleIDLookupOperation : ISOperation <ISURLOperationDelegate> {

	ISPurchaseReceipt* mReceipt;
	NSString* mAppleID;

}

@property (readonly) NSString * appleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appleIDLookupOperationForReceipt:(id)arg1 storeClient:(id)arg2 ;
-(NSString *)appleID;
-(void)run;
-(id)_requestBodyData;
-(id)initWithReceipt:(id)arg1 storeClient:(id)arg2 ;
-(id)_newURLOperationWithURLBagType:(unsigned long long)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

