/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArrayController, NSArray, NSPredicate;

@interface _NSArrayControllerExtensions : NSObject {

	NSArrayController* _controller;
	NSArray* _automaticRearrangementKeyPaths;
	NSArray* _sortDescriptors;
	NSPredicate* _filterPredicate;
	id _suppressedContentObjectsObservingTracker;

}
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithController:(id)arg1 ;
-(void)_setFilterPredicateNoCopy:(id)arg1 ;
-(id)_automaticRearrangementKeyPaths;
-(id)_setAutomaticRearrangementKeyPaths:(id)arg1 ;
-(void)_setSortDescriptorsNoCopy:(id)arg1 ;
-(id)_setSortDescriptors:(id)arg1 ;
-(id)_sortDescriptors;
-(id)_setFilterPredicate:(id)arg1 ;
-(id)_filterPredicate;
-(void)_startRearrangementObservingForSuppressedContentObjects:(id)arg1 ;
-(void)_stopRearrangementObservingForSuppressedContentObjects;
@end

