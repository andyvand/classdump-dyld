/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS61* _keyCallBacks;
	SCD_Struct_NS62* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(char)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copy;
-(char)isEqual:(id)arg1 ;
-(id)allKeys;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allValues;
-(void)removeAllItems;
@end

