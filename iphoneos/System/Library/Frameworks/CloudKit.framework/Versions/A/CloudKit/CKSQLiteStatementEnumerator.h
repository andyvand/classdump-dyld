/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator {

	char _closed;
	CKSQLiteStatement* _statement;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) char closed;                                //@synthesize closed=_closed - In the implementation block
-(void)setStatement:(CKSQLiteStatement *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
-(CKSQLiteStatement *)statement;
-(id)block;
-(char)closed;
-(void)setClosed:(char)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(void)close;
@end

