/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>
#import <CoreFoundation/NSFastEnumeration.h>

@protocol SBIconIndexMutableListObserver;
@class NSMutableArray, NSMapTable, ;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration> {

	NSMutableArray* _nodes;
	NSMapTable* _index;
	<SBIconIndexMutableListObserver>* _observer;

}

@property (assign,nonatomic) <SBIconIndexMutableListObserver> * observer;              //@synthesize observer=_observer - In the implementation block
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(unsigned)indexOfNode:(id)arg1 ;
-(id)nodeAtIndex:(unsigned)arg1 ;
-(id)indexDescriptionWithPrefix:(id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)replaceNodeAtIndex:(unsigned)arg1 withNode:(id)arg2 ;
-(void)removeNodeAtIndex:(unsigned)arg1 ;
-(void)removeAllNodes;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SB27*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)init;
-(BOOL)containsNode:(id)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(id)nodes;
-(void)addNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
@end
