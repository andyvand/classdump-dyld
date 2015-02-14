/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@class NSArray, _NSTreeNodeObservingTracker;

@interface NSBrowserBinder : NSBinder {

	struct {
		unsigned _ignoreChanges : 1;
		unsigned _reservedOutlineViewBinder : 31;
	}  _browserBinderFlags;
	NSArray* _selectedIndexPaths;
	_NSTreeNodeObservingTracker* _treeNodeObservingTracker;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_init;
-(void)_connectionWasEstablished;
-(void)performAction:(id)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)_dealloc;
-(void)_updateObservingRegistration:(char)arg1 ;
-(void)_connectionWasBroken;
-(void)_resumeObservationNotificationProcessing;
-(void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 ;
-(void)browser:(id)arg1 createRowsForColumn:(long long)arg2 inMatrix:(id)arg3 ;
-(void)setSelectedIndexPaths:(id)arg1 ;
-(id)_selectionIndexPathsInBrowser:(id)arg1 ;
-(void)_updateSelectionIndexPaths:(id)arg1 ;
-(id)indexPathFromSelectionInBrowser:(id)arg1 upToColumn:(unsigned long long)arg2 ;
-(void)adjustMatrix:(id)arg1 numberOfRows:(unsigned long long)arg2 ;
-(void)_redisplayCellForNode:(id)arg1 ;
-(id)selectedIndexPaths;
@end

