/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSCountedSet;

@interface QTKeyValueProxy : NSObject {

	id _target;
	NSMutableDictionary* _proxiedKeysTriggeredByNonProxiedKeysTable;
	NSMutableSet* _proxiedKeysAnalyzedForTriggers;
	NSCountedSet* _observedProxiedKeys;

}

@property (nonatomic,retain) id target; 
+(char)shouldProxyValueForKey:(id)arg1 ;
-(id)QTKeyValueProxyTarget_keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)_discoverTriggerKeysForKey:(id)arg1 ;
-(void)_clearTriggerKeys;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

