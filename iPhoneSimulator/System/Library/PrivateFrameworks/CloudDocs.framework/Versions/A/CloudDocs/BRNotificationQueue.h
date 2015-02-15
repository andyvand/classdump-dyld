/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned long long _dequeued;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)addNotification:(id)arg1 asDead:(char)arg2 ;
-(void)_filterIndex:(id)arg1 ;
-(void)_processCallBacks;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
@end

