/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IMMultiDict : NSObject {

	NSMutableDictionary* _dictionary;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;                    //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)objectsForKey:(id)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)peekObjectForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(unsigned long long)countForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(NSMutableDictionary *)dictionary;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
@end

