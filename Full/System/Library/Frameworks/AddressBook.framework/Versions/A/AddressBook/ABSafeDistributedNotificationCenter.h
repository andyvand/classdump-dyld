/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDistributedNotificationCenter, ABSafeNotificationReflectorCollection;

@interface ABSafeDistributedNotificationCenter : NSObject {

	NSDistributedNotificationCenter* _center;
	ABSafeNotificationReflectorCollection* _reflectors;

}
+(id)defaultCenter;
-(id)addSafeObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeSafeObserver:(id)arg1 ;
-(void)removeSafeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(id)addSafeObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5 ;
-(void)removeSafeObserversInCollection:(id)arg1 ;
-(void)dumpStatistics;
-(void)dumpObservers;
-(id)makeSignatureWithName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 ;
-(id)initWithNotificationCenter:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

