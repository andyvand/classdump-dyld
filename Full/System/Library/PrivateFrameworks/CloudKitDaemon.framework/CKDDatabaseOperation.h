/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDDatabaseOperation : CKDOperation {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)configureRequest:(id)arg1 ;
-(id)newChildOperationInfoOfClass:(Class)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(long long)databaseScope;
@end
