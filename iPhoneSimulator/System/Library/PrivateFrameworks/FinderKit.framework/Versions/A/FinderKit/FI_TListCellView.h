/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class FI_TListViewController;

@interface FI_TListCellView : NSTableCellView {

	FI_TListViewController* _controller;
	BOOL _isResizing;

}

@property (assign,nonatomic) FI_TListViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(CGSize)idealSize;
-(void)viewWillStartLiveColumnResize;
-(void)_viewWillStartLiveResize;
-(void)_viewDidEndLiveResize;
-(void)viewDidEndLiveColumnResize;
-(id)initWithFrame:(CGRect)arg1 ;
-(FI_TListViewController *)controller;
-(void)layout;
-(void)setController:(FI_TListViewController *)arg1 ;
@end
