/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSSQLStatement.h>

@interface NSSQLiteStatement : NSSQLStatement {

	sqlite3_stmtRef _cachedSQLiteStatement;

}
-(void)clearCaches;
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 ;
-(void)finalize;
-(void)dealloc;
@end

