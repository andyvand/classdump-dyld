/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer;

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) NSString * peerID; 
@property (nonatomic,retain) NSString * storeName; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
+(id)remotePeerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)remotePeerStatesMatchingStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3 ;
@end

