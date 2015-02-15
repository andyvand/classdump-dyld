/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/NSPopoverDelegate.h>

@class TBaseBrowserViewController, TPopover, NSString;

@interface TPopoverController : NSObject <NSPopoverDelegate> {

	TNSRef<TViewController *> _contentViewController;
	TNSRef<TLayoutBinder *> _contentViewLayoutBinder;
	TNSRef<TPopover *> _popover;
	TFENode* _popoverTargetNode;
	long long _behavior;
	TNSRef<NSMutableArray *> _popoverSubviewDatas;
	TBaseBrowserViewController* _browserViewController;
	BOOL _releasedWhenClosed;

}

@property (nonatomic,retain,readonly) TPopover * popover; 
@property (nonatomic,retain,readonly) TPopover * popoverNoLoad; 
@property (nonatomic,readonly) BOOL isShown; 
@property (assign,nonatomic) long long behavior;                                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) TFENode* targetNode;                                           //@synthesize popoverTargetNode=_popoverTargetNode - In the implementation block
@property (assign,nonatomic) BOOL releasedWhenClosed;                                         //@synthesize releasedWhenClosed=_releasedWhenClosed - In the implementation block
@property (assign,nonatomic) TBaseBrowserViewController * browserViewController;              //@synthesize browserViewController=_browserViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)browserViewWillMoveToWindow:(id)arg1 ;
-(id)initWithWidth:(double)arg1 ;
-(void)showPopoverRelativeToRect:(CGRect)arg1 relativeView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)closePopover;
-(TBaseBrowserViewController *)browserViewController;
-(TFENode*)targetNode;
-(TPopover *)popoverNoLoad;
-(void)aboutToTearDownPopover;
-(Class)popoverClass;
-(BOOL)useSeparatorsBetweenSubviews;
-(void)setPopoverTargetNode:(const TFENode*)arg1 ;
-(void)setBrowserViewController:(TBaseBrowserViewController *)arg1 ;
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
-(TPopover *)popover;
@end
