/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>
#import <FinderKit/TViewAnimationDelegate.h>

@class NSView, NSArray, FI_TLayoutBinder, NSString;

@interface FI_TInfoWindowViewController : FI_TViewController <TViewAnimationDelegate> {

	TFENodeVector* _nodes;
	double _expandedHeight;
	NSView* _bottomBindingView;
	BOOL _expanded;
	BOOL _prefExpanded;
	BOOL _isSetFrameHeightInProgress;
	BOOL _isToggleInProgress;
	NSArray* _valueControllers;
	FI_TLayoutBinder* _layoutBinder;
	FI_TLayoutBinder* _separatorLayoutBinder;

}

@property (assign,nonatomic) BOOL expanded;                                         //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL prefExpanded;                                     //@synthesize prefExpanded=_prefExpanded - In the implementation block
@property (nonatomic,readonly) BOOL isToggleInProgress;                             //@synthesize isToggleInProgress=_isToggleInProgress - In the implementation block
@property (nonatomic,retain,readonly) FI_TLayoutBinder * layoutBinder;              //@synthesize layoutBinder=_layoutBinder - In the implementation block
@property (nonatomic,readonly) double bottomMargin; 
@property (nonatomic,retain) NSArray * valueControllers;                            //@synthesize valueControllers=_valueControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(void)viewLoaded;
-(void)nodesGoingAway:(const TFENodeVector*)arg1 ;
-(void)bulkNodesChanged:(const map<const TFENode, const std::__1::vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > > *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const std::__1::vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > > *const> > >Ref)arg1 ;
-(void)bulkNodesDeleted:(const map<const TFENode, const TFENodeVector *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const TFENodeVector *const> > >Ref)arg1 ;
-(void)nodeMDAttributeChanged:(const TFENode*)arg1 attributes:(id)arg2 isDisplayAttributes:(BOOL)arg3 ;
-(void)setNodes:(const TFENodeVector*)arg1 ;
-(void)aboutToTearDown;
-(void)setFrameHeight_FI:(double)arg1 ;
-(FI_TLayoutBinder *)layoutBinder;
-(void)setValueControllers:(NSArray *)arg1 ;
-(BOOL)expandedDefaultValue;
-(void)targetNodesChanging;
-(void)targetNodesChanged;
-(void)loadValueControllers;
-(void)setSubviewsHidden:(BOOL)arg1 ;
-(NSArray *)valueControllers;
-(unsigned)notificationOptionsForNodes:(const TFENodeVector*)arg1 ;
-(BOOL)prefExpanded;
-(double)disclosedHeight;
-(void)postToggle;
-(void)bottomBindingViewFrameChanged:(id)arg1 ;
-(void)disableBottomViewBindings;
-(void)enableBottomViewBindings;
-(void)preToggle;
-(void)setPrefExpanded:(BOOL)arg1 ;
-(id)expandedPrefKey;
-(unsigned)scriptingID;
-(BOOL)isToggleInProgress;
-(BOOL)expanded;
-(void)setExpanded:(BOOL)arg1 ;
-(double)bottomMargin;
-(void)toggleExpanded:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)refresh;
-(const TFENodeVector*)nodes;
@end

