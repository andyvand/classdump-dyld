/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityGlobalObjectIDCache, PFUbiquityPeerRangeCache, PFUbiquityTransactionLogCache, PFUbiquityTransactionHistoryCache, PFUbiquityKnowledgeVector, PFUbiquityPeerReceipt, NSLock;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	PFUbiquityGlobalObjectIDCache* _globalIDCache;
	PFUbiquityPeerRangeCache* _peerRangeCache;
	PFUbiquityTransactionLogCache* _transactionLogCache;
	PFUbiquityTransactionHistoryCache* _transactionHistoryCache;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _baselineKV;
	PFUbiquityPeerReceipt* _peerReceipt;
	char _pendingReceiptWrite;
	NSLock* _receiptFileLock;
	char _allowSchedulingOfReceiptFileWrites;

}

@property (nonatomic,readonly) PFUbiquityGlobalObjectIDCache * globalIDCache;                            //@synthesize globalIDCache=_globalIDCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeerRangeCache * peerRangeCache;                                //@synthesize peerRangeCache=_peerRangeCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionLogCache * transactionLogCache;                      //@synthesize transactionLogCache=_transactionLogCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionHistoryCache * transactionHistoryCache;              //@synthesize transactionHistoryCache=_transactionHistoryCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeerReceipt * peerReceipt;                                      //@synthesize peerReceipt=_peerReceipt - In the implementation block
@property (retain) PFUbiquityKnowledgeVector * kv;                                                       //@synthesize kv=_kv - In the implementation block
@property (retain) PFUbiquityKnowledgeVector * baselineKV;                                               //@synthesize baselineKV=_baselineKV - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                  //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                                     //@synthesize storeName=_storeName - In the implementation block
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)setKv:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)scheduleReceiptFileWrite:(id)arg1 ;
-(PFUbiquityTransactionLogCache *)transactionLogCache;
-(PFUbiquityTransactionHistoryCache *)transactionHistoryCache;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(PFUbiquityKnowledgeVector *)kv;
-(PFUbiquityPeerRangeCache *)peerRangeCache;
-(PFUbiquityKnowledgeVector *)baselineKV;
-(void)cacheWrapperWillBeRemovedFromEntry;
-(id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setBaselineKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(PFUbiquityGlobalObjectIDCache *)globalIDCache;
-(void)_appWillResignActive:(id)arg1 ;
-(char)writeReceiptFile:(char)arg1 error:(id*)arg2 ;
-(PFUbiquityPeerReceipt *)peerReceipt;
-(id)init;
-(void)dealloc;
@end

