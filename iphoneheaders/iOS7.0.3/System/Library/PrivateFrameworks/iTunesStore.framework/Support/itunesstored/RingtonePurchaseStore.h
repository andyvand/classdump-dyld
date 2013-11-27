/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface RingtonePurchaseStore : NSObject {

	NSManagedObjectContext* _context;
	BOOL _ownsContext;

}
-(id)initWithMangedObjectContext:(id)arg1 ;
-(id)ringtonesForAdamID:(unsigned long long)arg1 transactionID:(id)arg2 ;
-(void)addRingtonesForPurchases:(id)arg1 ;
-(void)finalizeRingtoneForAdamID:(unsigned long long)arg1 transactionID:(id)arg2 ringtoneGUID:(id)arg3 ;
-(void)prunePurchasedRingtones;
-(void)removeRingtonesForPurchases:(id)arg1 ;
-(void)removeRingtoneForAdamID:(unsigned long long)arg1 transactionID:(id)arg2 ;
-(void)updateRingtonesForPurchases:(id)arg1 withDownloads:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
