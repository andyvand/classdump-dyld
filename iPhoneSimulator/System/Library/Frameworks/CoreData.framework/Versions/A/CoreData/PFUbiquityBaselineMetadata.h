/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSCoding.h>

@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSMutableDictionary, NSDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding> {

	NSString* _storeName;
	NSString* _authorPeerID;
	NSString* _modelVersionHash;
	PFUbiquityLocation* _rootLocation;
	PFUbiquityKnowledgeVector* _pKV;
	PFUbiquityKnowledgeVector* _kv;
	NSMutableDictionary* _peerRanges;

}

@property (readonly) NSString * storeName;                                                       //@synthesize storeName=_storeName - In the implementation block
@property (readonly) NSString * authorPeerID;                                                    //@synthesize authorPeerID=_authorPeerID - In the implementation block
@property (readonly) NSString * modelVersionHash;                                                //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                                          //@synthesize rootLocation=_rootLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * previousKnowledgeVector;              //@synthesize pKV=_pKV - In the implementation block
@property (readonly) PFUbiquityKnowledgeVector * knowledgeVector;                                //@synthesize kv=_kv - In the implementation block
@property (readonly) NSDictionary * peerRanges;                                                  //@synthesize peerRanges=_peerRanges - In the implementation block
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(NSString *)modelVersionHash;
-(NSString *)storeName;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(NSDictionary *)peerRanges;
-(char)gatherMetadataWithStore:(id)arg1 andError:(id*)arg2 ;
-(NSString *)authorPeerID;
-(PFUbiquityKnowledgeVector *)previousKnowledgeVector;
-(id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3 ;
-(void)addDictionaryForPeerRange:(id)arg1 ;
-(id)createPeerRangeDictionary:(id)arg1 ;
-(void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1 ;
-(void)_migrateToModelVersionHash:(id)arg1 ;
-(PFUbiquityLocation *)rootLocation;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

