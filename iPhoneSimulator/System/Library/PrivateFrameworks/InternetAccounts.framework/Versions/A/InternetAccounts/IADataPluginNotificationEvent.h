/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IADataPluginNotificationEvent : NSObject {

	NSString* _uid;
	NSString* _pluginID;
	NSString* _eventType;
	NSDate* _date;

}

@property (retain) NSString * uid;                    //@synthesize uid=_uid - In the implementation block
@property (retain) NSString * pluginID;               //@synthesize pluginID=_pluginID - In the implementation block
@property (retain) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (retain) NSDate * date;                     //@synthesize date=_date - In the implementation block
+(id)eventForPlugin:(id)arg1 uid:(id)arg2 eventType:(id)arg3 date:(id)arg4 ;
-(void)setPluginID:(NSString *)arg1 ;
-(NSString *)pluginID;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
@end

