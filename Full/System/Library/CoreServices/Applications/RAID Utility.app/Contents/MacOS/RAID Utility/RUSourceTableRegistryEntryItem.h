/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RAID Utility/RUSourceTableItem.h>

@class CRRegistryEntry;

@interface RUSourceTableRegistryEntryItem : RUSourceTableItem {

	CRRegistryEntry* _rentry;

}
-(long long)numberOfChildren;
-(id)entry;
-(void)setEntry:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)cell;
-(double)rowHeight;
-(id)objectValue;
@end

