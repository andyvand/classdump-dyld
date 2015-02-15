/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@protocol ABLinkingInfoDataSource;
@class NSArray, NSDictionary;

@interface ABLinkingCommand : ABBookUndoableCommand {

	NSArray* _peopleUIDArrays;
	id<ABLinkingInfoDataSource> _adapter;
	NSArray* _peopleArrays;
	NSDictionary* _peopleByUniqueId;
	NSDictionary* _originalLinkingSnapshot;
	NSDictionary* _modifiedLinkingSnapshot;

}

@property (retain) NSArray * peopleArrays;                              //@synthesize peopleArrays=_peopleArrays - In the implementation block
@property (retain) NSDictionary * peopleByUniqueId;                     //@synthesize peopleByUniqueId=_peopleByUniqueId - In the implementation block
@property (retain) NSDictionary * originalLinkingSnapshot;              //@synthesize originalLinkingSnapshot=_originalLinkingSnapshot - In the implementation block
@property (retain) NSDictionary * modifiedLinkingSnapshot;              //@synthesize modifiedLinkingSnapshot=_modifiedLinkingSnapshot - In the implementation block
+(id)commandWithRecords:(id)arg1 addressBook:(id)arg2 ;
+(id)commandWithRecordArrays:(id)arg1 addressBook:(id)arg2 ;
-(void)execute;
-(void)executeUndo;
-(void)executeRedo;
-(void)changePeople:(id)arg1 ;
-(id)initWithRecords:(id)arg1 adapter:(id)arg2 ;
-(id)initWithRecordArrays:(id)arg1 adapter:(id)arg2 ;
-(id)uidsOfPeopleInArrays:(id)arg1 adapter:(id)arg2 ;
-(void)prepareRecords;
-(id)makeLinkingSnapshot;
-(void)setOriginalLinkingSnapshot:(NSDictionary *)arg1 ;
-(void)changeAllPeople;
-(void)setModifiedLinkingSnapshot:(NSDictionary *)arg1 ;
-(void)setPeopleArrays:(NSArray *)arg1 ;
-(NSDictionary *)originalLinkingSnapshot;
-(void)applyLinks:(id)arg1 ;
-(NSDictionary *)modifiedLinkingSnapshot;
-(NSArray *)peopleArrays;
-(void)loadPeople;
-(void)indexRecords;
-(id)allUIDs;
-(void)enumeratePeople:(/*^block*/id)arg1 ;
-(void)setPeopleByUniqueId:(NSDictionary *)arg1 ;
-(NSDictionary *)peopleByUniqueId;
-(void)dealloc;
@end

