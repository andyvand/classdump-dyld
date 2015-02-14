/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABGroupDropPasteboardData, ABGroupDropDestination, NSMutableSet, NSMutableArray, NSSet, NSArray;

@interface ABGroupDropPasteboardDataCategorizer : NSObject {

	ABGroupDropPasteboardData* _pasteboardData;
	ABGroupDropDestination* _destination;
	NSMutableSet* _personUidsExistingInDestination;
	NSMutableArray* _linkedPersonUidsToImport;
	NSMutableSet* _groupUidsExistingInDestination;
	NSMutableSet* _groupUidsToImport;

}

@property (readonly) NSSet * personUidsExistingInDestination;              //@synthesize personUidsExistingInDestination=_personUidsExistingInDestination - In the implementation block
@property (readonly) NSArray * linkedPersonUidsToImport;                   //@synthesize linkedPersonUidsToImport=_linkedPersonUidsToImport - In the implementation block
@property (readonly) NSSet * groupUidsExistingInDestination;               //@synthesize groupUidsExistingInDestination=_groupUidsExistingInDestination - In the implementation block
@property (readonly) NSSet * groupUidsToImport;                            //@synthesize groupUidsToImport=_groupUidsToImport - In the implementation block
-(char)canAddMembers;
-(char)groupWouldCauseACycleWithDestinationGroup:(id)arg1 ;
-(void)removeGroupsInPersonListThatWouldCauseACycle:(id)arg1 ;
-(void)removePeopleAlreadyAMemberOfTheDestinationGroup;
-(void)categorizeGroupUid:(id)arg1 ;
-(void)removeAllGroupsIfNoDestinationGroup;
-(void)removeGroupsAlreadyASubgroupOfTheDestinationGroup;
-(void)categorizePeopleUids;
-(void)categorizeGroupUids;
-(id)initWithPasteboardData:(id)arg1 dropDestination:(id)arg2 ;
-(void)categorizePasteboardData;
-(char)canImportRecords;
-(char)hasPeopleToImport;
-(char)hasGroupsToImport;
-(NSSet *)personUidsExistingInDestination;
-(NSArray *)linkedPersonUidsToImport;
-(NSSet *)groupUidsExistingInDestination;
-(NSSet *)groupUidsToImport;
-(void)dealloc;
@end

