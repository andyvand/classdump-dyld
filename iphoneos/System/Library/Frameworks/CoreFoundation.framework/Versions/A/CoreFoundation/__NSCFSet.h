/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface __NSCFSet : NSMutableSet {

	unsigned char _cfinfo[4];
	unsigned _rc;
	unsigned _bits[4];
	void* _callbacks;
	id* _values;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)_trueCount;
-(oneway void)release;
-(id)retain;
-(void)addObject:(id)arg1 ;
-(void)finalize;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)removeObject:(id)arg1 ;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
@end

