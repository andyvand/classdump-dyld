/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableColumn.h>

@class NSMutableArray;

@interface QFilterTableColumn : NSTableColumn {

	NSMutableArray* cells;

}
+(id)newQFilterCell;
-(void)noteNumberOfTableRowsChanged:(id)arg1 ;
-(void)willRemoveFromTableView:(id)arg1 ;
-(void)appendRows:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)cells;
-(id)initWithIdentifier:(id)arg1 ;
-(void)removeRows:(int)arg1 ;
-(id)dataCellForRow:(long long)arg1 ;
@end

