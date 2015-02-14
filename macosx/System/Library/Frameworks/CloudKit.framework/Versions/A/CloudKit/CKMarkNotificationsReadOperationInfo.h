/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo {

	NSArray* _notificationIDs;

}

@property (nonatomic,retain) NSArray * notificationIDs;              //@synthesize notificationIDs=_notificationIDs - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

