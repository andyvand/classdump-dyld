/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTreeNode.h>

@class NSString, NSTreeController;

@interface NSTreeControllerTreeNode : NSTreeNode {

	NSString* _childrenKeyPath;
	NSString* _leafKeyPath;
	NSString* _countKeyPath;
	NSTreeController* _treeController;
	struct {
		unsigned _observingIsSetup : 1;
		unsigned _isUpdatingChildNodes : 1;
		unsigned _observingRepresentedObjectChildren : 1;
		unsigned reserved : 29;
	}  _NSTreeControllerTreeNodeFlags;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRepresentedObject:(id)arg1 ;
-(char)isLeaf;
-(id)childrenKeyPath;
-(void)_tearDownObserving;
-(void)_setupObserving;
-(void)updateChildNodesForKeyPath:(id)arg1 affectedIndexPaths:(id)arg2 ;
-(id)leafKeyPath;
-(id)countKeyPath;
-(id)initWithRepresentedObject:(id)arg1 treeController:(id)arg2 ;
-(void)_detachFromParent;
-(void)_configureObservingWithOption:(unsigned long long)arg1 ;
-(long long)_leafState;
-(void)_configureObservingForChildNodesWithOption:(unsigned long long)arg1 ;
-(unsigned long long)countOfSubNodes;
-(void)_removeSubNodesAtIndexes:(id)arg1 ;
-(void)willAccessChildNodes;
-(void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1 ;
@end

