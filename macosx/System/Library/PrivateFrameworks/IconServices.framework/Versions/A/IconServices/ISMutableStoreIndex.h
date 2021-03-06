/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISStoreIndex.h>

@interface ISMutableStoreIndex : ISStoreIndex {

	unsigned long long _initialCapacity;
	dispatch_queue_sRef _serialQueue;

}

@property (readonly) unsigned long long initialCapacity;              //@synthesize initialCapacity=_initialCapacity - In the implementation block
@property (readonly) dispatch_queue_sRef serialQueue;                 //@synthesize serialQueue=_serialQueue - In the implementation block
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)_extend;
-(id)initWithStoreFileURL:(id)arg1 capacity:(unsigned long long)arg2 ;
-(char)addValue:(SCD_Struct_IS3*)arg1 forKey:(unsigned long long)arg2 ;
-(char)removeValuePassingTest:(/*^block*/id)arg1 ;
-(char)removeValueForKey:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)initialCapacity;
-(dispatch_queue_sRef)serialQueue;
-(void)finalize;
-(void)dealloc;
-(id)data;
-(void)removeAll;
@end

