/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSString;

@interface NSSQLiteIntarrayTable : NSObject {

	sqlite3_intarrayRef _intarrayTable;
	NSString* _intarrayTableName;

}

@property (assign) sqlite3_intarrayRef intarrayTable;              //@synthesize intarrayTable=_intarrayTable - In the implementation block
@property (retain) NSString * intarrayTableName;                   //@synthesize intarrayTableName=_intarrayTableName - In the implementation block
-(sqlite3_intarrayRef)intarrayTable;
-(void)setIntarrayTable:(sqlite3_intarrayRef)arg1 ;
-(NSString *)intarrayTableName;
-(void)setIntarrayTableName:(NSString *)arg1 ;
-(void)dealloc;
@end

