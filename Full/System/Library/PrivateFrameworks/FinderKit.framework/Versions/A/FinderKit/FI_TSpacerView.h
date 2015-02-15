/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TView.h>

@class FI_TLayoutBinder, NSView;

@interface FI_TSpacerView : FI_TView {

	FI_TLayoutBinder* _layoutBinder;
	NSView* _masterView;
	CGRect _masterViewFrame;
	CGSize _spacerSize;
	BOOL _listenForHeightChanges;

}

@property (nonatomic,retain,readonly) FI_TLayoutBinder * layoutBinder;              //@synthesize layoutBinder=_layoutBinder - In the implementation block
@property (nonatomic,retain) NSView * masterView;                                   //@synthesize masterView=_masterView - In the implementation block
@property (assign,nonatomic) BOOL listenForHeightChanges;                           //@synthesize listenForHeightChanges=_listenForHeightChanges - In the implementation block
-(void)initCommon;
-(void)aboutToTearDown;
-(void)setMasterView:(NSView *)arg1 ;
-(NSView *)masterView;
-(FI_TLayoutBinder *)layoutBinder;
-(void)masterViewFrameChanged:(id)arg1 ;
-(BOOL)listenForHeightChanges;
-(void)setListenForHeightChanges:(BOOL)arg1 ;
@end

