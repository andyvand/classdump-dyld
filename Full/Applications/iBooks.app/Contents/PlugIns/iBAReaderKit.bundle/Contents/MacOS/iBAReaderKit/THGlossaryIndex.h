/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, TSUPointerKeyDictionary, NSMutableDictionary, NSArray;

@interface THGlossaryIndex : NSObject {

	NSMutableArray* mSortedEntries;
	TSUPointerKeyDictionary* mEntryToIndexMap;
	NSMutableArray* mSections;
	NSMutableDictionary* mSectionTitleToSectionMap;
	NSArray* mSectionIndexTitles;

}

@property (nonatomic,readonly) long long numberOfEntries; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
+(id)alphabeticalIndexForEntries:(id)arg1 ;
+(id)alphabeticalIndexForGlossary:(id)arg1 withPrefix:(id)arg2 ;
-(void)p_releaseData;
-(id)p_sectionForSectionTitle:(id)arg1 ;
-(long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(char)isLastInSection:(id)arg1 ;
-(id)entryForRowAtIndexPath:(id)arg1 ;
-(id)indexPathForEntry:(id)arg1 ;
-(NSArray *)sectionIndexTitles;
-(id)p_sectionAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(long long)indexForEntry:(id)arg1 ;
-(long long)numberOfEntries;
-(void)p_buildAlphabeticalIndexForGlossaryEntries:(id)arg1 ;
-(long long)numberOfSections;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

