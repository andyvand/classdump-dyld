/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/icbaccountsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSMutableDictionary, ICBAccount, NSDictionary;

@interface ICBAccountOperation : NSOperation {

	char _isExecuting;
	char _isFinished;
	char _succeeded;
	char _mergeOnDelete;
	NSString* _uid;
	NSMutableDictionary* _settings;
	ICBAccount* _account;
	int _operationType;
	NSString* _parentUID;

}

@property (retain) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) char succeeded;                     //@synthesize succeeded=_succeeded - In the implementation block
@property (retain) ICBAccount * account;                 //@synthesize account=_account - In the implementation block
@property (retain) NSString * uid;                       //@synthesize uid=_uid - In the implementation block
@property (assign) int operationType;                    //@synthesize operationType=_operationType - In the implementation block
@property (assign) char mergeOnDelete;                   //@synthesize mergeOnDelete=_mergeOnDelete - In the implementation block
@property (retain) NSString * parentUID;                 //@synthesize parentUID=_parentUID - In the implementation block
-(void)finishWithAccountUID:(id)arg1 ;
-(void)createAccount;
-(void)modifyAccount;
-(char)mergeOnDelete;
-(void)setMergeOnDelete:(char)arg1 ;
-(NSString *)parentUID;
-(void)setParentUID:(NSString *)arg1 ;
-(id)pluginID;
-(void)setSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)settings;
-(char)isExecuting;
-(char)succeeded;
-(int)operationType;
-(void)deleteAccount;
-(char)isConcurrent;
-(id)providerID;
-(void)start;
-(char)isFinished;
-(NSString *)uid;
-(ICBAccount *)account;
-(void)setUid:(NSString *)arg1 ;
-(void)setAccount:(ICBAccount *)arg1 ;
-(void)setOperationType:(int)arg1 ;
@end
