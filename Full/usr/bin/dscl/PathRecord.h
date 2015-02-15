/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/dscl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <dscl/PathItem.h>

@class DSoRecord;

@interface PathRecord : PathItem {

	DSoRecord* _record;

}
-(int)authenticateName:(id)arg1 withPassword:(id)arg2 authOnly:(char)arg3 ;
-(int)list:(id)arg1 key:(id)arg2 ;
-(id)cd:(id)arg1 ;
-(id)getDictionary:(id)arg1 ;
-(int)appendKey:(id)arg1 withValues:(id)arg2 ;
-(int)setPasswordArray:(id)arg1 ;
-(int)createKey:(id)arg1 withValues:(id)arg2 ;
-(int)create:(id)arg1 plistPath:(id)arg2 values:(id)arg3 ;
-(int)create:(id)arg1 atIndex:(int)arg2 plistPath:(id)arg3 values:(id)arg4 ;
-(int)deleteItem;
-(int)deleteKey:(id)arg1 withValues:(id)arg2 ;
-(int)delete:(id)arg1 plistPath:(id)arg2 values:(id)arg3 ;
-(int)delete:(id)arg1 atIndex:(int)arg2 plistPath:(id)arg3 values:(id)arg4 ;
-(int)mergeKey:(id)arg1 withValues:(id)arg2 ;
-(int)changeKey:(id)arg1 oldAndNewValues:(id)arg2 ;
-(int)changeKey:(id)arg1 indexAndNewValue:(id)arg2 ;
-(int)modify:(int)arg1 withKey:(id)arg2 withValues:(id)arg3 ;
-(id)initWithRecord:(id)arg1 ;
-(id)nodeName;
-(id)init;
-(void)dealloc;
-(id)name;
-(id)record;
@end
