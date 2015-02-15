/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableArray, NSIndexPath, NSArray;

@interface NSTreeNode : NSObject {

	id _childNodesProxy;
	id _representedObject;
	void* _observationInfo;
	id _reserved2;
	NSMutableArray* _childNodes;
	NSTreeNode* _parentNode;
	struct {
		unsigned ignoreObserving : 1;
		unsigned reserved : 31;
	}  _NSTreeNodeFlags;

}

@property (readonly) id representedObject; 
@property (readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,readonly) char leaf; 
@property (copy,readonly) NSArray * childNodes; 
@property (readonly) NSMutableArray * mutableChildNodes; 
@property (readonly) NSTreeNode * parentNode; 
+(id)treeNodeWithRepresentedObject:(id)arg1 ;
-(id)imageRepresentationType;
-(id)imageRepresentation;
-(id)imageUID;
-(id)imageTitle;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(char)isLeaf;
-(NSIndexPath *)indexPath;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(NSArray *)childNodes;
-(void*)observationInfo;
-(NSTreeNode *)parentNode;
-(NSMutableArray *)mutableChildNodes;
-(id)_descendantNodeWithRepresentedObjectLineage:(id)arg1 ;
-(id)_privateChildNodes;
-(void)sortWithSortDescriptors:(id)arg1 recursively:(char)arg2 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)_detachFromParent;
-(char)_ignoreObserving;
-(void)_disableObserving;
-(void)_enableObserving;
-(unsigned long long)countOfSubNodes;
-(void)_insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2 ;
-(id)objectInSubNodesAtIndex:(unsigned long long)arg1 ;
-(void)_removeObjectFromSubNodesAtIndex:(unsigned long long)arg1 ;
-(void)_removeSubNodesAtIndexes:(id)arg1 ;
-(void)setParentNode:(NSTreeNode *)arg1 ;
-(void)willAccessChildNodes;
-(void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1 ;
-(id)subNodesAtIndexes:(id)arg1 ;
-(void)getSubNodes:(id*)arg1 range:(NSRange)arg2 ;
-(void)removeSubNodesAtIndexes:(id)arg1 ;
-(id)_indexPath;
-(void)setObservationInfo:(void*)arg1 ;
-(char)hasAncestor:(id)arg1 ;
-(id)observedObject;
-(id)subnodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childCountForKeyPath:(id)arg1 ;
-(void)startObservingModelKeyPath:(id)arg1 ;
@end
