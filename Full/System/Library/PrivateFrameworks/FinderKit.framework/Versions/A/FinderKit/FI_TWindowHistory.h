/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/TNodeObserverProtocol.h>

@class FI_TBrowserContainerController, FI_TWindowHistoryEntry, NSString;

@interface FI_TWindowHistory : NSObject <TNodeObserverProtocol> {

	TNSRef<NSMutableArray *> _historyList;
	long long _historyPosition;
	TNodeObserverCocoaBridge* _nodeObserver;
	FI_TBrowserContainerController* _controller;

}

@property (nonatomic,readonly) BOOL atBeginning; 
@property (nonatomic,readonly) BOOL atEnd; 
@property (nonatomic,readonly) FI_TWindowHistoryEntry * previous; 
@property (nonatomic,readonly) FI_TWindowHistoryEntry * next; 
@property (assign,nonatomic) long long historyPosition;                        //@synthesize historyPosition=_historyPosition - In the implementation block
@property (nonatomic,readonly) long long entryCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeEntry:(id)arg1 ;
-(void)nodeMoved:(const TFENode*)arg1 ;
-(void)nodeDeleted:(const TFENode*)arg1 fromObservedNode:(const TFENode*)arg2 ;
-(void)aboutToTearDown;
-(void)updateCurrentEntryWindowState:(id)arg1 ;
-(void)stopObservingNodes:(const TFENodeVector*)arg1 ;
-(long long)endPosition;
-(BOOL)atEnd;
-(void)startObservingNodes:(const TFENodeVector*)arg1 ;
-(id)currentEntry;
-(void)removeNodeFromHistory:(const TFENode*)arg1 ;
-(id)initWithBrowserContainer:(id)arg1 ;
-(long long)entryCount;
-(id)entryAtPosition:(long long)arg1 ;
-(BOOL)atBeginning;
-(void)setHistoryPosition:(long long)arg1 ;
-(void)addToHistory:(const TFENodeVector*)arg1 windowState:(id)arg2 ;
-(long long)historyPosition;
-(FI_TWindowHistoryEntry *)next;
-(FI_TWindowHistoryEntry *)previous;
-(void)dealloc;
@end

