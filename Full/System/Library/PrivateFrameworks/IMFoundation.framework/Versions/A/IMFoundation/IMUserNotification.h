/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface IMUserNotification : NSObject {

	id _reserved;

}

@property (nonatomic,retain,readonly) id identifier; 
@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) unsigned long long displayFlags; 
@property (nonatomic,retain,readonly) NSDictionary * displayInformation; 
@property (assign,nonatomic) char showInLockScreen; 
@property (assign,nonatomic) char usesNotificationCenter; 
@property (nonatomic,retain) NSString * representedApplicationBundle; 
@property (nonatomic,readonly) unsigned long long response; 
@property (nonatomic,readonly) unsigned long long responseFlags; 
@property (nonatomic,retain,readonly) NSDictionary * responseInformation; 
@property (nonatomic,retain) NSDictionary * userInfo; 
+(id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5 ;
+(id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6 ;
-(unsigned long long)displayFlags;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4 ;
-(unsigned long long)responseFlags;
-(NSDictionary *)displayInformation;
-(NSString *)representedApplicationBundle;
-(void)setRepresentedApplicationBundle:(NSString *)arg1 ;
-(char)showInLockScreen;
-(void)setShowInLockScreen:(char)arg1 ;
-(char)usesNotificationCenter;
-(void)setUsesNotificationCenter:(char)arg1 ;
-(NSDictionary *)responseInformation;
-(void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2 ;
-(double)timeout;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)identifier;
-(unsigned long long)response;
@end

