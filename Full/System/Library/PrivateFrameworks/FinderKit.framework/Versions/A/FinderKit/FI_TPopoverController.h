/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/NSPopoverDelegate.h>

@class FI_TBaseBrowserViewController, FI_TPopover, NSString;

@interface FI_TPopoverController : NSObject <NSPopoverDelegate> {

	TNSRef<FI_TViewController *> _contentViewController;
	TNSRef<FI_TLayoutBinder *> _contentViewLayoutBinder;
	TNSRef<FI_TPopover *> _popover;
	TFENode* _popoverTargetNode;
	long long _behavior;
	TNSRef<NSMutableArray *> _popoverSubviewDatas;
	FI_TBaseBrowserViewController* _browserViewController;
	BOOL _releasedWhenClosed;

}

@property (nonatomic,retain,readonly) FI_TPopover * popover; 
@property (nonatomic,retain,readonly) FI_TPopover * popoverNoLoad; 
@property (nonatomic,readonly) BOOL isShown; 
@property (assign,nonatomic) long long behavior;                                                 //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) TFENode* targetNode;                                              //@synthesize popoverTargetNode=_popoverTargetNode - In the implementation block
@property (assign,nonatomic) BOOL releasedWhenClosed;                                            //@synthesize releasedWhenClosed=_releasedWhenClosed - In the implementation block
@property (assign,nonatomic) FI_TBaseBrowserViewController * browserViewController;              //@synthesize browserViewController=_browserViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)browserViewWillMoveToWindow:(id)arg1 ;
-(id)initWithWidth:(double)arg1 ;
-(void)showPopoverRelativeToRect:(CGRect)arg1 relativeView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)closePopover;
-(FI_TBaseBrowserViewController *)browserViewController;
-(TFENode*)targetNode;
-(FI_TPopover *)popoverNoLoad;
-(void)aboutToTearDownPopover;
-(Class)popoverClass;
-(BOOL)useSeparatorsBetweenSubviews;
-(void)setPopoverTargetNode:(const TFENode*)arg1 ;
-(void)setBrowserViewController:(FI_TBaseBrowserViewController *)arg1 ;
-(BOOL)releasedWhenClosed;
-(const TFENode*)popoverTargetNode;
-(void)removeSubview:(id)arg1 ;
-(void)showPopoverOverNode:(const TFENode*)arg1 browserViewController:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)updatePopoverPosition;
-(id)init;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)setReleasedWhenClosed:(BOOL)arg1 ;
-(BOOL)isShown;
-(void)setBehavior:(long long)arg1 ;
-(void)popoverWillClose:(id)arg1 ;
-(long long)behavior;
-(FI_TPopover *)popover;
@end

