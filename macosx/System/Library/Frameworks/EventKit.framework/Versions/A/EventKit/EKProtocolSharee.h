/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol EKProtocolSharee <EKProtocolObject>
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) char isCurrentUserForSharing; 
@property (nonatomic,readonly) char isCurrentUserForScheduling; 
@required
-(NSURL *)URL;
-(NSString *)name;
-(id)status;
-(id)accessLevel;
-(char)isCurrentUserForSharing;
-(char)isCurrentUserForScheduling;

@end

