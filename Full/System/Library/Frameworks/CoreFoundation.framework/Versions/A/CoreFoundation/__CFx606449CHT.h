/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/__CFHashTable.h>

@interface __CFx606449CHT : __CFHashTable {

	CFSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;

}
-(void*)getItem:(const void*)arg1 ;
-(void)_initBlock;
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 ;
-(void)hashGrow;
-(void)rehash;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)hash;
-(id)allObjects;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)removeItem:(const void*)arg1 ;
@end

