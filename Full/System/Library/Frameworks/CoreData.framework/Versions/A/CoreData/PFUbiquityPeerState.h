/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerState : NSManagedObject

@property (nonatomic,retain) NSString * lastProcessedTransactionLogURL; 
@property (nonatomic,retain) NSString * storeName; 
@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata; 
+(id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(char)arg4 ;
+(id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3 ;
-(id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

