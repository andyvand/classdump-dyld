/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic,retain) NSString * peerKey; 
@property (nonatomic,retain) NSString * peerCode; 
@property (nonatomic,retain) NSSet * remoteStates; 
@property (nonatomic,retain) NSSet * primaryKeyRanges; 
@property (nonatomic,retain) NSSet * transactionEntries; 
@property (nonatomic,retain) NSSet * localPeerStates; 
+(id)allPeersInManagedObjectContext:(id)arg1 ;
+(id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(char)arg3 ;
@end

