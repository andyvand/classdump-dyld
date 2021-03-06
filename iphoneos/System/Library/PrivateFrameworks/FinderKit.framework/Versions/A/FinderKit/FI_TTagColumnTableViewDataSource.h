/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTableViewDataSource.h>
#import <FinderKit/TCoalescingNodeObserverProtocol.h>

@class NSString;

@interface FI_TTagColumnTableViewDataSource : FI_TTableViewDataSource <TCoalescingNodeObserverProtocol> {

	TCoalescingNodeObserverCocoaBridge* _nodeObserver;
	TFENode* _tagsContainerNode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nodesAdded:(const TFENodeVector*)arg1 toObservedNode:(const TFENode*)arg2 ;
-(void)nodesChanged:(const vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > >*)arg1 inObservedNode:(const TFENode*)arg2 ;
-(void)nodesDeleted:(const TFENodeVector*)arg1 fromObservedNode:(const TFENode*)arg2 ;
-(void)openSyncCompleted:(const TFENode*)arg1 ;
-(void)openChildListUpdated:(const TFENode*)arg1 ;
-(void)awakeCommon;
-(void)aboutToTearDown;
-(id)tableViewItemAtIndex:(long long)arg1 ;
-(TFENode*)nodeAtIndex:(long long)arg1 ;
-(id)tableView:(id)arg1 pasteboardWriterForRow:(long long)arg2 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)prepareContent;
-(void)refresh;
@end

