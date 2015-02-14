/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributeDescription;

@interface NSSQLBindVariable : NSObject {

	int _cd_rc;
	id _value;
	unsigned _sqlType;
	unsigned _index;
	long long _int64;
	NSAttributeDescription* _attributeDescription;

}
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)sqlType;
-(id)attributeDescription;
-(id)initWithValue:(id)arg1 sqlType:(unsigned)arg2 attributeDescription:(id)arg3 ;
-(void)setInt64:(long long)arg1 ;
-(void)setUnsignedInt:(unsigned)arg1 ;
-(id)initWithInt64:(long long)arg1 sqlType:(unsigned)arg2 ;
-(id)initWithUnsignedInt:(unsigned)arg1 sqlType:(unsigned)arg2 ;
-(long long)int64;
-(unsigned)unsignedInt;
-(char)hasObjectValue;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(unsigned)index;
-(void)setValue:(id)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)value;
@end

