/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Dock/Dock-Structs.h>
@class NSMapTable;

@interface DPStatementCache : NSObject {

	NSMapTable* _statements;

}
-(sqlite3_stmtRef)statementWithString:(id)arg1 database:(sqlite3Ref)arg2 result:(int*)arg3 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
