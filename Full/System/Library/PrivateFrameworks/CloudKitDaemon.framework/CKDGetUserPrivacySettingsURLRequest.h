/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest {

	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(int)operationType;
@end
