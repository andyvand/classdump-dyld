/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface NSCFDictionary : NSMutableDictionary
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)keyEnumerator;
-(void)removeObjectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)setObservationInfo:(void*)arg1 ;
@end
