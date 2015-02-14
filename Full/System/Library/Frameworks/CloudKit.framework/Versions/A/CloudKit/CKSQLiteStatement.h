/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudKit/CloudKit-Structs.h>
@class CKSQLite, NSString;

@interface CKSQLiteStatement : NSObject {

	char _reset;
	CKSQLite* _SQLite;
	NSString* _SQL;
	sqlite3_stmtRef _handle;

}

@property (setter=QLite,nonatomic,__weak,readonly) CKSQLite * SQLite;              //@synthesize SQLite=_SQLite - In the implementation block
@property (setter=QL,nonatomic,readonly) NSString * SQL;                           //@synthesize SQL=_SQL - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef handle;                             //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isReset,nonatomic) char reset;                            //@synthesize reset=_reset - In the implementation block
-(char)isReset;
-(id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(sqlite3_stmtRef)arg3 ;
-(void)finalizeStatement;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValues:(id)arg1 ;
-(id)allObjectsByColumnName;
-(void)bindNullAtIndex:(unsigned long long)arg1 ;
-(void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(int)columnTypeAtIndex:(unsigned long long)arg1 ;
-(id)blobAtIndex:(unsigned long long)arg1 ;
-(id)columnNameAtIndex:(unsigned long long)arg1 ;
-(CKSQLite *)SQLite;
-(NSString *)SQL;
-(void)setReset:(char)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(sqlite3_stmtRef)handle;
-(char)step;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(char)reset;
-(unsigned long long)columnCount;
@end

