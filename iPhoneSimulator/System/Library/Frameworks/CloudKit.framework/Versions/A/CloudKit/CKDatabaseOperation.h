/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKDatabase;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,retain) CKDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(CKDatabase *)database;
-(void)setDatabase:(CKDatabase *)arg1 ;
@end

