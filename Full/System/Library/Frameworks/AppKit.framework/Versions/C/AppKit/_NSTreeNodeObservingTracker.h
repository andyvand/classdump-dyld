/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSArray, NSCountedSet, NSMutableDictionary;

@interface _NSTreeNodeObservingTracker : NSObject {

	id _treeNodeObserver;
	NSArray* _availableModelAndProxyKeys;
	NSCountedSet* _treeNodeObservingTracking;
	id _observedTreeNodesData;
	struct {
		unsigned _multipleObservedModelObjects : 1;
		unsigned _registersObservingWithKVOPriorKey : 1;
		unsigned _reservedModelObservingTrackerFlags : 30;
	}  _treeNodeObservingTrackerFlags;
	NSMutableDictionary* _observedModelKeyPathInfoTable;

}
-(void)dealloc;
-(id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2 ;
-(void)stopAllModeObjectObserving;
-(void)registerObservingForAnalyzableKeyPath:(id)arg1 ;
-(void)stopObservingModelObject:(id)arg1 ;
-(void)startObservingModelObject:(id)arg1 ;
-(void)unregisterObservingForAnalyzableKeyPath:(id)arg1 ;
-(void)setRegistersObservingWithKVOPriorKey:(char)arg1 ;
-(void)startObservingModelObjectTree:(id)arg1 ;
-(void)_registerOrUnregister:(char)arg1 observerNotificationsForKeyPath:(id)arg2 ofModelObject:(id)arg3 ;
-(void)_registerOrUnregister:(char)arg1 observerNotificationsForModelObject:(id)arg2 ;
-(void)_startObservingModelObject:(id)arg1 ;
-(void)_stopObservingModelObject:(id)arg1 ;
-(void)_registerOrUnregister:(char)arg1 observerNotificationsForKeyPath:(id)arg2 ;
-(void)unregisterModelKeyPath:(id)arg1 ;
-(void)registerModelKeyPath:(id)arg1 ;
-(char)registersObservingWithKVOPriorKey;
@end

