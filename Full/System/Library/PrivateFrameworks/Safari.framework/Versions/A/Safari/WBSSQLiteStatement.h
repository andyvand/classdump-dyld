/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class WBSSQLiteDatabase, NSDictionary, NSArray;

@interface WBSSQLiteStatement : NSObject {

	WBSSQLiteDatabase* _database;
	sqlite3_stmtRef _handle;
	NSDictionary* _columnNamesToIndexes;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) NSArray * columnNames; 
@property (nonatomic,readonly) NSDictionary * columnNamesToIndexes; 
@property (nonatomic,readonly) sqlite3_stmtRef handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
-(id)fetch;
-(int)execute;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 ;
-(void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindNullAtParameterIndex:(unsigned long long)arg1 ;
-(WBSSQLiteDatabase *)database;
-(void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(sqlite3_stmtRef)handle;
-(NSDictionary *)columnNamesToIndexes;
-(NSArray *)columnNames;
-(void)dealloc;
-(void)invalidate;
-(char)_isValid;
-(void)reset;
@end

