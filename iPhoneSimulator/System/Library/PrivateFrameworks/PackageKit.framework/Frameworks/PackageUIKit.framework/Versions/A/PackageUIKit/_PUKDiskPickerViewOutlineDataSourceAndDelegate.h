/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <PackageUIKit/NSOutlineViewDataSource.h>
#import <PackageUIKit/NSOutlineViewDelegate.h>

@protocol PUKDiskPickerDataSource, PUKDiskPickerDelegate;
@class PUKDiskPickerView, NSString;

@interface _PUKDiskPickerViewOutlineDataSourceAndDelegate : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate> {

	PUKDiskPickerView* _diskPickerView;
	id<PUKDiskPickerDataSource> _diskPickerDataSource;
	id<PUKDiskPickerDelegate> _diskPickerDelegate;

}

@property (assign) id<PUKDiskPickerDataSource> diskPickerDataSource;              //@synthesize diskPickerDataSource=_diskPickerDataSource - In the implementation block
@property (assign) id<PUKDiskPickerDelegate> diskPickerDelegate;                  //@synthesize diskPickerDelegate=_diskPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDiskPickerView:(id)arg1 ;
-(id<PUKDiskPickerDataSource>)diskPickerDataSource;
-(void)setDiskPickerDataSource:(id<PUKDiskPickerDataSource>)arg1 ;
-(id<PUKDiskPickerDelegate>)diskPickerDelegate;
-(void)setDiskPickerDelegate:(id<PUKDiskPickerDelegate>)arg1 ;
-(void)prepareCell:(id)arg1 forItem:(id)arg2 ;
-(void)diskPickerCellDidChooseAction:(id)arg1 ;
-(void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewColumnDidResize:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
@end

