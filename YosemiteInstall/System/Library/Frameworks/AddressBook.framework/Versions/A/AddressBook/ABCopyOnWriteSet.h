/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface ABCopyOnWriteSet : NSObject {

	NSSet* _set;

}
-(void)updateWithWritableSet:(/*^block*/id)arg1 ;
-(void)useReadOnlySet:(/*^block*/id)arg1 ;
-(id)retainedSetForReading;
-(id)allObjectsAsSet;
-(void)each:(/*^block*/id)arg1 ;
-(id)filteredSet:(/*^block*/id)arg1 ;
-(id)setByIntersectingSet:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)allObjects;
-(id)member:(id)arg1 ;
@end

