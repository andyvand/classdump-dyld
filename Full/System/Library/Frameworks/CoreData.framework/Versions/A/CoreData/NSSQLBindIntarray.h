/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSSQLBindIntarray : NSObject {

	unsigned _index;
	id _value;
	NSString* _tableName;

}

@property (assign) unsigned index;                    //@synthesize index=_index - In the implementation block
@property (retain) id value;                          //@synthesize value=_value - In the implementation block
@property (retain) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(void)setIndex:(unsigned)arg1 ;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned)index;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)initWithValue:(id)arg1 ;
@end

