/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABGroupEntry, NSArray;

@interface ABGroupEntriesResult : NSObject {

	ABGroupEntry* _allDirectoriesGroupEntry;
	ABGroupEntry* _defaultDirectoryGroupEntry;
	NSArray* _groupEntries;

}

@property (retain) ABGroupEntry * allDirectoriesGroupEntry;                //@synthesize allDirectoriesGroupEntry=_allDirectoriesGroupEntry - In the implementation block
@property (retain) ABGroupEntry * defaultDirectoryGroupEntry;              //@synthesize defaultDirectoryGroupEntry=_defaultDirectoryGroupEntry - In the implementation block
@property (retain) NSArray * groupEntries;                                 //@synthesize groupEntries=_groupEntries - In the implementation block
-(NSArray *)groupEntries;
-(void)setGroupEntries:(NSArray *)arg1 ;
-(ABGroupEntry *)allDirectoriesGroupEntry;
-(void)setAllDirectoriesGroupEntry:(ABGroupEntry *)arg1 ;
-(ABGroupEntry *)defaultDirectoryGroupEntry;
-(void)setDefaultDirectoryGroupEntry:(ABGroupEntry *)arg1 ;
-(void)dealloc;
@end

