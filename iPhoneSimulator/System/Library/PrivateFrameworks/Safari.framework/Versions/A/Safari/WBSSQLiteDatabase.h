/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Safari/Safari-Structs.h>
@class NSURL, NSObject, NSString;

@interface WBSSQLiteDatabase : NSObject {

	NSURL* _url;
	sqlite3Ref _handle;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) sqlite3Ref handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) int lastErrorCode; 
@property (nonatomic,readonly) NSString * lastErrorMessage; 
@property (nonatomic,readonly) long long lastInsertRowID; 
@property (nonatomic,readonly) long long changedRowCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSString *)lastErrorMessage;
-(id)fetchQuery:(id)arg1 ;
-(id)initWithURL:(id)arg1 queue:(id)arg2 ;
-(long long)lastInsertRowID;
-(long long)changedRowCount;
-(int)lastErrorCode;
-(int)_openWithFlags:(int)arg1 ;
-(int)executeQuery:(id)arg1 ;
-(sqlite3Ref)handle;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)close;
-(int)open;
@end

