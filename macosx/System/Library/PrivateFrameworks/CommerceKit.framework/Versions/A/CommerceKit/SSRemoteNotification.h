/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString;

@interface SSRemoteNotification : NSObject {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) NSNumber * targetDSID; 
@property (nonatomic,readonly) NSString * alertBodyString; 
@property (nonatomic,readonly) NSString * alertCancelString; 
@property (nonatomic,readonly) NSString * alertOKString; 
@property (nonatomic,readonly) NSString * alertTitleString; 
@property (nonatomic,readonly) id badgeValue; 
@property (nonatomic,readonly) NSString * soundFileName; 
@property (nonatomic,readonly) NSDictionary * notificationUserInfo; 
-(id)badgeValue;
-(NSDictionary *)notificationUserInfo;
-(id)_valueForAlertKey:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(NSNumber *)targetDSID;
-(NSString *)alertBodyString;
-(NSString *)alertCancelString;
-(NSString *)alertOKString;
-(NSString *)alertTitleString;
-(NSString *)soundFileName;
-(id)valueForKey:(id)arg1 ;
-(long long)actionType;
@end
