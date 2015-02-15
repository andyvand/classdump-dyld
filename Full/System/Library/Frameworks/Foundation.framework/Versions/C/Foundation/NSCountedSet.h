/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet {

	id _table;
	void* _reserved;

}
+(char)supportsSecureCoding;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(char)arg2 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithSet:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
@end

