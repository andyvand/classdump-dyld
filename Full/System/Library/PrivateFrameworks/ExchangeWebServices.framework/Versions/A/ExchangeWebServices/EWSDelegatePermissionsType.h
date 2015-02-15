/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EWSDelegatePermissionsType : NSObject {

	int _CalendarFolderPermissionLevel;
	int _TasksFolderPermissionLevel;
	int _InboxFolderPermissionLevel;
	int _ContactsFolderPermissionLevel;
	int _NotesFolderPermissionLevel;
	int _JournalFolderPermissionLevel;

}

@property (assign,nonatomic) int CalendarFolderPermissionLevel;              //@synthesize CalendarFolderPermissionLevel=_CalendarFolderPermissionLevel - In the implementation block
@property (assign,nonatomic) int TasksFolderPermissionLevel;                 //@synthesize TasksFolderPermissionLevel=_TasksFolderPermissionLevel - In the implementation block
@property (assign,nonatomic) int InboxFolderPermissionLevel;                 //@synthesize InboxFolderPermissionLevel=_InboxFolderPermissionLevel - In the implementation block
@property (assign,nonatomic) int ContactsFolderPermissionLevel;              //@synthesize ContactsFolderPermissionLevel=_ContactsFolderPermissionLevel - In the implementation block
@property (assign,nonatomic) int NotesFolderPermissionLevel;                 //@synthesize NotesFolderPermissionLevel=_NotesFolderPermissionLevel - In the implementation block
@property (assign,nonatomic) int JournalFolderPermissionLevel;               //@synthesize JournalFolderPermissionLevel=_JournalFolderPermissionLevel - In the implementation block
+(id)definition;
-(int)InboxFolderPermissionLevel;
-(void)setInboxFolderPermissionLevel:(int)arg1 ;
-(int)ContactsFolderPermissionLevel;
-(void)setContactsFolderPermissionLevel:(int)arg1 ;
-(int)NotesFolderPermissionLevel;
-(void)setNotesFolderPermissionLevel:(int)arg1 ;
-(int)JournalFolderPermissionLevel;
-(void)setJournalFolderPermissionLevel:(int)arg1 ;
-(void)setCalendarFolderPermissionLevel:(int)arg1 ;
-(void)setTasksFolderPermissionLevel:(int)arg1 ;
-(int)CalendarFolderPermissionLevel;
-(int)TasksFolderPermissionLevel;
@end

