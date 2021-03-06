/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessagesKit/SOHelper.h>
#import <MessagesKit/SOBuddyHelperReceiverProtocol.h>

@class NSString;

@interface SOBuddyHelper : SOHelper <SOBuddyHelperReceiverProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)receiverProtocol;
+(id)remoteReceiverProtocol;
+(id)bundleName;
+(id)weakSharedInstance;
-(void)setValue:(id)arg1 forControllerKey:(id)arg2 ;
-(id)buddyListTitle;
-(id)buddyLists;
-(id)bonjourBuddyListTitle;
-(id)bonjourBuddyList;
-(void)openConversationWithBuddyID:(id)arg1 serviceName:(id)arg2 ;
-(id)buddyListTitleBlocking;
-(id)buddyListsBlocking;
-(id)bonjourBuddyListTitleBlocking;
-(id)bonjourBuddyListBlocking;
-(void)openConversationWithBuddyDetails:(id)arg1 ;
-(id)imageForName:(id)arg1 ;
@end

