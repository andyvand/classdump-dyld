/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSObject;

@interface QFilterItem : NSObject {

	QFilterItem* upperItem;
	NSMutableArray* subItems;
	NSObject* attributes[2];

}
+(id)newWithUpperItem:(id)arg1 attribute:(id)arg2 ;
-(void)initWithUpper:(id)arg1 attribute:(id)arg2 ;
-(void)setAttribute:(id)arg1 atIndex:(int)arg2 ;
-(void)addSubItem:(id)arg1 ;
-(void)removeSubItem:(id)arg1 ;
-(id)upperItem;
-(unsigned long long)indexOfSubItem:(id)arg1 ;
-(void)recursivelyRemoveQFilterCellViews:(unsigned long long)arg1 ;
-(unsigned long long)nofSubItems;
-(id)subItemAtIndex:(int)arg1 ;
-(void)replaceSubItem:(id)arg1 with:(id)arg2 ;
-(void)removeSubItemWithAttribute:(id)arg1 ;
-(void)removeAttribute:(id)arg1 ;
-(id)attributeAtIndex:(int)arg1 ;
-(id)attribute;
@end

