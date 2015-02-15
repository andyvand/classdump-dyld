/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/TCoalescingNodeObserverProtocol.h>

@class NSString;

@interface FI_TPromiseDragReceiver : NSObject <TCoalescingNodeObserverProtocol> {

	function<void (const TFENode &)>* _promiseDragNodeAddedCallback;
	function<void (const TFENodeVector &, const TError &)>* _promiseDragCompletionCallback;
	TCoalescingNodeObserverCocoaBridge* _nodeObserver;
	TFENode* _dropTargetNode;
	TStringVector* _rawNamesOfPendingPromisedNodes;
	TPromiseDragReceiverThread* _receiverThread;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDropTargetNode:(const TFENode*)arg1 ;
-(void)receivePromiseDrag:(TDropOperation*)arg1 nodeAddedCallback:(/*^block*/id)arg2 completionCallback:(/*^block*/id)arg3 ;
-(void)nodesAdded:(const TFENodeVector*)arg1 toObservedNode:(const TFENode*)arg2 ;
-(void)openSyncCompleted:(const TFENode*)arg1 ;
-(void)waitForPromisedNodesAsync;
-(id)init;
-(void)dealloc;
@end
