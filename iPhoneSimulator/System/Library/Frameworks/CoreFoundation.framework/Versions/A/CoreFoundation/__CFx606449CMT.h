/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/__CFMapTable.h>

@interface __CFx606449CMT : __CFMapTable {

	CFSlice* keys;
	CFSlice* values;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long keyOptions;
	unsigned long long valueOptions;
	unsigned long long mutations;
	opaque_pthread_mutex_t growLock;
	BOOL shouldRehash;

}
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)rehash;
-(unsigned long long)realCount;
-(void)_setBackingStore;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(char)arg4 ;
-(void)grow;
-(void)checkCount:(const char*)arg1 ;
-(void)zeroPairedEntries;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
@end

