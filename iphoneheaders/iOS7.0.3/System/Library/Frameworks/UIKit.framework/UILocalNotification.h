/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSDate, NSTimeZone, NSCalendar, NSString, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,@dynamic,copy) NSDate * fireDate; 
@property (nonatomic,@dynamic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,@dynamic) unsigned repeatInterval; 
@property (nonatomic,@dynamic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,@dynamic,copy) NSString * alertBody; 
@property (assign,nonatomic,@dynamic) BOOL hasAction; 
@property (nonatomic,@dynamic,copy) NSString * alertAction; 
@property (nonatomic,@dynamic,copy) NSString * alertLaunchImage; 
@property (nonatomic,@dynamic,copy) NSString * soundName; 
@property (assign,nonatomic,@dynamic) int applicationIconBadgeNumber; 
@property (nonatomic,@dynamic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic,@dynamic) int totalRepeatCount; 
@property (assign,nonatomic,@dynamic) int remainingRepeatCount; 
@property (assign,nonatomic,@dynamic) BOOL hideAlertTitle; 
@property (assign,nonatomic,@dynamic) BOOL allowSnooze; 
@property (assign,nonatomic,@dynamic) int soundType; 
@property (assign,nonatomic,@dynamic) BOOL interruptAudioAndLockDevice; 
@property (assign,nonatomic,@dynamic) BOOL resumeApplicationInBackground; 
@property (assign,nonatomic,@dynamic) BOOL fireNotificationsWhenAppRunning; 
@property (assign,nonatomic,@dynamic) BOOL showAlarmStatusBarItem; 
@property (nonatomic,@dynamic,copy) NSString * customLockSliderLabel; 
@property (nonatomic,@dynamic,copy) NSString * firedNotificationName; 
@property (nonatomic,@dynamic,copy) NSString * snoozedNotificationName; 
@property (assign,nonatomic,@dynamic) BOOL isSystemAlert; 
+(id)alloc;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(int)compareFireDates:(id)arg1 ;
-(void)clearNonSystemProperties;
@end
