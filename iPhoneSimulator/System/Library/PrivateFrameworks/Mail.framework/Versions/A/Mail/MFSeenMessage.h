/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface MFSeenMessage : NSManagedObject
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)messageID;
-(void)setMessageID:(id)arg1 ;
-(void)setIsOnServer:(char)arg1 ;
-(void)setShouldDeleteFromServer:(char)arg1 ;
-(id)dateSeen;
-(char)shouldDeleteFromServer;
-(char)isOnServer;
-(void)setDateSeen:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
@end

