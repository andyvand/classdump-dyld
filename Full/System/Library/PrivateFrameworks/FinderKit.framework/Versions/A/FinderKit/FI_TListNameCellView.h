/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class FI_TListViewController;

@interface FI_TListNameCellView : NSTableCellView {

	FI_TListViewController* _controller;
	TNSRef<NSImageView *> _tagsView;
	TNSRef<NSImageView *> _statusImageView;
	BOOL _hasSpaceForTagImage;
	BOOL _hasSpaceForStatusImageImage;
	BOOL _isResizing;

}

@property (assign,nonatomic) FI_TListViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign) BOOL hasSpaceForTagImage;                                   //@synthesize hasSpaceForTagImage=_hasSpaceForTagImage - In the implementation block
@property (assign) BOOL hasSpaceForStatusImageImage;                           //@synthesize hasSpaceForStatusImageImage=_hasSpaceForStatusImageImage - In the implementation block
-(CGSize)idealSize;
-(void)viewWillStartLiveColumnResize;
-(void)_viewWillStartLiveResize;
-(void)_viewDidEndLiveResize;
-(BOOL)hasSpaceForTagImage;
-(BOOL)hasSpaceForStatusImageImage;
-(CGRect)calcIconViewFrame;
-(CGRect)calcStatusImageViewFrame;
-(CGRect)calcTagViewFrame;
-(void)setHasSpaceForTagImage:(BOOL)arg1 ;
-(void)setHasSpaceForStatusImageImage:(BOOL)arg1 ;
-(void)viewDidEndLiveColumnResize;
-(void)updateTagsImageForNode:(const TFENode*)arg1 selected:(BOOL)arg2 ;
-(void)updateStatusImageForNode:(const TFENode*)arg1 selected:(BOOL)arg2 ;
-(void)updateSpaceForTagImage:(BOOL)arg1 ;
-(void)updateSpaceForStatusImageImage:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(FI_TListViewController *)controller;
-(void)layout;
-(void)setController:(FI_TListViewController *)arg1 ;
-(void)viewDidEndLiveResize;
-(void)viewWillStartLiveResize;
@end

