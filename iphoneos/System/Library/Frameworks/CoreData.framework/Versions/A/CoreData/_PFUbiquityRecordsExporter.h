/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSString, NSDate, PFUbiquityLocation, NSLock, NSMutableDictionary;

@interface _PFUbiquityRecordsExporter : NSObject {

	NSString* _localPeerID;
	NSDate* _lastTransactionDate;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _storeName;
	NSLock* _transactionLock;
	NSMutableDictionary* _pendingTransactionsToStoreNameAndTransactionNumber;
	char _pendingTempLogMove;
	char _allowTempLogStorage;
	char _useLocalStorage;
	dispatch_queue_sRef _processingQueue;
	char _throwOptimisticLockingException;

}

@property (nonatomic,readonly) NSString * localPeerID;                                //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;               //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * localRootLocation;                //@synthesize localRootLocation=_localRootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * currentRootLocation; 
@property (retain) NSDate * lastTransactionDate;                                      //@synthesize lastTransactionDate=_lastTransactionDate - In the implementation block
@property (nonatomic,readonly) char pendingTempLogMove;                               //@synthesize pendingTempLogMove=_pendingTempLogMove - In the implementation block
@property (assign,nonatomic) char allowTempLogStorage;                                //@synthesize allowTempLogStorage=_allowTempLogStorage - In the implementation block
@property (assign,nonatomic) char useLocalStorage;                                    //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
@property (assign,nonatomic) char throwOptimisticLockingException;                    //@synthesize throwOptimisticLockingException=_throwOptimisticLockingException - In the implementation block
-(NSString *)localPeerID;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)setLastTransactionDate:(NSDate *)arg1 ;
-(NSDate *)lastTransactionDate;
-(void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2 ;
-(char)shouldRespondToSaveNotification:(id)arg1 ;
-(void)setUseLocalStorage:(char)arg1 ;
-(id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4 ;
-(void)scheduleTempLogMove;
-(void)moveLogsFromTempDirectory;
-(id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2 ubiquityRootLocation:(id)arg3 localRootLocation:(id)arg4 andProcessingQueue:(dispatch_queue_sRef)arg5 ;
-(PFUbiquityLocation *)currentRootLocation;
-(void)beginWatchingForChangesFromStore:(id)arg1 ;
-(void)stopWatchingForChanges;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(char)pendingTempLogMove;
-(char)allowTempLogStorage;
-(void)setAllowTempLogStorage:(char)arg1 ;
-(PFUbiquityLocation *)localRootLocation;
-(char)useLocalStorage;
-(char)throwOptimisticLockingException;
-(void)setThrowOptimisticLockingException:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)managedObjectContextDidSave:(id)arg1 ;
@end
