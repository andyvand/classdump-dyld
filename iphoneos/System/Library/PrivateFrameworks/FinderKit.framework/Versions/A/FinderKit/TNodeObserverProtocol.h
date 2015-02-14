/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TNodeObserverProtocol <NSObject>
@optional
-(void)nodeMoved:(const TFENode*)arg1;
-(void)nodeMDAttributeChanged:(const TFENode*)arg1 attributes:(id)arg2 isDisplayAttributes:(BOOL)arg3;
-(void)openSyncStarted:(const TFENode*)arg1;
-(void)openSyncCompleted:(const TFENode*)arg1;
-(void)syncCompleted:(const TFENode*)arg1;
-(void)openChildListUpdated:(const TFENode*)arg1;
-(void)childrenSpatialDataChanged:(const TFENode*)arg1;
-(void)queryStopped:(const TFENode*)arg1;
-(void)nodeAdded:(const TFENode*)arg1 toObservedNode:(const TFENode*)arg2;
-(void)nodeChanged:(const TFENode*)arg1 inObservedNode:(const TFENode*)arg2 property:(unsigned)arg3;
-(void)nodeDeleted:(const TFENode*)arg1 fromObservedNode:(const TFENode*)arg2;
-(void)nodeGoingAway:(const TFENode*)arg1;
-(void)aliasTargetChanged:(const TFENode*)arg1;

@end

