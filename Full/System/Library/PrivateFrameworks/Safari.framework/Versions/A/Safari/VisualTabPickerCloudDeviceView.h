/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/NSTableViewDataSource.h>
#import <Safari/NSTableViewDelegate.h>
#import <Safari/RolloverActionButtonTableCellViewDelegate.h>
#import <Safari/AccessibleRolloverActionButtonTableCellViewDelegate.h>

@protocol VisualTabPickerCloudDeviceViewDataSource, VisualTabPickerCloudDeviceViewDelegate;
@class NSTextField, NSTableView, NSString;

@interface VisualTabPickerCloudDeviceView : NSView <NSTableViewDataSource, NSTableViewDelegate, RolloverActionButtonTableCellViewDelegate, AccessibleRolloverActionButtonTableCellViewDelegate> {

	NSTextField* _deviceNameTextField;
	NSTableView* _tableView;
	char _closeRequestSupported;
	id<VisualTabPickerCloudDeviceViewDataSource> _dataSource;
	id<VisualTabPickerCloudDeviceViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerCloudDeviceViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerCloudDeviceViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char closeRequestSupported;                                                  //@synthesize closeRequestSupported=_closeRequestSupported - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityGetDescriptionForAccessibleRolloverActionButtonTableCellView:(id)arg1 ;
-(void)accessibilityPerformPressActionForAccessibleRolloverActionButtonTableCellView:(id)arg1 ;
-(void)actionButtonClickedInTableCellView:(id)arg1 ;
-(void)_createTableView;
-(void)_updateTableAccessibilityLabel;
-(id)_createTabTitleField;
-(char)_isHeaderRow:(long long)arg1 ;
-(unsigned long long)_cloudTabIndexForRowIndex:(unsigned long long)arg1 ;
-(void)_activateTableCellRow:(unsigned long long)arg1 ;
-(char)closeRequestSupported;
-(void)setCloseRequestSupported:(char)arg1 ;
-(void)setDelegate:(id<VisualTabPickerCloudDeviceViewDelegate>)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id<VisualTabPickerCloudDeviceViewDelegate>)delegate;
-(void)setDataSource:(id<VisualTabPickerCloudDeviceViewDataSource>)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id<VisualTabPickerCloudDeviceViewDataSource>)dataSource;
-(void)_reloadData;
@end

