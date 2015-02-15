/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>
#import <FinderKit/TCoalescingNodeObserverProtocol.h>

@class NSArray, NSString;

@interface FI_TTagEditorController : FI_TViewController <TCoalescingNodeObserverProtocol> {

	TFENodeVector* _nodes;
	TCoalescingNodeObserverCocoaBridge* _nodeObserver;
	TNSRef<NSArray *> _originalTagAttributes;
	BOOL _canceled;
	TNotificationCenterObserver* _didEndEditingObserver;
	TNotificationCenterObserver* _forceTokenFieldToCommitObserver;

}

@property (getter=isCanceled) BOOL canceled;                        //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) NSArray * tags; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewLoaded;
-(void)nodesChanged:(const vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > >*)arg1 inObservedNode:(const TFENode*)arg2 ;
-(void)setNodes:(const TFENodeVector*)arg1 ;
-(id)taggingTokenField;
-(id)taggingTokenFieldNoLoad;
-(void)applyTagsToNodes;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(void)dealloc;
-(NSArray *)tags;
-(id)nibName;
-(void)setTags:(NSArray *)arg1 ;
@end

