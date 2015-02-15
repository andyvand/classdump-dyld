/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTableViewDataSource.h>
#import <FinderKit/TCoalescingNodeObserverProtocol.h>

@class NSString;

@interface FIAirDropListViewDataSource : FI_TTableViewDataSource <TCoalescingNodeObserverProtocol> {

	TCoalescingNodeObserverCocoaBridge* _nodeObserver;

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
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)prepareContent;
-(void)refresh;
@end
