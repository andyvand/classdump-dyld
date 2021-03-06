/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface EWSStreamingSubscriptionRequestType : NSObject {

	NSArray* _FolderIds;
	NSArray* _EventTypes;
	char _SubscribeToAllFolders;
	char _SubscribeToAllFoldersIsSpecified;

}

@property (assign,setter=ubscribeToAllFolders,nonatomic) char SubscribeToAllFolders;                                    //@synthesize SubscribeToAllFolders=_SubscribeToAllFolders - In the implementation block
@property (assign,setter=ubscribeToAllFoldersIsSpecified,nonatomic) char SubscribeToAllFoldersIsSpecified;              //@synthesize SubscribeToAllFoldersIsSpecified=_SubscribeToAllFoldersIsSpecified - In the implementation block
@property (nonatomic,copy) NSArray * FolderIds;                                                                         //@synthesize FolderIds=_FolderIds - In the implementation block
@property (nonatomic,copy) NSArray * EventTypes;                                                                        //@synthesize EventTypes=_EventTypes - In the implementation block
+(id)definition;
-(NSArray *)FolderIds;
-(char)SubscribeToAllFolders;
-(void)setSubscribeToAllFolders:(char)arg1 ;
-(char)SubscribeToAllFoldersIsSpecified;
-(void)setSubscribeToAllFoldersIsSpecified:(char)arg1 ;
-(NSArray *)EventTypes;
-(void)setEventTypes:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setFolderIds:(NSArray *)arg1 ;
@end

