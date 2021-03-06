/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class CalManagedDefaultAlarmSet;


@protocol DefaultAlarmProviderProtocol <NSObject>
@property (assign) char shareDefaultAlarmSettings; 
@property (retain,readonly) CalManagedDefaultAlarmSet * defaultAlarmSet; 
@property (retain,readonly) CalManagedDefaultAlarmSet * localDefaultAlarmSet; 
@required
-(char)shareDefaultAlarmSettings;
-(CalManagedDefaultAlarmSet *)localDefaultAlarmSet;
-(void)setShareDefaultAlarmSettings:(char)arg1;
-(CalManagedDefaultAlarmSet *)defaultAlarmSet;

@end

