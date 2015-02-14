/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface THGlossaryIndexSection : NSObject {

	NSString* mSectionTitle;
	long long mSectionIndex;
	NSMutableArray* mEntries;
	char mEntriesNeedSorting;

}

@property (nonatomic,readonly) NSString * sectionTitle; 
@property (nonatomic,readonly) NSArray * entries; 
@property (nonatomic,readonly) long long entryCount; 
@property (assign,nonatomic) long long sectionIndex; 
-(NSString *)sectionTitle;
-(id)initWithSectionTitle:(id)arg1 andEntry:(id)arg2 ;
-(long long)indexForEntry:(id)arg1 ;
-(long long)entryCount;
-(NSArray *)entries;
-(void)setSectionIndex:(long long)arg1 ;
-(long long)sectionIndex;
-(id)entryAtIndex:(long long)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
@end

