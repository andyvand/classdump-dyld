/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/__CFPointerArray.h>

@interface __CFx606449CPA : __CFPointerArray {

	CFSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;

}
-(void)_initBlock;
-(void)arrayGrow:(unsigned long long)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS21*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)hash;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)compact;
-(void)addPointer:(void*)arg1 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
@end
