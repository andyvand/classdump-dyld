/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserNotificationCenter, APSConnection, NSArray, NSString;

@interface IMMacNotificationCenterManager : NSObject {

	NSUserNotificationCenter* _center;
	APSConnection* _connection;
	NSArray* _topics;
	NSString* _identifier;

}

@property (nonatomic,retain) NSArray * topics;              //@synthesize topics=_topics - In the implementation block
-(void)userNotificationCenter:(id)arg1 notificationsDisabled:(char)arg2 ;
-(void)_NCUpdated:(id)arg1 ;
-(void)updateNotificationsStatus;
-(void)_cleanupNotificationCenter;
-(id)initWithIdentifier:(id)arg1 topics:(id)arg2 connection:(id)arg3 ;
-(void)enableNotificationCenter:(char)arg1 ;
-(void)setTopics:(NSArray *)arg1 ;
-(NSArray *)topics;
-(void)dealloc;
-(void)invalidate;
@end

