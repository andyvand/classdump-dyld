/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _modelVersionHash;
	long long _numRequiredTransactions;
	long long _storeSize;
	long long _logSize;
	D _logToStoreSizeRatio;
	long long _minLogBytes;
	PFUbiquityKnowledgeVector* _currentBaselineKV;
	PFUbiquityKnowledgeVector* _currentKV;

}

@property (nonatomic,readonly) NSString * localPeerID;                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (assign,nonatomic) long long numRequiredTransactions;                          //@synthesize numRequiredTransactions=_numRequiredTransactions - In the implementation block
@property (nonatomic,readonly) long long storeSize;                                      //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,readonly) long long logSize;                                        //@synthesize logSize=_logSize - In the implementation block
@property (assign,nonatomic) D logToStoreSizeRatio;                                      //@synthesize logToStoreSizeRatio=_logToStoreSizeRatio - In the implementation block
@property (assign,nonatomic) long long minLogBytes;                                      //@synthesize minLogBytes=_minLogBytes - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentBaselineKV;              //@synthesize currentBaselineKV=_currentBaselineKV - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKV;                      //@synthesize currentKV=_currentKV - In the implementation block
-(NSString *)localPeerID;
-(void)setCurrentBaselineKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setCurrentKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setNumRequiredTransactions:(long long)arg1 ;
-(void)setStoreSize:(long long)arg1 ;
-(void)setLogSize:(long long)arg1 ;
-(void)setLogToStoreSizeRatio:(D)arg1 ;
-(void)setMinLogBytes:(long long)arg1 ;
-(long long)bytesForFileAtPath:(id)arg1 ;
-(NSString *)modelVersionHash;
-(char)haveEnoughTransactionsToRoll;
-(char)logsConsumeEnoughDiskSpace;
-(void)updateHeuristics;
-(char)canRollBaseline:(id*)arg1 ;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(long long)numRequiredTransactions;
-(long long)storeSize;
-(long long)logSize;
-(D)logToStoreSizeRatio;
-(long long)minLogBytes;
-(PFUbiquityKnowledgeVector *)currentBaselineKV;
-(PFUbiquityKnowledgeVector *)currentKV;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copy;
@end

