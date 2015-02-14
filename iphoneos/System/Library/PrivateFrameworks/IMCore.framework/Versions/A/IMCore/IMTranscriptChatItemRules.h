/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMChatItemRules.h>

@class IMChat, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {

	IMChat* _chat;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithChat:(id)arg1 ;
-(void)_didProcessChatItems:(id)arg1 ;
-(char)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2 ;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 ;
-(id)testChatItems;
-(char)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3 ;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2 ;
-(id)chatItemForIMChatItem:(id)arg1 ;
-(char)shouldShowRaiseMessageStatus;
-(void)_invalidate;
@end

