/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) long long discoverable;                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(char)shouldCheckAppVersion;
-(NSString *)applicationBundleID;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(void)main;
@end

