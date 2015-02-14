/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>
#import <Safari/VisualTabPickerCloudDeviceViewDataSource.h>
#import <Safari/VisualTabPickerCloudDeviceViewDelegate.h>

@protocol VisualTabPickerCloudTabsViewDataSource, VisualTabPickerCloudTabsViewDelegate;
@class NSMutableArray, NSString;

@interface VisualTabPickerCloudTabsView : NSView <VisualTabPickerCloudDeviceViewDataSource, VisualTabPickerCloudDeviceViewDelegate> {

	NSMutableArray* _deviceViews;
	char _hasDeviceViewsConstraints;
	id<VisualTabPickerCloudTabsViewDataSource> _dataSource;
	id<VisualTabPickerCloudTabsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerCloudTabsViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerCloudTabsViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
-(unsigned long long)numberOfTabsForVisualTabPickerCloudDeviceView:(id)arg1 ;
-(id)nameOfDeviceForVisualTabPickerCloudDeviceView:(id)arg1 ;
-(id)visualTabPickerCloudDeviceView:(id)arg1 titleOfTabAtIndex:(unsigned long long)arg2 ;
-(void)visualTabPickerCloudDeviceView:(id)arg1 didRemoveCloudTabAtIndex:(unsigned long long)arg2 ;
-(void)visualTabPickerCloudDeviceView:(id)arg1 didSelectCloudTabAtIndex:(unsigned long long)arg2 ;
-(void)setDelegate:(id<VisualTabPickerCloudTabsViewDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)layout;
-(id<VisualTabPickerCloudTabsViewDelegate>)delegate;
-(void)reloadData;
-(void)setDataSource:(id<VisualTabPickerCloudTabsViewDataSource>)arg1 ;
-(id<VisualTabPickerCloudTabsViewDataSource>)dataSource;
-(void)_reloadData;
@end

