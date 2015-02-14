/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>

@class NSString;

@interface MFEWSSyncFolderHierarchyRequestOperation : MFEWSRequestOperation {

	NSString* _syncState;

}

@property (nonatomic,copy,readonly) NSString * syncState;              //@synthesize syncState=_syncState - In the implementation block
+(Class)classForResponse;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(id)activityString;
-(id)prepareRequest;
-(id)initWithSyncState:(id)arg1 createBlock:(/*^block*/id)arg2 updateBlock:(/*^block*/id)arg3 deleteBlock:(/*^block*/id)arg4 gateway:(id)arg5 ;
-(NSString *)syncState;
@end

