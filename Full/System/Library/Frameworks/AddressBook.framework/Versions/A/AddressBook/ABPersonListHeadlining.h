/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonListHeadlining <NSObject>
@property (assign) long long sectioningThreshold; 
@property (assign) unsigned long long countLabelThreshold; 
@required
-(void)setSectioningThreshold:(long long)arg1;
-(void)setCountLabelThreshold:(unsigned long long)arg1;
-(unsigned long long)countLabelThreshold;
-(long long)sectioningThreshold;
-(id)bucketedEntriesForSortedEntries:(id)arg1;

@end

