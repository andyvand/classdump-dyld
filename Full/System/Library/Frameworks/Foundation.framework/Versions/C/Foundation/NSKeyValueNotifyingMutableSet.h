/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableSet.h>

@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {

	NSMutableSet* _mutableSet;

}
+(SCD_Struct_NS53*)_proxyNonGCPoolPointer;
+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)addObject:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)removeAllObjects;
-(id)member:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
@end

