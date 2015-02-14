/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSArrayController.h>
#import <FinderKit/NSTableViewDataSource.h>

@class FI_TTableView, NSString;

@interface FI_TTableViewDataSource : NSArrayController <NSTableViewDataSource> {

	FI_TTableView* _tableView;

}

@property (assign,nonatomic) FI_TTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initCommon;
-(void)awakeCommon;
-(void)bindToTableColumn:(id)arg1 ;
-(void)unbindFromTableColumn:(id)arg1 ;
-(void)replaceObjects:(id)arg1 withObjects:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(void)clear;
-(id)initWithCoder:(id)arg1 ;
-(FI_TTableView *)tableView;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)awakeFromNib;
-(id)initWithContent:(id)arg1 ;
-(void)setTableView:(FI_TTableView *)arg1 ;
@end

