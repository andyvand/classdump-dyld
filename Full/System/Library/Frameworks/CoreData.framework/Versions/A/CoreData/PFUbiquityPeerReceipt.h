/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityKnowledgeVector, NSDate, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {

	PFUbiquityKnowledgeVector* _kv;
	NSDate* _writeDate;

}

@property (nonatomic,readonly) PFUbiquityLocation * receiptFileLocation; 
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * kv;                        //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) NSDate * writeDate;                                      //@synthesize writeDate=_writeDate - In the implementation block
-(id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6 ;
-(PFUbiquityKnowledgeVector *)kv;
-(id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2 ;
-(NSDate *)writeDate;
-(char)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(char)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
-(PFUbiquityLocation *)receiptFileLocation;
-(void)setWriteDate:(NSDate *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

