/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1 ;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setTotalCostLimit:(unsigned)arg1 ;
-(unsigned)totalCostLimit;
-(unsigned)countLimit;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(id)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(id)arg1 ;
-(id)allObjects;
-(id)name;
-(void)setCountLimit:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 ;
-(void)finalize;
@end
