/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NFAccount;

@interface NFOfflineAction : NSManagedObject

@property (assign,nonatomic) long long sequenceNumber; 
@property (nonatomic,retain) NFAccount * account; 
+(char)pendingOfflineActionsExist;
-(id)compactDescription;
-(void)awakeFromInsert;
@end

